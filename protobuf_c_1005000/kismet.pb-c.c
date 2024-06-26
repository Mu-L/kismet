/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: kismet.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "kismet.pb-c.h"
void   kismet_external__command__init
                     (KismetExternal__Command         *message)
{
  static const KismetExternal__Command init_value = KISMET_EXTERNAL__COMMAND__INIT;
  *message = init_value;
}
size_t kismet_external__command__get_packed_size
                     (const KismetExternal__Command *message)
{
  assert(message->base.descriptor == &kismet_external__command__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t kismet_external__command__pack
                     (const KismetExternal__Command *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &kismet_external__command__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t kismet_external__command__pack_to_buffer
                     (const KismetExternal__Command *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &kismet_external__command__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
KismetExternal__Command *
       kismet_external__command__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (KismetExternal__Command *)
     protobuf_c_message_unpack (&kismet_external__command__descriptor,
                                allocator, len, data);
}
void   kismet_external__command__free_unpacked
                     (KismetExternal__Command *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &kismet_external__command__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   kismet_external__msgbus_message__init
                     (KismetExternal__MsgbusMessage         *message)
{
  static const KismetExternal__MsgbusMessage init_value = KISMET_EXTERNAL__MSGBUS_MESSAGE__INIT;
  *message = init_value;
}
size_t kismet_external__msgbus_message__get_packed_size
                     (const KismetExternal__MsgbusMessage *message)
{
  assert(message->base.descriptor == &kismet_external__msgbus_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t kismet_external__msgbus_message__pack
                     (const KismetExternal__MsgbusMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &kismet_external__msgbus_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t kismet_external__msgbus_message__pack_to_buffer
                     (const KismetExternal__MsgbusMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &kismet_external__msgbus_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
KismetExternal__MsgbusMessage *
       kismet_external__msgbus_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (KismetExternal__MsgbusMessage *)
     protobuf_c_message_unpack (&kismet_external__msgbus_message__descriptor,
                                allocator, len, data);
}
void   kismet_external__msgbus_message__free_unpacked
                     (KismetExternal__MsgbusMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &kismet_external__msgbus_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   kismet_external__ping__init
                     (KismetExternal__Ping         *message)
{
  static const KismetExternal__Ping init_value = KISMET_EXTERNAL__PING__INIT;
  *message = init_value;
}
size_t kismet_external__ping__get_packed_size
                     (const KismetExternal__Ping *message)
{
  assert(message->base.descriptor == &kismet_external__ping__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t kismet_external__ping__pack
                     (const KismetExternal__Ping *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &kismet_external__ping__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t kismet_external__ping__pack_to_buffer
                     (const KismetExternal__Ping *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &kismet_external__ping__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
KismetExternal__Ping *
       kismet_external__ping__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (KismetExternal__Ping *)
     protobuf_c_message_unpack (&kismet_external__ping__descriptor,
                                allocator, len, data);
}
void   kismet_external__ping__free_unpacked
                     (KismetExternal__Ping *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &kismet_external__ping__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   kismet_external__pong__init
                     (KismetExternal__Pong         *message)
{
  static const KismetExternal__Pong init_value = KISMET_EXTERNAL__PONG__INIT;
  *message = init_value;
}
size_t kismet_external__pong__get_packed_size
                     (const KismetExternal__Pong *message)
{
  assert(message->base.descriptor == &kismet_external__pong__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t kismet_external__pong__pack
                     (const KismetExternal__Pong *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &kismet_external__pong__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t kismet_external__pong__pack_to_buffer
                     (const KismetExternal__Pong *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &kismet_external__pong__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
KismetExternal__Pong *
       kismet_external__pong__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (KismetExternal__Pong *)
     protobuf_c_message_unpack (&kismet_external__pong__descriptor,
                                allocator, len, data);
}
void   kismet_external__pong__free_unpacked
                     (KismetExternal__Pong *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &kismet_external__pong__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   kismet_external__external_shutdown__init
                     (KismetExternal__ExternalShutdown         *message)
{
  static const KismetExternal__ExternalShutdown init_value = KISMET_EXTERNAL__EXTERNAL_SHUTDOWN__INIT;
  *message = init_value;
}
size_t kismet_external__external_shutdown__get_packed_size
                     (const KismetExternal__ExternalShutdown *message)
{
  assert(message->base.descriptor == &kismet_external__external_shutdown__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t kismet_external__external_shutdown__pack
                     (const KismetExternal__ExternalShutdown *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &kismet_external__external_shutdown__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t kismet_external__external_shutdown__pack_to_buffer
                     (const KismetExternal__ExternalShutdown *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &kismet_external__external_shutdown__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
KismetExternal__ExternalShutdown *
       kismet_external__external_shutdown__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (KismetExternal__ExternalShutdown *)
     protobuf_c_message_unpack (&kismet_external__external_shutdown__descriptor,
                                allocator, len, data);
}
void   kismet_external__external_shutdown__free_unpacked
                     (KismetExternal__ExternalShutdown *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &kismet_external__external_shutdown__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   kismet_external__system_register__init
                     (KismetExternal__SystemRegister         *message)
{
  static const KismetExternal__SystemRegister init_value = KISMET_EXTERNAL__SYSTEM_REGISTER__INIT;
  *message = init_value;
}
size_t kismet_external__system_register__get_packed_size
                     (const KismetExternal__SystemRegister *message)
{
  assert(message->base.descriptor == &kismet_external__system_register__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t kismet_external__system_register__pack
                     (const KismetExternal__SystemRegister *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &kismet_external__system_register__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t kismet_external__system_register__pack_to_buffer
                     (const KismetExternal__SystemRegister *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &kismet_external__system_register__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
KismetExternal__SystemRegister *
       kismet_external__system_register__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (KismetExternal__SystemRegister *)
     protobuf_c_message_unpack (&kismet_external__system_register__descriptor,
                                allocator, len, data);
}
void   kismet_external__system_register__free_unpacked
                     (KismetExternal__SystemRegister *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &kismet_external__system_register__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor kismet_external__command__field_descriptors[3] =
{
  {
    "command",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(KismetExternal__Command, command),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "seqno",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(KismetExternal__Command, seqno),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "content",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(KismetExternal__Command, content),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned kismet_external__command__field_indices_by_name[] = {
  0,   /* field[0] = command */
  2,   /* field[2] = content */
  1,   /* field[1] = seqno */
};
static const ProtobufCIntRange kismet_external__command__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor kismet_external__command__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "KismetExternal.Command",
  "Command",
  "KismetExternal__Command",
  "KismetExternal",
  sizeof(KismetExternal__Command),
  3,
  kismet_external__command__field_descriptors,
  kismet_external__command__field_indices_by_name,
  1,  kismet_external__command__number_ranges,
  (ProtobufCMessageInit) kismet_external__command__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue kismet_external__msgbus_message__message_type__enum_values_by_number[5] =
{
  { "DEBUG", "KISMET_EXTERNAL__MSGBUS_MESSAGE__MESSAGE_TYPE__DEBUG", 1 },
  { "INFO", "KISMET_EXTERNAL__MSGBUS_MESSAGE__MESSAGE_TYPE__INFO", 2 },
  { "ERROR", "KISMET_EXTERNAL__MSGBUS_MESSAGE__MESSAGE_TYPE__ERROR", 4 },
  { "ALERT", "KISMET_EXTERNAL__MSGBUS_MESSAGE__MESSAGE_TYPE__ALERT", 8 },
  { "FATAL", "KISMET_EXTERNAL__MSGBUS_MESSAGE__MESSAGE_TYPE__FATAL", 16 },
};
static const ProtobufCIntRange kismet_external__msgbus_message__message_type__value_ranges[] = {
{1, 0},{4, 2},{8, 3},{16, 4},{0, 5}
};
static const ProtobufCEnumValueIndex kismet_external__msgbus_message__message_type__enum_values_by_name[5] =
{
  { "ALERT", 3 },
  { "DEBUG", 0 },
  { "ERROR", 2 },
  { "FATAL", 4 },
  { "INFO", 1 },
};
const ProtobufCEnumDescriptor kismet_external__msgbus_message__message_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "KismetExternal.MsgbusMessage.MessageType",
  "MessageType",
  "KismetExternal__MsgbusMessage__MessageType",
  "KismetExternal",
  5,
  kismet_external__msgbus_message__message_type__enum_values_by_number,
  5,
  kismet_external__msgbus_message__message_type__enum_values_by_name,
  4,
  kismet_external__msgbus_message__message_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor kismet_external__msgbus_message__field_descriptors[2] =
{
  {
    "msgtype",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(KismetExternal__MsgbusMessage, msgtype),
    &kismet_external__msgbus_message__message_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msgtext",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(KismetExternal__MsgbusMessage, msgtext),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned kismet_external__msgbus_message__field_indices_by_name[] = {
  1,   /* field[1] = msgtext */
  0,   /* field[0] = msgtype */
};
static const ProtobufCIntRange kismet_external__msgbus_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor kismet_external__msgbus_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "KismetExternal.MsgbusMessage",
  "MsgbusMessage",
  "KismetExternal__MsgbusMessage",
  "KismetExternal",
  sizeof(KismetExternal__MsgbusMessage),
  2,
  kismet_external__msgbus_message__field_descriptors,
  kismet_external__msgbus_message__field_indices_by_name,
  1,  kismet_external__msgbus_message__number_ranges,
  (ProtobufCMessageInit) kismet_external__msgbus_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define kismet_external__ping__field_descriptors NULL
#define kismet_external__ping__field_indices_by_name NULL
#define kismet_external__ping__number_ranges NULL
const ProtobufCMessageDescriptor kismet_external__ping__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "KismetExternal.Ping",
  "Ping",
  "KismetExternal__Ping",
  "KismetExternal",
  sizeof(KismetExternal__Ping),
  0,
  kismet_external__ping__field_descriptors,
  kismet_external__ping__field_indices_by_name,
  0,  kismet_external__ping__number_ranges,
  (ProtobufCMessageInit) kismet_external__ping__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor kismet_external__pong__field_descriptors[1] =
{
  {
    "ping_seqno",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(KismetExternal__Pong, ping_seqno),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned kismet_external__pong__field_indices_by_name[] = {
  0,   /* field[0] = ping_seqno */
};
static const ProtobufCIntRange kismet_external__pong__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor kismet_external__pong__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "KismetExternal.Pong",
  "Pong",
  "KismetExternal__Pong",
  "KismetExternal",
  sizeof(KismetExternal__Pong),
  1,
  kismet_external__pong__field_descriptors,
  kismet_external__pong__field_indices_by_name,
  1,  kismet_external__pong__number_ranges,
  (ProtobufCMessageInit) kismet_external__pong__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor kismet_external__external_shutdown__field_descriptors[1] =
{
  {
    "reason",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(KismetExternal__ExternalShutdown, reason),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned kismet_external__external_shutdown__field_indices_by_name[] = {
  0,   /* field[0] = reason */
};
static const ProtobufCIntRange kismet_external__external_shutdown__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor kismet_external__external_shutdown__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "KismetExternal.ExternalShutdown",
  "ExternalShutdown",
  "KismetExternal__ExternalShutdown",
  "KismetExternal",
  sizeof(KismetExternal__ExternalShutdown),
  1,
  kismet_external__external_shutdown__field_descriptors,
  kismet_external__external_shutdown__field_indices_by_name,
  1,  kismet_external__external_shutdown__number_ranges,
  (ProtobufCMessageInit) kismet_external__external_shutdown__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor kismet_external__system_register__field_descriptors[1] =
{
  {
    "subsystem",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(KismetExternal__SystemRegister, subsystem),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned kismet_external__system_register__field_indices_by_name[] = {
  0,   /* field[0] = subsystem */
};
static const ProtobufCIntRange kismet_external__system_register__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor kismet_external__system_register__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "KismetExternal.SystemRegister",
  "SystemRegister",
  "KismetExternal__SystemRegister",
  "KismetExternal",
  sizeof(KismetExternal__SystemRegister),
  1,
  kismet_external__system_register__field_descriptors,
  kismet_external__system_register__field_indices_by_name,
  1,  kismet_external__system_register__number_ranges,
  (ProtobufCMessageInit) kismet_external__system_register__init,
  NULL,NULL,NULL    /* reserved[123] */
};
