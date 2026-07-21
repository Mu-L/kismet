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

#ifndef __DEVICE_TRACKER_VIEW_WORKERS_V2_H__
#define __DEVICE_TRACKER_VIEW_WORKERS_V2_H__

#include "config.h"

#include <functional>
#include <vector>

#include "devicetracker_component_v2.h"

#ifdef HAVE_LIBPCRE1
#include <pcre.h>
#endif

#ifdef HAVE_LIBPCRE2
#define PCRE2_CODE_UNIT_WIDTH 8
#include <pcre2.h>
#endif

class device_tracker_view_worker_v2 {
public:
    device_tracker_view_worker_v2() { }
    virtual ~device_tracker_view_worker_v2() { }

    virtual bool match_device(kis_tracked_device_base_v2 *d) = 0;
    virtual void finalize() { }

    const auto& get_matched() { return matched_; }
protected:
    friend class device_tracker_view;

    std::vector<kis_tracked_device_base_v2 *> matched_;
};

template<typename Mftor>
class device_tracker_view_ftor_worker : public device_tracker_view_worker_v2 {
public:
    device_tracker_view_ftor_worker(const device_tracker_view_ftor_worker& w) {
        matched_ = w.matched_;
    }

    device_tracker_view_ftor_worker(const device_tracker_view_ftor_worker&& w) {
        matched_ = std::move(w.matched_);
    }

    virtual ~device_tracker_view_ftor_worker() { }

    virtual bool match_device(kis_tracked_device_base_v2 *d) {
        if (Mftor{}(d)) {
            matched_.push_back(d);
        }
    }
};


#endif /* __DEVICE_TRACKER_VIEW_WORKERS_V2_H__ */
