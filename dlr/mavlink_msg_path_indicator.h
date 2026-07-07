#pragma once
// MESSAGE PATH_INDICATOR PACKING

#define MAVLINK_MSG_ID_PATH_INDICATOR 548


typedef struct __mavlink_path_indicator_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 int8_t boundtype; /*<  Indicates whether the vehicle is flying inbound, outbound, or indifferent to the reference point.*/
 uint8_t path_type; /*<  Indicates what type of path the deviation is referring to.*/
 int8_t lat_dev; /*< [%] Signed (horizontal) deviation from path (e.g. from a localizer) in percent of max. indicated deviation.*/
 int8_t vert_dev; /*< [%] Signed (vertical) deviation from path (e.g. from a glide slope) in percent of max. indicated deviation.*/
} mavlink_path_indicator_t;

#define MAVLINK_MSG_ID_PATH_INDICATOR_LEN 12
#define MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN 12
#define MAVLINK_MSG_ID_548_LEN 12
#define MAVLINK_MSG_ID_548_MIN_LEN 12

#define MAVLINK_MSG_ID_PATH_INDICATOR_CRC 106
#define MAVLINK_MSG_ID_548_CRC 106



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PATH_INDICATOR { \
    548, \
    "PATH_INDICATOR", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_path_indicator_t, time_usec) }, \
         { "boundtype", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_path_indicator_t, boundtype) }, \
         { "path_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_path_indicator_t, path_type) }, \
         { "lat_dev", NULL, MAVLINK_TYPE_INT8_T, 0, 10, offsetof(mavlink_path_indicator_t, lat_dev) }, \
         { "vert_dev", NULL, MAVLINK_TYPE_INT8_T, 0, 11, offsetof(mavlink_path_indicator_t, vert_dev) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PATH_INDICATOR { \
    "PATH_INDICATOR", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_path_indicator_t, time_usec) }, \
         { "boundtype", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_path_indicator_t, boundtype) }, \
         { "path_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_path_indicator_t, path_type) }, \
         { "lat_dev", NULL, MAVLINK_TYPE_INT8_T, 0, 10, offsetof(mavlink_path_indicator_t, lat_dev) }, \
         { "vert_dev", NULL, MAVLINK_TYPE_INT8_T, 0, 11, offsetof(mavlink_path_indicator_t, vert_dev) }, \
         } \
}
#endif

/**
 * @brief Pack a path_indicator message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param boundtype  Indicates whether the vehicle is flying inbound, outbound, or indifferent to the reference point.
 * @param path_type  Indicates what type of path the deviation is referring to.
 * @param lat_dev [%] Signed (horizontal) deviation from path (e.g. from a localizer) in percent of max. indicated deviation.
 * @param vert_dev [%] Signed (vertical) deviation from path (e.g. from a glide slope) in percent of max. indicated deviation.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_path_indicator_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, int8_t boundtype, uint8_t path_type, int8_t lat_dev, int8_t vert_dev)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PATH_INDICATOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int8_t(buf, 8, boundtype);
    _mav_put_uint8_t(buf, 9, path_type);
    _mav_put_int8_t(buf, 10, lat_dev);
    _mav_put_int8_t(buf, 11, vert_dev);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PATH_INDICATOR_LEN);
#else
    mavlink_path_indicator_t packet;
    packet.time_usec = time_usec;
    packet.boundtype = boundtype;
    packet.path_type = path_type;
    packet.lat_dev = lat_dev;
    packet.vert_dev = vert_dev;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PATH_INDICATOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PATH_INDICATOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_CRC);
}

/**
 * @brief Pack a path_indicator message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param boundtype  Indicates whether the vehicle is flying inbound, outbound, or indifferent to the reference point.
 * @param path_type  Indicates what type of path the deviation is referring to.
 * @param lat_dev [%] Signed (horizontal) deviation from path (e.g. from a localizer) in percent of max. indicated deviation.
 * @param vert_dev [%] Signed (vertical) deviation from path (e.g. from a glide slope) in percent of max. indicated deviation.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_path_indicator_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, int8_t boundtype, uint8_t path_type, int8_t lat_dev, int8_t vert_dev)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PATH_INDICATOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int8_t(buf, 8, boundtype);
    _mav_put_uint8_t(buf, 9, path_type);
    _mav_put_int8_t(buf, 10, lat_dev);
    _mav_put_int8_t(buf, 11, vert_dev);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PATH_INDICATOR_LEN);
#else
    mavlink_path_indicator_t packet;
    packet.time_usec = time_usec;
    packet.boundtype = boundtype;
    packet.path_type = path_type;
    packet.lat_dev = lat_dev;
    packet.vert_dev = vert_dev;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PATH_INDICATOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PATH_INDICATOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN);
#endif
}

/**
 * @brief Pack a path_indicator message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param boundtype  Indicates whether the vehicle is flying inbound, outbound, or indifferent to the reference point.
 * @param path_type  Indicates what type of path the deviation is referring to.
 * @param lat_dev [%] Signed (horizontal) deviation from path (e.g. from a localizer) in percent of max. indicated deviation.
 * @param vert_dev [%] Signed (vertical) deviation from path (e.g. from a glide slope) in percent of max. indicated deviation.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_path_indicator_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,int8_t boundtype,uint8_t path_type,int8_t lat_dev,int8_t vert_dev)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PATH_INDICATOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int8_t(buf, 8, boundtype);
    _mav_put_uint8_t(buf, 9, path_type);
    _mav_put_int8_t(buf, 10, lat_dev);
    _mav_put_int8_t(buf, 11, vert_dev);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PATH_INDICATOR_LEN);
#else
    mavlink_path_indicator_t packet;
    packet.time_usec = time_usec;
    packet.boundtype = boundtype;
    packet.path_type = path_type;
    packet.lat_dev = lat_dev;
    packet.vert_dev = vert_dev;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PATH_INDICATOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PATH_INDICATOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_CRC);
}

/**
 * @brief Encode a path_indicator struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param path_indicator C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_path_indicator_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_path_indicator_t* path_indicator)
{
    return mavlink_msg_path_indicator_pack(system_id, component_id, msg, path_indicator->time_usec, path_indicator->boundtype, path_indicator->path_type, path_indicator->lat_dev, path_indicator->vert_dev);
}

/**
 * @brief Encode a path_indicator struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param path_indicator C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_path_indicator_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_path_indicator_t* path_indicator)
{
    return mavlink_msg_path_indicator_pack_chan(system_id, component_id, chan, msg, path_indicator->time_usec, path_indicator->boundtype, path_indicator->path_type, path_indicator->lat_dev, path_indicator->vert_dev);
}

/**
 * @brief Encode a path_indicator struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param path_indicator C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_path_indicator_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_path_indicator_t* path_indicator)
{
    return mavlink_msg_path_indicator_pack_status(system_id, component_id, _status, msg,  path_indicator->time_usec, path_indicator->boundtype, path_indicator->path_type, path_indicator->lat_dev, path_indicator->vert_dev);
}

/**
 * @brief Send a path_indicator message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param boundtype  Indicates whether the vehicle is flying inbound, outbound, or indifferent to the reference point.
 * @param path_type  Indicates what type of path the deviation is referring to.
 * @param lat_dev [%] Signed (horizontal) deviation from path (e.g. from a localizer) in percent of max. indicated deviation.
 * @param vert_dev [%] Signed (vertical) deviation from path (e.g. from a glide slope) in percent of max. indicated deviation.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_path_indicator_send(mavlink_channel_t chan, uint64_t time_usec, int8_t boundtype, uint8_t path_type, int8_t lat_dev, int8_t vert_dev)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PATH_INDICATOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int8_t(buf, 8, boundtype);
    _mav_put_uint8_t(buf, 9, path_type);
    _mav_put_int8_t(buf, 10, lat_dev);
    _mav_put_int8_t(buf, 11, vert_dev);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PATH_INDICATOR, buf, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_CRC);
#else
    mavlink_path_indicator_t packet;
    packet.time_usec = time_usec;
    packet.boundtype = boundtype;
    packet.path_type = path_type;
    packet.lat_dev = lat_dev;
    packet.vert_dev = vert_dev;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PATH_INDICATOR, (const char *)&packet, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_CRC);
#endif
}

/**
 * @brief Send a path_indicator message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_path_indicator_send_struct(mavlink_channel_t chan, const mavlink_path_indicator_t* path_indicator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_path_indicator_send(chan, path_indicator->time_usec, path_indicator->boundtype, path_indicator->path_type, path_indicator->lat_dev, path_indicator->vert_dev);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PATH_INDICATOR, (const char *)path_indicator, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_PATH_INDICATOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_path_indicator_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int8_t boundtype, uint8_t path_type, int8_t lat_dev, int8_t vert_dev)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int8_t(buf, 8, boundtype);
    _mav_put_uint8_t(buf, 9, path_type);
    _mav_put_int8_t(buf, 10, lat_dev);
    _mav_put_int8_t(buf, 11, vert_dev);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PATH_INDICATOR, buf, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_CRC);
#else
    mavlink_path_indicator_t *packet = (mavlink_path_indicator_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->boundtype = boundtype;
    packet->path_type = path_type;
    packet->lat_dev = lat_dev;
    packet->vert_dev = vert_dev;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PATH_INDICATOR, (const char *)packet, MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_LEN, MAVLINK_MSG_ID_PATH_INDICATOR_CRC);
#endif
}
#endif

#endif

// MESSAGE PATH_INDICATOR UNPACKING


/**
 * @brief Get field time_usec from path_indicator message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_path_indicator_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field boundtype from path_indicator message
 *
 * @return  Indicates whether the vehicle is flying inbound, outbound, or indifferent to the reference point.
 */
static inline int8_t mavlink_msg_path_indicator_get_boundtype(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  8);
}

/**
 * @brief Get field path_type from path_indicator message
 *
 * @return  Indicates what type of path the deviation is referring to.
 */
static inline uint8_t mavlink_msg_path_indicator_get_path_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field lat_dev from path_indicator message
 *
 * @return [%] Signed (horizontal) deviation from path (e.g. from a localizer) in percent of max. indicated deviation.
 */
static inline int8_t mavlink_msg_path_indicator_get_lat_dev(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  10);
}

/**
 * @brief Get field vert_dev from path_indicator message
 *
 * @return [%] Signed (vertical) deviation from path (e.g. from a glide slope) in percent of max. indicated deviation.
 */
static inline int8_t mavlink_msg_path_indicator_get_vert_dev(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  11);
}

/**
 * @brief Decode a path_indicator message into a struct
 *
 * @param msg The message to decode
 * @param path_indicator C-struct to decode the message contents into
 */
static inline void mavlink_msg_path_indicator_decode(const mavlink_message_t* msg, mavlink_path_indicator_t* path_indicator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    path_indicator->time_usec = mavlink_msg_path_indicator_get_time_usec(msg);
    path_indicator->boundtype = mavlink_msg_path_indicator_get_boundtype(msg);
    path_indicator->path_type = mavlink_msg_path_indicator_get_path_type(msg);
    path_indicator->lat_dev = mavlink_msg_path_indicator_get_lat_dev(msg);
    path_indicator->vert_dev = mavlink_msg_path_indicator_get_vert_dev(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PATH_INDICATOR_LEN? msg->len : MAVLINK_MSG_ID_PATH_INDICATOR_LEN;
        memset(path_indicator, 0, MAVLINK_MSG_ID_PATH_INDICATOR_LEN);
    memcpy(path_indicator, _MAV_PAYLOAD(msg), len);
#endif
}
