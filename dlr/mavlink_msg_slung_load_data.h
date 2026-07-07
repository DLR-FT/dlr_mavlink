#pragma once
// MESSAGE SLUNG_LOAD_DATA PACKING

#define MAVLINK_MSG_ID_SLUNG_LOAD_DATA 545


typedef struct __mavlink_slung_load_data_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 float force_abs; /*< [N] Load force in N.*/
 float phi; /*< [rad] Lateral load position in NED in rad.*/
 float theta; /*< [rad] Longitudinal load position in NED in rad.*/
 float length; /*< [m] Tether length of load in m.*/
 uint8_t healthy; /*<  Healthy flag, true if sensor processing works correctly and slung load is correctly detected.*/
} mavlink_slung_load_data_t;

#define MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN 25
#define MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN 25
#define MAVLINK_MSG_ID_545_LEN 25
#define MAVLINK_MSG_ID_545_MIN_LEN 25

#define MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC 252
#define MAVLINK_MSG_ID_545_CRC 252



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SLUNG_LOAD_DATA { \
    545, \
    "SLUNG_LOAD_DATA", \
    6, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_slung_load_data_t, time_usec) }, \
         { "healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_slung_load_data_t, healthy) }, \
         { "force_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_slung_load_data_t, force_abs) }, \
         { "phi", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_slung_load_data_t, phi) }, \
         { "theta", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_slung_load_data_t, theta) }, \
         { "length", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_slung_load_data_t, length) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SLUNG_LOAD_DATA { \
    "SLUNG_LOAD_DATA", \
    6, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_slung_load_data_t, time_usec) }, \
         { "healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_slung_load_data_t, healthy) }, \
         { "force_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_slung_load_data_t, force_abs) }, \
         { "phi", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_slung_load_data_t, phi) }, \
         { "theta", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_slung_load_data_t, theta) }, \
         { "length", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_slung_load_data_t, length) }, \
         } \
}
#endif

/**
 * @brief Pack a slung_load_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param healthy  Healthy flag, true if sensor processing works correctly and slung load is correctly detected.
 * @param force_abs [N] Load force in N.
 * @param phi [rad] Lateral load position in NED in rad.
 * @param theta [rad] Longitudinal load position in NED in rad.
 * @param length [m] Tether length of load in m.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_slung_load_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t healthy, float force_abs, float phi, float theta, float length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, force_abs);
    _mav_put_float(buf, 12, phi);
    _mav_put_float(buf, 16, theta);
    _mav_put_float(buf, 20, length);
    _mav_put_uint8_t(buf, 24, healthy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN);
#else
    mavlink_slung_load_data_t packet;
    packet.time_usec = time_usec;
    packet.force_abs = force_abs;
    packet.phi = phi;
    packet.theta = theta;
    packet.length = length;
    packet.healthy = healthy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SLUNG_LOAD_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC);
}

/**
 * @brief Pack a slung_load_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param healthy  Healthy flag, true if sensor processing works correctly and slung load is correctly detected.
 * @param force_abs [N] Load force in N.
 * @param phi [rad] Lateral load position in NED in rad.
 * @param theta [rad] Longitudinal load position in NED in rad.
 * @param length [m] Tether length of load in m.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_slung_load_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t healthy, float force_abs, float phi, float theta, float length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, force_abs);
    _mav_put_float(buf, 12, phi);
    _mav_put_float(buf, 16, theta);
    _mav_put_float(buf, 20, length);
    _mav_put_uint8_t(buf, 24, healthy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN);
#else
    mavlink_slung_load_data_t packet;
    packet.time_usec = time_usec;
    packet.force_abs = force_abs;
    packet.phi = phi;
    packet.theta = theta;
    packet.length = length;
    packet.healthy = healthy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SLUNG_LOAD_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN);
#endif
}

/**
 * @brief Pack a slung_load_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param healthy  Healthy flag, true if sensor processing works correctly and slung load is correctly detected.
 * @param force_abs [N] Load force in N.
 * @param phi [rad] Lateral load position in NED in rad.
 * @param theta [rad] Longitudinal load position in NED in rad.
 * @param length [m] Tether length of load in m.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_slung_load_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t healthy,float force_abs,float phi,float theta,float length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, force_abs);
    _mav_put_float(buf, 12, phi);
    _mav_put_float(buf, 16, theta);
    _mav_put_float(buf, 20, length);
    _mav_put_uint8_t(buf, 24, healthy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN);
#else
    mavlink_slung_load_data_t packet;
    packet.time_usec = time_usec;
    packet.force_abs = force_abs;
    packet.phi = phi;
    packet.theta = theta;
    packet.length = length;
    packet.healthy = healthy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SLUNG_LOAD_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC);
}

/**
 * @brief Encode a slung_load_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param slung_load_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_slung_load_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_slung_load_data_t* slung_load_data)
{
    return mavlink_msg_slung_load_data_pack(system_id, component_id, msg, slung_load_data->time_usec, slung_load_data->healthy, slung_load_data->force_abs, slung_load_data->phi, slung_load_data->theta, slung_load_data->length);
}

/**
 * @brief Encode a slung_load_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param slung_load_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_slung_load_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_slung_load_data_t* slung_load_data)
{
    return mavlink_msg_slung_load_data_pack_chan(system_id, component_id, chan, msg, slung_load_data->time_usec, slung_load_data->healthy, slung_load_data->force_abs, slung_load_data->phi, slung_load_data->theta, slung_load_data->length);
}

/**
 * @brief Encode a slung_load_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param slung_load_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_slung_load_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_slung_load_data_t* slung_load_data)
{
    return mavlink_msg_slung_load_data_pack_status(system_id, component_id, _status, msg,  slung_load_data->time_usec, slung_load_data->healthy, slung_load_data->force_abs, slung_load_data->phi, slung_load_data->theta, slung_load_data->length);
}

/**
 * @brief Send a slung_load_data message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param healthy  Healthy flag, true if sensor processing works correctly and slung load is correctly detected.
 * @param force_abs [N] Load force in N.
 * @param phi [rad] Lateral load position in NED in rad.
 * @param theta [rad] Longitudinal load position in NED in rad.
 * @param length [m] Tether length of load in m.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_slung_load_data_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t healthy, float force_abs, float phi, float theta, float length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, force_abs);
    _mav_put_float(buf, 12, phi);
    _mav_put_float(buf, 16, theta);
    _mav_put_float(buf, 20, length);
    _mav_put_uint8_t(buf, 24, healthy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLUNG_LOAD_DATA, buf, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC);
#else
    mavlink_slung_load_data_t packet;
    packet.time_usec = time_usec;
    packet.force_abs = force_abs;
    packet.phi = phi;
    packet.theta = theta;
    packet.length = length;
    packet.healthy = healthy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLUNG_LOAD_DATA, (const char *)&packet, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC);
#endif
}

/**
 * @brief Send a slung_load_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_slung_load_data_send_struct(mavlink_channel_t chan, const mavlink_slung_load_data_t* slung_load_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_slung_load_data_send(chan, slung_load_data->time_usec, slung_load_data->healthy, slung_load_data->force_abs, slung_load_data->phi, slung_load_data->theta, slung_load_data->length);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLUNG_LOAD_DATA, (const char *)slung_load_data, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_slung_load_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t healthy, float force_abs, float phi, float theta, float length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, force_abs);
    _mav_put_float(buf, 12, phi);
    _mav_put_float(buf, 16, theta);
    _mav_put_float(buf, 20, length);
    _mav_put_uint8_t(buf, 24, healthy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLUNG_LOAD_DATA, buf, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC);
#else
    mavlink_slung_load_data_t *packet = (mavlink_slung_load_data_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->force_abs = force_abs;
    packet->phi = phi;
    packet->theta = theta;
    packet->length = length;
    packet->healthy = healthy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLUNG_LOAD_DATA, (const char *)packet, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE SLUNG_LOAD_DATA UNPACKING


/**
 * @brief Get field time_usec from slung_load_data message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_slung_load_data_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field healthy from slung_load_data message
 *
 * @return  Healthy flag, true if sensor processing works correctly and slung load is correctly detected.
 */
static inline uint8_t mavlink_msg_slung_load_data_get_healthy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field force_abs from slung_load_data message
 *
 * @return [N] Load force in N.
 */
static inline float mavlink_msg_slung_load_data_get_force_abs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field phi from slung_load_data message
 *
 * @return [rad] Lateral load position in NED in rad.
 */
static inline float mavlink_msg_slung_load_data_get_phi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field theta from slung_load_data message
 *
 * @return [rad] Longitudinal load position in NED in rad.
 */
static inline float mavlink_msg_slung_load_data_get_theta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field length from slung_load_data message
 *
 * @return [m] Tether length of load in m.
 */
static inline float mavlink_msg_slung_load_data_get_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a slung_load_data message into a struct
 *
 * @param msg The message to decode
 * @param slung_load_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_slung_load_data_decode(const mavlink_message_t* msg, mavlink_slung_load_data_t* slung_load_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    slung_load_data->time_usec = mavlink_msg_slung_load_data_get_time_usec(msg);
    slung_load_data->force_abs = mavlink_msg_slung_load_data_get_force_abs(msg);
    slung_load_data->phi = mavlink_msg_slung_load_data_get_phi(msg);
    slung_load_data->theta = mavlink_msg_slung_load_data_get_theta(msg);
    slung_load_data->length = mavlink_msg_slung_load_data_get_length(msg);
    slung_load_data->healthy = mavlink_msg_slung_load_data_get_healthy(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN? msg->len : MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN;
        memset(slung_load_data, 0, MAVLINK_MSG_ID_SLUNG_LOAD_DATA_LEN);
    memcpy(slung_load_data, _MAV_PAYLOAD(msg), len);
#endif
}
