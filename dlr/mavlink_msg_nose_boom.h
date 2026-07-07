#pragma once
// MESSAGE NOSE_BOOM PACKING

#define MAVLINK_MSG_ID_NOSE_BOOM 526


typedef struct __mavlink_nose_boom_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint32_t va; /*<  [1e4 m/s] Measured airspeed*/
 int32_t alpha; /*<  [1e4 deg] Measured angle of attack*/
 int32_t beta; /*<  [1e4 deg] Measured sideslip angle*/
 uint32_t va_raw; /*<  [1e4 m/s] Raw measured airspeed*/
 int32_t alpha_raw; /*<  [1e4 deg] Raw measured angle of attack*/
 int32_t beta_raw; /*<  [1e4 deg] Raw measured sideslip angle*/
} mavlink_nose_boom_t;

#define MAVLINK_MSG_ID_NOSE_BOOM_LEN 32
#define MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN 32
#define MAVLINK_MSG_ID_526_LEN 32
#define MAVLINK_MSG_ID_526_MIN_LEN 32

#define MAVLINK_MSG_ID_NOSE_BOOM_CRC 201
#define MAVLINK_MSG_ID_526_CRC 201



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_NOSE_BOOM { \
    526, \
    "NOSE_BOOM", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_nose_boom_t, time_usec) }, \
         { "va", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_nose_boom_t, va) }, \
         { "alpha", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_nose_boom_t, alpha) }, \
         { "beta", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_nose_boom_t, beta) }, \
         { "va_raw", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_nose_boom_t, va_raw) }, \
         { "alpha_raw", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_nose_boom_t, alpha_raw) }, \
         { "beta_raw", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_nose_boom_t, beta_raw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_NOSE_BOOM { \
    "NOSE_BOOM", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_nose_boom_t, time_usec) }, \
         { "va", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_nose_boom_t, va) }, \
         { "alpha", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_nose_boom_t, alpha) }, \
         { "beta", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_nose_boom_t, beta) }, \
         { "va_raw", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_nose_boom_t, va_raw) }, \
         { "alpha_raw", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_nose_boom_t, alpha_raw) }, \
         { "beta_raw", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_nose_boom_t, beta_raw) }, \
         } \
}
#endif

/**
 * @brief Pack a nose_boom message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param va  [1e4 m/s] Measured airspeed
 * @param alpha  [1e4 deg] Measured angle of attack
 * @param beta  [1e4 deg] Measured sideslip angle
 * @param va_raw  [1e4 m/s] Raw measured airspeed
 * @param alpha_raw  [1e4 deg] Raw measured angle of attack
 * @param beta_raw  [1e4 deg] Raw measured sideslip angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_nose_boom_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint32_t va, int32_t alpha, int32_t beta, uint32_t va_raw, int32_t alpha_raw, int32_t beta_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NOSE_BOOM_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, va);
    _mav_put_int32_t(buf, 12, alpha);
    _mav_put_int32_t(buf, 16, beta);
    _mav_put_uint32_t(buf, 20, va_raw);
    _mav_put_int32_t(buf, 24, alpha_raw);
    _mav_put_int32_t(buf, 28, beta_raw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NOSE_BOOM_LEN);
#else
    mavlink_nose_boom_t packet;
    packet.time_usec = time_usec;
    packet.va = va;
    packet.alpha = alpha;
    packet.beta = beta;
    packet.va_raw = va_raw;
    packet.alpha_raw = alpha_raw;
    packet.beta_raw = beta_raw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NOSE_BOOM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NOSE_BOOM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN, MAVLINK_MSG_ID_NOSE_BOOM_CRC);
}

/**
 * @brief Pack a nose_boom message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param va  [1e4 m/s] Measured airspeed
 * @param alpha  [1e4 deg] Measured angle of attack
 * @param beta  [1e4 deg] Measured sideslip angle
 * @param va_raw  [1e4 m/s] Raw measured airspeed
 * @param alpha_raw  [1e4 deg] Raw measured angle of attack
 * @param beta_raw  [1e4 deg] Raw measured sideslip angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_nose_boom_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint32_t va, int32_t alpha, int32_t beta, uint32_t va_raw, int32_t alpha_raw, int32_t beta_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NOSE_BOOM_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, va);
    _mav_put_int32_t(buf, 12, alpha);
    _mav_put_int32_t(buf, 16, beta);
    _mav_put_uint32_t(buf, 20, va_raw);
    _mav_put_int32_t(buf, 24, alpha_raw);
    _mav_put_int32_t(buf, 28, beta_raw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NOSE_BOOM_LEN);
#else
    mavlink_nose_boom_t packet;
    packet.time_usec = time_usec;
    packet.va = va;
    packet.alpha = alpha;
    packet.beta = beta;
    packet.va_raw = va_raw;
    packet.alpha_raw = alpha_raw;
    packet.beta_raw = beta_raw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NOSE_BOOM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NOSE_BOOM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN, MAVLINK_MSG_ID_NOSE_BOOM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN);
#endif
}

/**
 * @brief Pack a nose_boom message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param va  [1e4 m/s] Measured airspeed
 * @param alpha  [1e4 deg] Measured angle of attack
 * @param beta  [1e4 deg] Measured sideslip angle
 * @param va_raw  [1e4 m/s] Raw measured airspeed
 * @param alpha_raw  [1e4 deg] Raw measured angle of attack
 * @param beta_raw  [1e4 deg] Raw measured sideslip angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_nose_boom_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint32_t va,int32_t alpha,int32_t beta,uint32_t va_raw,int32_t alpha_raw,int32_t beta_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NOSE_BOOM_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, va);
    _mav_put_int32_t(buf, 12, alpha);
    _mav_put_int32_t(buf, 16, beta);
    _mav_put_uint32_t(buf, 20, va_raw);
    _mav_put_int32_t(buf, 24, alpha_raw);
    _mav_put_int32_t(buf, 28, beta_raw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NOSE_BOOM_LEN);
#else
    mavlink_nose_boom_t packet;
    packet.time_usec = time_usec;
    packet.va = va;
    packet.alpha = alpha;
    packet.beta = beta;
    packet.va_raw = va_raw;
    packet.alpha_raw = alpha_raw;
    packet.beta_raw = beta_raw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NOSE_BOOM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NOSE_BOOM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN, MAVLINK_MSG_ID_NOSE_BOOM_CRC);
}

/**
 * @brief Encode a nose_boom struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param nose_boom C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_nose_boom_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_nose_boom_t* nose_boom)
{
    return mavlink_msg_nose_boom_pack(system_id, component_id, msg, nose_boom->time_usec, nose_boom->va, nose_boom->alpha, nose_boom->beta, nose_boom->va_raw, nose_boom->alpha_raw, nose_boom->beta_raw);
}

/**
 * @brief Encode a nose_boom struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param nose_boom C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_nose_boom_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_nose_boom_t* nose_boom)
{
    return mavlink_msg_nose_boom_pack_chan(system_id, component_id, chan, msg, nose_boom->time_usec, nose_boom->va, nose_boom->alpha, nose_boom->beta, nose_boom->va_raw, nose_boom->alpha_raw, nose_boom->beta_raw);
}

/**
 * @brief Encode a nose_boom struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param nose_boom C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_nose_boom_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_nose_boom_t* nose_boom)
{
    return mavlink_msg_nose_boom_pack_status(system_id, component_id, _status, msg,  nose_boom->time_usec, nose_boom->va, nose_boom->alpha, nose_boom->beta, nose_boom->va_raw, nose_boom->alpha_raw, nose_boom->beta_raw);
}

/**
 * @brief Send a nose_boom message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param va  [1e4 m/s] Measured airspeed
 * @param alpha  [1e4 deg] Measured angle of attack
 * @param beta  [1e4 deg] Measured sideslip angle
 * @param va_raw  [1e4 m/s] Raw measured airspeed
 * @param alpha_raw  [1e4 deg] Raw measured angle of attack
 * @param beta_raw  [1e4 deg] Raw measured sideslip angle
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_nose_boom_send(mavlink_channel_t chan, uint64_t time_usec, uint32_t va, int32_t alpha, int32_t beta, uint32_t va_raw, int32_t alpha_raw, int32_t beta_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NOSE_BOOM_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, va);
    _mav_put_int32_t(buf, 12, alpha);
    _mav_put_int32_t(buf, 16, beta);
    _mav_put_uint32_t(buf, 20, va_raw);
    _mav_put_int32_t(buf, 24, alpha_raw);
    _mav_put_int32_t(buf, 28, beta_raw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NOSE_BOOM, buf, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN, MAVLINK_MSG_ID_NOSE_BOOM_CRC);
#else
    mavlink_nose_boom_t packet;
    packet.time_usec = time_usec;
    packet.va = va;
    packet.alpha = alpha;
    packet.beta = beta;
    packet.va_raw = va_raw;
    packet.alpha_raw = alpha_raw;
    packet.beta_raw = beta_raw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NOSE_BOOM, (const char *)&packet, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN, MAVLINK_MSG_ID_NOSE_BOOM_CRC);
#endif
}

/**
 * @brief Send a nose_boom message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_nose_boom_send_struct(mavlink_channel_t chan, const mavlink_nose_boom_t* nose_boom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_nose_boom_send(chan, nose_boom->time_usec, nose_boom->va, nose_boom->alpha, nose_boom->beta, nose_boom->va_raw, nose_boom->alpha_raw, nose_boom->beta_raw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NOSE_BOOM, (const char *)nose_boom, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN, MAVLINK_MSG_ID_NOSE_BOOM_CRC);
#endif
}

#if MAVLINK_MSG_ID_NOSE_BOOM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_nose_boom_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint32_t va, int32_t alpha, int32_t beta, uint32_t va_raw, int32_t alpha_raw, int32_t beta_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, va);
    _mav_put_int32_t(buf, 12, alpha);
    _mav_put_int32_t(buf, 16, beta);
    _mav_put_uint32_t(buf, 20, va_raw);
    _mav_put_int32_t(buf, 24, alpha_raw);
    _mav_put_int32_t(buf, 28, beta_raw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NOSE_BOOM, buf, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN, MAVLINK_MSG_ID_NOSE_BOOM_CRC);
#else
    mavlink_nose_boom_t *packet = (mavlink_nose_boom_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->va = va;
    packet->alpha = alpha;
    packet->beta = beta;
    packet->va_raw = va_raw;
    packet->alpha_raw = alpha_raw;
    packet->beta_raw = beta_raw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NOSE_BOOM, (const char *)packet, MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN, MAVLINK_MSG_ID_NOSE_BOOM_LEN, MAVLINK_MSG_ID_NOSE_BOOM_CRC);
#endif
}
#endif

#endif

// MESSAGE NOSE_BOOM UNPACKING


/**
 * @brief Get field time_usec from nose_boom message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_nose_boom_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field va from nose_boom message
 *
 * @return  [1e4 m/s] Measured airspeed
 */
static inline uint32_t mavlink_msg_nose_boom_get_va(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field alpha from nose_boom message
 *
 * @return  [1e4 deg] Measured angle of attack
 */
static inline int32_t mavlink_msg_nose_boom_get_alpha(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field beta from nose_boom message
 *
 * @return  [1e4 deg] Measured sideslip angle
 */
static inline int32_t mavlink_msg_nose_boom_get_beta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field va_raw from nose_boom message
 *
 * @return  [1e4 m/s] Raw measured airspeed
 */
static inline uint32_t mavlink_msg_nose_boom_get_va_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field alpha_raw from nose_boom message
 *
 * @return  [1e4 deg] Raw measured angle of attack
 */
static inline int32_t mavlink_msg_nose_boom_get_alpha_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field beta_raw from nose_boom message
 *
 * @return  [1e4 deg] Raw measured sideslip angle
 */
static inline int32_t mavlink_msg_nose_boom_get_beta_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Decode a nose_boom message into a struct
 *
 * @param msg The message to decode
 * @param nose_boom C-struct to decode the message contents into
 */
static inline void mavlink_msg_nose_boom_decode(const mavlink_message_t* msg, mavlink_nose_boom_t* nose_boom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    nose_boom->time_usec = mavlink_msg_nose_boom_get_time_usec(msg);
    nose_boom->va = mavlink_msg_nose_boom_get_va(msg);
    nose_boom->alpha = mavlink_msg_nose_boom_get_alpha(msg);
    nose_boom->beta = mavlink_msg_nose_boom_get_beta(msg);
    nose_boom->va_raw = mavlink_msg_nose_boom_get_va_raw(msg);
    nose_boom->alpha_raw = mavlink_msg_nose_boom_get_alpha_raw(msg);
    nose_boom->beta_raw = mavlink_msg_nose_boom_get_beta_raw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_NOSE_BOOM_LEN? msg->len : MAVLINK_MSG_ID_NOSE_BOOM_LEN;
        memset(nose_boom, 0, MAVLINK_MSG_ID_NOSE_BOOM_LEN);
    memcpy(nose_boom, _MAV_PAYLOAD(msg), len);
#endif
}
