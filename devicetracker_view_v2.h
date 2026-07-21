/*
    This file is part of Kismet

    Kismet is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Kismet is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Kismet; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef __DEVICE_VIEW_V2_H__
#define __DEVICE_VIEW_V2_H__

#include "config.h"

#include <vector>

#include "devicetracker_component_v2.h"
#include "json_adapter_v2.h"
#include "kis_mutex.h"
#include "packet.h"
#include "unordered_dense.h"


// device views are common holders for view endpoints and filtering
//
// views are optimized for maintaining independent sub-sets of the total device list
//
// views are primarily designed for long-term categorization of data like access points,
// views by phy, etc.  they are not particularly well suited to rapidly changing datasets;
// under the current implementation, removal of a device from a group is a much more
// expensive operation
//
// views live under the device uri tree in
// /devices/view/[view id]/...
//
// views also function as their own mutex; because callers are assumed to be operating
// on multiple elements at once, they are expected to manage the mutex at the caller
// level

// default new device: add no device automatically
struct device_view_default_new_cb {
    bool operator()(const kis_tracked_device_base_v2*) {
        return false;
    }
};

// default update device:  keep all devices
struct device_view_default_update_cb {
    bool operator()(const kis_tracked_device_base_v2*) {
        return true;
    }
};


template<typename NewFtor = device_view_default_new_cb,
    typename UpdateFtor = device_view_default_update_cb>
class device_tracker_view_v2 : public json_adapter_v2::jsonable, public kis_shared_mutex {
public:
    device_tracker_view_v2() :
    json_adapter_v2::jsonable() {
        reset();
    }

    virtual ~device_tracker_view_v2() { }

    void reset() {

    }

    auto view_id() const { return view_id_; }
    void set_view_id(auto v) { view_id_ = v; }

    const auto& view_description() const { return view_description_; }
    void set_view_description(const auto& v) { view_description_ = v; }

    auto view_indexed() const { return view_indexed_; }
    void set_view_indexed(auto v) { view_indexed_ = v; }

    const auto& device_list() const { return device_list_; }
    void set_device_list(const auto& v) { device_list_ = v; }

    // direct add/remove which bypass the device update criteria
    void add_device(kis_tracked_device_base_v2 *d) {
        if (device_presence_map_.find(d->key()) == device_presence_map_.end()) {
            device_list_.push_back(d);
            device_presence_map_[d->key()] = true;
        }
    }

    void remove_device(kis_tracked_device_base_v2 *d) {
        const auto &k = device_presence_map_.find(d->key());
        if (k != device_presence_map_.end()) {
            for (size_t i = 0; i < device_list_.size(); i++) {
                if (device_list_[i]->key() == d->key()) {
                    device_list_.erase(device_list_.begin() + i);
                    break;
                }
            }

            device_presence_map_.erase(k);
        }
    }

    // normal insertion called by devicetracker which uses add ftor
    virtual void new_device(kis_tracked_device_base_v2 *d) {
        const auto& k = device_presence_map_.find(d->key());
        if (k == device_presence_map_.end()) {
            if (NewFtor{}(d)) {
                device_list_.push_back(d);
                device_presence_map_[d->key()] = true;
            }
        }
    }

    // re-evaluate ftor to determine if a device should remain in
    // this view; remember removing devices is inefficient so should be
    // avoided as much as possible
    virtual void update_device(kis_tracked_device_base_v2 *d) {
        const auto& k = device_presence_map_.find(d->key());
        if (k != device_presence_map_.end()) {
            if (!UpdateFtor{}(d)) {
                for (size_t i = 0; i < device_presence_map_.size(); i++) {
                    if (device_list_[i]->key() == d->key()) {
                        device_list_.erase(device_list_.begin() + i);
                        break;
                    }
                }
            }

            device_presence_map_.erase(k);
        }
    }



    virtual void as_json(std::ostream& os, json_adapter_v2::opts *opts) override;
    virtual void filtered_as_json(std::ostream& os, json_adapter_v2::opts *opts, const json_adapter_v2::field_group_map& fields) override;

protected:
    std::string view_id_;
    bool view_indexed_;
    uuid view_uuid_;
    std::string view_description_;

    std::vector<kis_tracked_device_base_v2 *> device_list_;
    ankerl::unordered_dense::map<device_key_v2, bool> device_presence_map_;
};

template<typename N, typename U> struct json_adapter_v2::json_encode<device_tracker_view_v2<N, U>> {
     void operator()(std::ostream& os, json_adapter_v2::opts *opts, device_tracker_view_v2<N, U>& e) {
         e.as_json(os, opts);
     }

     void operator()(std::ostream& os, json_adapter_v2::opts *opts, device_tracker_view_v2<N, U> *e) {
         e->as_json(os, opts);
     }

     void operator()(std::ostream& os, json_adapter_v2::opts *opts, device_tracker_view_v2<N, U>& e,
             json_adapter_v2::field_group_map& fields) {
         e.filtered_as_json(os, opts, fields);
     }

     void operator()(std::ostream& os, json_adapter_v2::opts *opts, device_tracker_view_v2<N, U> *e,
             json_adapter_v2::field_group_map& fields) {
         e->filtered_as_json(os, opts, fields);
     }
};


#endif /* __DEVICE_VIEW_V2_H__ */
