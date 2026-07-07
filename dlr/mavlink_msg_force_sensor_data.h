#pragma once
// MESSAGE FORCE_SENSOR_DATA PACKING

#define MAVLINK_MSG_ID_FORCE_SENSOR_DATA 500


typedef struct __mavlink_force_sensor_data_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 int32_t fx; /*< [mN] Force in x-Direction in Milli-Newton*/
 int32_t fy; /*< [mN] Force in y-Direction in Milli-Newton*/
 int32_t fz; /*< [mN] Force in z-Direction in Milli-Newton*/
 int32_t tx; /*< [mNmm] Torqe around x-Axis in Milli-Newton Millimeter*/
 int32_t ty; /*< [mNmm] Torqe around y-Axis in Milli-Newton Millimeter*/
 int32_t tz; /*< [mNmm] Torqe around z-Axis in Milli-Newton Millimeter*/
} mavlink_force_sensor_data_t;

#define MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN 32
#define MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN 32
#define MAVLINK_MSG_ID_500_LEN 32
#define MAVLINK_MSG_ID_500_MIN_LEN 32

#define MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC 3
#define MAVLINK_MSG_ID_500_CRC 3



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FORCE_SENSOR_DATA { \
    500, \
    "FORCE_SENSOR_DATA", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_force_sensor_data_t, time_usec) }, \
         { "fx", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_force_sensor_data_t, fx) }, \
         { "fy", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_force_sensor_data_t, fy) }, \
         { "fz", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_force_sensor_data_t, fz) }, \
         { "tx", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_force_sensor_data_t, tx) }, \
         { "ty", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_force_sensor_data_t, ty) }, \
         { "tz", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_force_sensor_data_t, tz) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FORCE_SENSOR_DATA { \
    "FORCE_SENSOR_DATA", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_force_sensor_data_t, time_usec) }, \
         { "fx", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_force_sensor_data_t, fx) }, \
         { "fy", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_force_sensor_data_t, fy) }, \
         { "fz", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_force_sensor_data_t, fz) }, \
         { "tx", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_force_sensor_data_t, tx) }, \
         { "ty", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_force_sensor_data_t, ty) }, \
         { "tz", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_force_sensor_data_t, tz) }, \
         } \
}
#endif

/**
 * @brief Pack a force_sensor_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param fx [mN] Force in x-Direction in Milli-Newton
 * @param fy [mN] Force in y-Direction in Milli-Newton
 * @param fz [mN] Force in z-Direction in Milli-Newton
 * @param tx [mNmm] Torqe around x-Axis in Milli-Newton Millimeter
 * @param ty [mNmm] Torqe around y-Axis in Milli-Newton Millimeter
 * @param tz [mNmm] Torqe around z-Axis in Milli-Newton Millimeter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_force_sensor_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, int32_t fx, int32_t fy, int32_t fz, int32_t tx, int32_t ty, int32_t tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, fx);
    _mav_put_int32_t(buf, 12, fy);
    _mav_put_int32_t(buf, 16, fz);
    _mav_put_int32_t(buf, 20, tx);
    _mav_put_int32_t(buf, 24, ty);
    _mav_put_int32_t(buf, 28, tz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN);
#else
    mavlink_force_sensor_data_t packet;
    packet.time_usec = time_usec;
    packet.fx = fx;
    packet.fy = fy;
    packet.fz = fz;
    packet.tx = tx;
    packet.ty = ty;
    packet.tz = tz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FORCE_SENSOR_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC);
}

/**
 * @brief Pack a force_sensor_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param fx [mN] Force in x-Direction in Milli-Newton
 * @param fy [mN] Force in y-Direction in Milli-Newton
 * @param fz [mN] Force in z-Direction in Milli-Newton
 * @param tx [mNmm] Torqe around x-Axis in Milli-Newton Millimeter
 * @param ty [mNmm] Torqe around y-Axis in Milli-Newton Millimeter
 * @param tz [mNmm] Torqe around z-Axis in Milli-Newton Millimeter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_force_sensor_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, int32_t fx, int32_t fy, int32_t fz, int32_t tx, int32_t ty, int32_t tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, fx);
    _mav_put_int32_t(buf, 12, fy);
    _mav_put_int32_t(buf, 16, fz);
    _mav_put_int32_t(buf, 20, tx);
    _mav_put_int32_t(buf, 24, ty);
    _mav_put_int32_t(buf, 28, tz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN);
#else
    mavlink_force_sensor_data_t packet;
    packet.time_usec = time_usec;
    packet.fx = fx;
    packet.fy = fy;
    packet.fz = fz;
    packet.tx = tx;
    packet.ty = ty;
    packet.tz = tz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FORCE_SENSOR_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN);
#endif
}

/**
 * @brief Pack a force_sensor_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param fx [mN] Force in x-Direction in Milli-Newton
 * @param fy [mN] Force in y-Direction in Milli-Newton
 * @param fz [mN] Force in z-Direction in Milli-Newton
 * @param tx [mNmm] Torqe around x-Axis in Milli-Newton Millimeter
 * @param ty [mNmm] Torqe around y-Axis in Milli-Newton Millimeter
 * @param tz [mNmm] Torqe around z-Axis in Milli-Newton Millimeter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_force_sensor_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,int32_t fx,int32_t fy,int32_t fz,int32_t tx,int32_t ty,int32_t tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, fx);
    _mav_put_int32_t(buf, 12, fy);
    _mav_put_int32_t(buf, 16, fz);
    _mav_put_int32_t(buf, 20, tx);
    _mav_put_int32_t(buf, 24, ty);
    _mav_put_int32_t(buf, 28, tz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN);
#else
    mavlink_force_sensor_data_t packet;
    packet.time_usec = time_usec;
    packet.fx = fx;
    packet.fy = fy;
    packet.fz = fz;
    packet.tx = tx;
    packet.ty = ty;
    packet.tz = tz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FORCE_SENSOR_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC);
}

/**
 * @brief Encode a force_sensor_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param force_sensor_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_force_sensor_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_force_sensor_data_t* force_sensor_data)
{
    return mavlink_msg_force_sensor_data_pack(system_id, component_id, msg, force_sensor_data->time_usec, force_sensor_data->fx, force_sensor_data->fy, force_sensor_data->fz, force_sensor_data->tx, force_sensor_data->ty, force_sensor_data->tz);
}

/**
 * @brief Encode a force_sensor_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param force_sensor_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_force_sensor_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_force_sensor_data_t* force_sensor_data)
{
    return mavlink_msg_force_sensor_data_pack_chan(system_id, component_id, chan, msg, force_sensor_data->time_usec, force_sensor_data->fx, force_sensor_data->fy, force_sensor_data->fz, force_sensor_data->tx, force_sensor_data->ty, force_sensor_data->tz);
}

/**
 * @brief Encode a force_sensor_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param force_sensor_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_force_sensor_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_force_sensor_data_t* force_sensor_data)
{
    return mavlink_msg_force_sensor_data_pack_status(system_id, component_id, _status, msg,  force_sensor_data->time_usec, force_sensor_data->fx, force_sensor_data->fy, force_sensor_data->fz, force_sensor_data->tx, force_sensor_data->ty, force_sensor_data->tz);
}

/**
 * @brief Send a force_sensor_data message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param fx [mN] Force in x-Direction in Milli-Newton
 * @param fy [mN] Force in y-Direction in Milli-Newton
 * @param fz [mN] Force in z-Direction in Milli-Newton
 * @param tx [mNmm] Torqe around x-Axis in Milli-Newton Millimeter
 * @param ty [mNmm] Torqe around y-Axis in Milli-Newton Millimeter
 * @param tz [mNmm] Torqe around z-Axis in Milli-Newton Millimeter
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_force_sensor_data_send(mavlink_channel_t chan, uint64_t time_usec, int32_t fx, int32_t fy, int32_t fz, int32_t tx, int32_t ty, int32_t tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, fx);
    _mav_put_int32_t(buf, 12, fy);
    _mav_put_int32_t(buf, 16, fz);
    _mav_put_int32_t(buf, 20, tx);
    _mav_put_int32_t(buf, 24, ty);
    _mav_put_int32_t(buf, 28, tz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORCE_SENSOR_DATA, buf, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC);
#else
    mavlink_force_sensor_data_t packet;
    packet.time_usec = time_usec;
    packet.fx = fx;
    packet.fy = fy;
    packet.fz = fz;
    packet.tx = tx;
    packet.ty = ty;
    packet.tz = tz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORCE_SENSOR_DATA, (const char *)&packet, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC);
#endif
}

/**
 * @brief Send a force_sensor_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_force_sensor_data_send_struct(mavlink_channel_t chan, const mavlink_force_sensor_data_t* force_sensor_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_force_sensor_data_send(chan, force_sensor_data->time_usec, force_sensor_data->fx, force_sensor_data->fy, force_sensor_data->fz, force_sensor_data->tx, force_sensor_data->ty, force_sensor_data->tz);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORCE_SENSOR_DATA, (const char *)force_sensor_data, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_force_sensor_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int32_t fx, int32_t fy, int32_t fz, int32_t tx, int32_t ty, int32_t tz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, fx);
    _mav_put_int32_t(buf, 12, fy);
    _mav_put_int32_t(buf, 16, fz);
    _mav_put_int32_t(buf, 20, tx);
    _mav_put_int32_t(buf, 24, ty);
    _mav_put_int32_t(buf, 28, tz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORCE_SENSOR_DATA, buf, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC);
#else
    mavlink_force_sensor_data_t *packet = (mavlink_force_sensor_data_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->fx = fx;
    packet->fy = fy;
    packet->fz = fz;
    packet->tx = tx;
    packet->ty = ty;
    packet->tz = tz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORCE_SENSOR_DATA, (const char *)packet, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE FORCE_SENSOR_DATA UNPACKING


/**
 * @brief Get field time_usec from force_sensor_data message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_force_sensor_data_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field fx from force_sensor_data message
 *
 * @return [mN] Force in x-Direction in Milli-Newton
 */
static inline int32_t mavlink_msg_force_sensor_data_get_fx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field fy from force_sensor_data message
 *
 * @return [mN] Force in y-Direction in Milli-Newton
 */
static inline int32_t mavlink_msg_force_sensor_data_get_fy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field fz from force_sensor_data message
 *
 * @return [mN] Force in z-Direction in Milli-Newton
 */
static inline int32_t mavlink_msg_force_sensor_data_get_fz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field tx from force_sensor_data message
 *
 * @return [mNmm] Torqe around x-Axis in Milli-Newton Millimeter
 */
static inline int32_t mavlink_msg_force_sensor_data_get_tx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field ty from force_sensor_data message
 *
 * @return [mNmm] Torqe around y-Axis in Milli-Newton Millimeter
 */
static inline int32_t mavlink_msg_force_sensor_data_get_ty(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field tz from force_sensor_data message
 *
 * @return [mNmm] Torqe around z-Axis in Milli-Newton Millimeter
 */
static inline int32_t mavlink_msg_force_sensor_data_get_tz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Decode a force_sensor_data message into a struct
 *
 * @param msg The message to decode
 * @param force_sensor_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_force_sensor_data_decode(const mavlink_message_t* msg, mavlink_force_sensor_data_t* force_sensor_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    force_sensor_data->time_usec = mavlink_msg_force_sensor_data_get_time_usec(msg);
    force_sensor_data->fx = mavlink_msg_force_sensor_data_get_fx(msg);
    force_sensor_data->fy = mavlink_msg_force_sensor_data_get_fy(msg);
    force_sensor_data->fz = mavlink_msg_force_sensor_data_get_fz(msg);
    force_sensor_data->tx = mavlink_msg_force_sensor_data_get_tx(msg);
    force_sensor_data->ty = mavlink_msg_force_sensor_data_get_ty(msg);
    force_sensor_data->tz = mavlink_msg_force_sensor_data_get_tz(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN? msg->len : MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN;
        memset(force_sensor_data, 0, MAVLINK_MSG_ID_FORCE_SENSOR_DATA_LEN);
    memcpy(force_sensor_data, _MAV_PAYLOAD(msg), len);
#endif
}
