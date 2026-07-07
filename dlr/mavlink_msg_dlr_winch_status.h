#pragma once
// MESSAGE DLR_WINCH_STATUS PACKING

#define MAVLINK_MSG_ID_DLR_WINCH_STATUS 547


typedef struct __mavlink_dlr_winch_status_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 float length; /*< [m] Cable length.*/
 float velocity; /*< [m/s] Cable velocity.*/
 float force; /*< [N] Cable force.*/
 float length_sp; /*< [m] Cable length setpoint.*/
 float velocity_sp; /*< [m/s] Cable velocity setpoint.*/
 float force_sp; /*< [N] Cable force setpoint*/
 int8_t mode; /*<  Mode of winch operation.*/
} mavlink_dlr_winch_status_t;

#define MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN 33
#define MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN 33
#define MAVLINK_MSG_ID_547_LEN 33
#define MAVLINK_MSG_ID_547_MIN_LEN 33

#define MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC 111
#define MAVLINK_MSG_ID_547_CRC 111



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DLR_WINCH_STATUS { \
    547, \
    "DLR_WINCH_STATUS", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dlr_winch_status_t, time_usec) }, \
         { "length", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_dlr_winch_status_t, length) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_dlr_winch_status_t, velocity) }, \
         { "force", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_dlr_winch_status_t, force) }, \
         { "length_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_dlr_winch_status_t, length_sp) }, \
         { "velocity_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_dlr_winch_status_t, velocity_sp) }, \
         { "force_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_dlr_winch_status_t, force_sp) }, \
         { "mode", NULL, MAVLINK_TYPE_INT8_T, 0, 32, offsetof(mavlink_dlr_winch_status_t, mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DLR_WINCH_STATUS { \
    "DLR_WINCH_STATUS", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dlr_winch_status_t, time_usec) }, \
         { "length", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_dlr_winch_status_t, length) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_dlr_winch_status_t, velocity) }, \
         { "force", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_dlr_winch_status_t, force) }, \
         { "length_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_dlr_winch_status_t, length_sp) }, \
         { "velocity_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_dlr_winch_status_t, velocity_sp) }, \
         { "force_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_dlr_winch_status_t, force_sp) }, \
         { "mode", NULL, MAVLINK_TYPE_INT8_T, 0, 32, offsetof(mavlink_dlr_winch_status_t, mode) }, \
         } \
}
#endif

/**
 * @brief Pack a dlr_winch_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param length [m] Cable length.
 * @param velocity [m/s] Cable velocity.
 * @param force [N] Cable force.
 * @param length_sp [m] Cable length setpoint.
 * @param velocity_sp [m/s] Cable velocity setpoint.
 * @param force_sp [N] Cable force setpoint
 * @param mode  Mode of winch operation.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dlr_winch_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float length, float velocity, float force, float length_sp, float velocity_sp, float force_sp, int8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, length);
    _mav_put_float(buf, 12, velocity);
    _mav_put_float(buf, 16, force);
    _mav_put_float(buf, 20, length_sp);
    _mav_put_float(buf, 24, velocity_sp);
    _mav_put_float(buf, 28, force_sp);
    _mav_put_int8_t(buf, 32, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN);
#else
    mavlink_dlr_winch_status_t packet;
    packet.time_usec = time_usec;
    packet.length = length;
    packet.velocity = velocity;
    packet.force = force;
    packet.length_sp = length_sp;
    packet.velocity_sp = velocity_sp;
    packet.force_sp = force_sp;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DLR_WINCH_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC);
}

/**
 * @brief Pack a dlr_winch_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param length [m] Cable length.
 * @param velocity [m/s] Cable velocity.
 * @param force [N] Cable force.
 * @param length_sp [m] Cable length setpoint.
 * @param velocity_sp [m/s] Cable velocity setpoint.
 * @param force_sp [N] Cable force setpoint
 * @param mode  Mode of winch operation.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dlr_winch_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, float length, float velocity, float force, float length_sp, float velocity_sp, float force_sp, int8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, length);
    _mav_put_float(buf, 12, velocity);
    _mav_put_float(buf, 16, force);
    _mav_put_float(buf, 20, length_sp);
    _mav_put_float(buf, 24, velocity_sp);
    _mav_put_float(buf, 28, force_sp);
    _mav_put_int8_t(buf, 32, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN);
#else
    mavlink_dlr_winch_status_t packet;
    packet.time_usec = time_usec;
    packet.length = length;
    packet.velocity = velocity;
    packet.force = force;
    packet.length_sp = length_sp;
    packet.velocity_sp = velocity_sp;
    packet.force_sp = force_sp;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DLR_WINCH_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN);
#endif
}

/**
 * @brief Pack a dlr_winch_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param length [m] Cable length.
 * @param velocity [m/s] Cable velocity.
 * @param force [N] Cable force.
 * @param length_sp [m] Cable length setpoint.
 * @param velocity_sp [m/s] Cable velocity setpoint.
 * @param force_sp [N] Cable force setpoint
 * @param mode  Mode of winch operation.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dlr_winch_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float length,float velocity,float force,float length_sp,float velocity_sp,float force_sp,int8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, length);
    _mav_put_float(buf, 12, velocity);
    _mav_put_float(buf, 16, force);
    _mav_put_float(buf, 20, length_sp);
    _mav_put_float(buf, 24, velocity_sp);
    _mav_put_float(buf, 28, force_sp);
    _mav_put_int8_t(buf, 32, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN);
#else
    mavlink_dlr_winch_status_t packet;
    packet.time_usec = time_usec;
    packet.length = length;
    packet.velocity = velocity;
    packet.force = force;
    packet.length_sp = length_sp;
    packet.velocity_sp = velocity_sp;
    packet.force_sp = force_sp;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DLR_WINCH_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC);
}

/**
 * @brief Encode a dlr_winch_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dlr_winch_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dlr_winch_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dlr_winch_status_t* dlr_winch_status)
{
    return mavlink_msg_dlr_winch_status_pack(system_id, component_id, msg, dlr_winch_status->time_usec, dlr_winch_status->length, dlr_winch_status->velocity, dlr_winch_status->force, dlr_winch_status->length_sp, dlr_winch_status->velocity_sp, dlr_winch_status->force_sp, dlr_winch_status->mode);
}

/**
 * @brief Encode a dlr_winch_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dlr_winch_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dlr_winch_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dlr_winch_status_t* dlr_winch_status)
{
    return mavlink_msg_dlr_winch_status_pack_chan(system_id, component_id, chan, msg, dlr_winch_status->time_usec, dlr_winch_status->length, dlr_winch_status->velocity, dlr_winch_status->force, dlr_winch_status->length_sp, dlr_winch_status->velocity_sp, dlr_winch_status->force_sp, dlr_winch_status->mode);
}

/**
 * @brief Encode a dlr_winch_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param dlr_winch_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dlr_winch_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_dlr_winch_status_t* dlr_winch_status)
{
    return mavlink_msg_dlr_winch_status_pack_status(system_id, component_id, _status, msg,  dlr_winch_status->time_usec, dlr_winch_status->length, dlr_winch_status->velocity, dlr_winch_status->force, dlr_winch_status->length_sp, dlr_winch_status->velocity_sp, dlr_winch_status->force_sp, dlr_winch_status->mode);
}

/**
 * @brief Send a dlr_winch_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param length [m] Cable length.
 * @param velocity [m/s] Cable velocity.
 * @param force [N] Cable force.
 * @param length_sp [m] Cable length setpoint.
 * @param velocity_sp [m/s] Cable velocity setpoint.
 * @param force_sp [N] Cable force setpoint
 * @param mode  Mode of winch operation.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dlr_winch_status_send(mavlink_channel_t chan, uint64_t time_usec, float length, float velocity, float force, float length_sp, float velocity_sp, float force_sp, int8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, length);
    _mav_put_float(buf, 12, velocity);
    _mav_put_float(buf, 16, force);
    _mav_put_float(buf, 20, length_sp);
    _mav_put_float(buf, 24, velocity_sp);
    _mav_put_float(buf, 28, force_sp);
    _mav_put_int8_t(buf, 32, mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DLR_WINCH_STATUS, buf, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC);
#else
    mavlink_dlr_winch_status_t packet;
    packet.time_usec = time_usec;
    packet.length = length;
    packet.velocity = velocity;
    packet.force = force;
    packet.length_sp = length_sp;
    packet.velocity_sp = velocity_sp;
    packet.force_sp = force_sp;
    packet.mode = mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DLR_WINCH_STATUS, (const char *)&packet, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC);
#endif
}

/**
 * @brief Send a dlr_winch_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dlr_winch_status_send_struct(mavlink_channel_t chan, const mavlink_dlr_winch_status_t* dlr_winch_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dlr_winch_status_send(chan, dlr_winch_status->time_usec, dlr_winch_status->length, dlr_winch_status->velocity, dlr_winch_status->force, dlr_winch_status->length_sp, dlr_winch_status->velocity_sp, dlr_winch_status->force_sp, dlr_winch_status->mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DLR_WINCH_STATUS, (const char *)dlr_winch_status, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dlr_winch_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float length, float velocity, float force, float length_sp, float velocity_sp, float force_sp, int8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, length);
    _mav_put_float(buf, 12, velocity);
    _mav_put_float(buf, 16, force);
    _mav_put_float(buf, 20, length_sp);
    _mav_put_float(buf, 24, velocity_sp);
    _mav_put_float(buf, 28, force_sp);
    _mav_put_int8_t(buf, 32, mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DLR_WINCH_STATUS, buf, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC);
#else
    mavlink_dlr_winch_status_t *packet = (mavlink_dlr_winch_status_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->length = length;
    packet->velocity = velocity;
    packet->force = force;
    packet->length_sp = length_sp;
    packet->velocity_sp = velocity_sp;
    packet->force_sp = force_sp;
    packet->mode = mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DLR_WINCH_STATUS, (const char *)packet, MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN, MAVLINK_MSG_ID_DLR_WINCH_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE DLR_WINCH_STATUS UNPACKING


/**
 * @brief Get field time_usec from dlr_winch_status message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_dlr_winch_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field length from dlr_winch_status message
 *
 * @return [m] Cable length.
 */
static inline float mavlink_msg_dlr_winch_status_get_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field velocity from dlr_winch_status message
 *
 * @return [m/s] Cable velocity.
 */
static inline float mavlink_msg_dlr_winch_status_get_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field force from dlr_winch_status message
 *
 * @return [N] Cable force.
 */
static inline float mavlink_msg_dlr_winch_status_get_force(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field length_sp from dlr_winch_status message
 *
 * @return [m] Cable length setpoint.
 */
static inline float mavlink_msg_dlr_winch_status_get_length_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field velocity_sp from dlr_winch_status message
 *
 * @return [m/s] Cable velocity setpoint.
 */
static inline float mavlink_msg_dlr_winch_status_get_velocity_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field force_sp from dlr_winch_status message
 *
 * @return [N] Cable force setpoint
 */
static inline float mavlink_msg_dlr_winch_status_get_force_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field mode from dlr_winch_status message
 *
 * @return  Mode of winch operation.
 */
static inline int8_t mavlink_msg_dlr_winch_status_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  32);
}

/**
 * @brief Decode a dlr_winch_status message into a struct
 *
 * @param msg The message to decode
 * @param dlr_winch_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_dlr_winch_status_decode(const mavlink_message_t* msg, mavlink_dlr_winch_status_t* dlr_winch_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dlr_winch_status->time_usec = mavlink_msg_dlr_winch_status_get_time_usec(msg);
    dlr_winch_status->length = mavlink_msg_dlr_winch_status_get_length(msg);
    dlr_winch_status->velocity = mavlink_msg_dlr_winch_status_get_velocity(msg);
    dlr_winch_status->force = mavlink_msg_dlr_winch_status_get_force(msg);
    dlr_winch_status->length_sp = mavlink_msg_dlr_winch_status_get_length_sp(msg);
    dlr_winch_status->velocity_sp = mavlink_msg_dlr_winch_status_get_velocity_sp(msg);
    dlr_winch_status->force_sp = mavlink_msg_dlr_winch_status_get_force_sp(msg);
    dlr_winch_status->mode = mavlink_msg_dlr_winch_status_get_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN? msg->len : MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN;
        memset(dlr_winch_status, 0, MAVLINK_MSG_ID_DLR_WINCH_STATUS_LEN);
    memcpy(dlr_winch_status, _MAV_PAYLOAD(msg), len);
#endif
}
