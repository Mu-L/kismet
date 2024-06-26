/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: eventbus.proto */

#ifndef PROTOBUF_C_eventbus_2eproto__INCLUDED
#define PROTOBUF_C_eventbus_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1005000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct KismetEventBus__EventbusEvent KismetEventBus__EventbusEvent;
typedef struct KismetEventBus__EventbusRegisterListener KismetEventBus__EventbusRegisterListener;
typedef struct KismetEventBus__EventbusPublishEvent KismetEventBus__EventbusPublishEvent;


/* --- enums --- */


/* --- messages --- */

/*
 * An eventbus event is sent as a serialized JSON object containing the complete content
 * of the original event.  The content map is defined by the event, and can be arbitrary.
 */
struct  KismetEventBus__EventbusEvent
{
  ProtobufCMessage base;
  /*
   * Complete event as JSON
   */
  char *event_json;
};
#define KISMET_EVENT_BUS__EVENTBUS_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kismet_event_bus__eventbus_event__descriptor) \
, NULL }


/*
 * Registering event listeners causes the eventbus to send an event record each time a 
 * matching type is sent.  A type of '*' receives all events.
 */
struct  KismetEventBus__EventbusRegisterListener
{
  ProtobufCMessage base;
  size_t n_event;
  char **event;
};
#define KISMET_EVENT_BUS__EVENTBUS_REGISTER_LISTENER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kismet_event_bus__eventbus_register_listener__descriptor) \
, 0,NULL }


/*
 * Publish an event; remotely pubished events must not overlap internal events and must be
 * limited to pure-json data; the content of a remote published event will not be translated
 * to a complex C++ object.
 * event_content_json will be published in the kismet event as event_content["kismet.eventbus.event_json"]
 */
struct  KismetEventBus__EventbusPublishEvent
{
  ProtobufCMessage base;
  char *event_type;
  char *event_content_json;
};
#define KISMET_EVENT_BUS__EVENTBUS_PUBLISH_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&kismet_event_bus__eventbus_publish_event__descriptor) \
, NULL, NULL }


/* KismetEventBus__EventbusEvent methods */
void   kismet_event_bus__eventbus_event__init
                     (KismetEventBus__EventbusEvent         *message);
size_t kismet_event_bus__eventbus_event__get_packed_size
                     (const KismetEventBus__EventbusEvent   *message);
size_t kismet_event_bus__eventbus_event__pack
                     (const KismetEventBus__EventbusEvent   *message,
                      uint8_t             *out);
size_t kismet_event_bus__eventbus_event__pack_to_buffer
                     (const KismetEventBus__EventbusEvent   *message,
                      ProtobufCBuffer     *buffer);
KismetEventBus__EventbusEvent *
       kismet_event_bus__eventbus_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kismet_event_bus__eventbus_event__free_unpacked
                     (KismetEventBus__EventbusEvent *message,
                      ProtobufCAllocator *allocator);
/* KismetEventBus__EventbusRegisterListener methods */
void   kismet_event_bus__eventbus_register_listener__init
                     (KismetEventBus__EventbusRegisterListener         *message);
size_t kismet_event_bus__eventbus_register_listener__get_packed_size
                     (const KismetEventBus__EventbusRegisterListener   *message);
size_t kismet_event_bus__eventbus_register_listener__pack
                     (const KismetEventBus__EventbusRegisterListener   *message,
                      uint8_t             *out);
size_t kismet_event_bus__eventbus_register_listener__pack_to_buffer
                     (const KismetEventBus__EventbusRegisterListener   *message,
                      ProtobufCBuffer     *buffer);
KismetEventBus__EventbusRegisterListener *
       kismet_event_bus__eventbus_register_listener__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kismet_event_bus__eventbus_register_listener__free_unpacked
                     (KismetEventBus__EventbusRegisterListener *message,
                      ProtobufCAllocator *allocator);
/* KismetEventBus__EventbusPublishEvent methods */
void   kismet_event_bus__eventbus_publish_event__init
                     (KismetEventBus__EventbusPublishEvent         *message);
size_t kismet_event_bus__eventbus_publish_event__get_packed_size
                     (const KismetEventBus__EventbusPublishEvent   *message);
size_t kismet_event_bus__eventbus_publish_event__pack
                     (const KismetEventBus__EventbusPublishEvent   *message,
                      uint8_t             *out);
size_t kismet_event_bus__eventbus_publish_event__pack_to_buffer
                     (const KismetEventBus__EventbusPublishEvent   *message,
                      ProtobufCBuffer     *buffer);
KismetEventBus__EventbusPublishEvent *
       kismet_event_bus__eventbus_publish_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   kismet_event_bus__eventbus_publish_event__free_unpacked
                     (KismetEventBus__EventbusPublishEvent *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*KismetEventBus__EventbusEvent_Closure)
                 (const KismetEventBus__EventbusEvent *message,
                  void *closure_data);
typedef void (*KismetEventBus__EventbusRegisterListener_Closure)
                 (const KismetEventBus__EventbusRegisterListener *message,
                  void *closure_data);
typedef void (*KismetEventBus__EventbusPublishEvent_Closure)
                 (const KismetEventBus__EventbusPublishEvent *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor kismet_event_bus__eventbus_event__descriptor;
extern const ProtobufCMessageDescriptor kismet_event_bus__eventbus_register_listener__descriptor;
extern const ProtobufCMessageDescriptor kismet_event_bus__eventbus_publish_event__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_eventbus_2eproto__INCLUDED */
