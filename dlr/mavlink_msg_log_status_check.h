#pragma once
// MESSAGE LOG_STATUS_CHECK PACKING

#define MAVLINK_MSG_ID_LOG_STATUS_CHECK 536


typedef struct __mavlink_log_status_check_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 float written_kb; /*< [kiB] Size of written data to logfile in kiloBytes.*/
 uint8_t islogging; /*<  0: not logging, 1: logging.*/
 uint8_t type; /*<  Logger type.*/
} mavlink_log_status_check_t;

#define MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN 14
#define MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN 14
#define MAVLINK_MSG_ID_536_LEN 14
#define MAVLINK_MSG_ID_536_MIN_LEN 14

#define MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC 214
#define MAVLINK_MSG_ID_536_CRC 214



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LOG_STATUS_CHECK { \
    536, \
    "LOG_STATUS_CHECK", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_log_status_check_t, time_usec) }, \
         { "islogging", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_log_status_check_t, islogging) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_log_status_check_t, type) }, \
         { "written_kb", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_log_status_check_t, written_kb) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LOG_STATUS_CHECK { \
    "LOG_STATUS_CHECK", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_log_status_check_t, time_usec) }, \
         { "islogging", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_log_status_check_t, islogging) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_log_status_check_t, type) }, \
         { "written_kb", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_log_status_check_t, written_kb) }, \
         } \
}
#endif

/**
 * @brief Pack a log_status_check message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param islogging  0: not logging, 1: logging.
 * @param type  Logger type.
 * @param written_kb [kiB] Size of written data to logfile in kiloBytes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_log_status_check_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t islogging, uint8_t type, float written_kb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, written_kb);
    _mav_put_uint8_t(buf, 12, islogging);
    _mav_put_uint8_t(buf, 13, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN);
#else
    mavlink_log_status_check_t packet;
    packet.time_usec = time_usec;
    packet.written_kb = written_kb;
    packet.islogging = islogging;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOG_STATUS_CHECK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC);
}

/**
 * @brief Pack a log_status_check message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param islogging  0: not logging, 1: logging.
 * @param type  Logger type.
 * @param written_kb [kiB] Size of written data to logfile in kiloBytes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_log_status_check_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t islogging, uint8_t type, float written_kb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, written_kb);
    _mav_put_uint8_t(buf, 12, islogging);
    _mav_put_uint8_t(buf, 13, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN);
#else
    mavlink_log_status_check_t packet;
    packet.time_usec = time_usec;
    packet.written_kb = written_kb;
    packet.islogging = islogging;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOG_STATUS_CHECK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN);
#endif
}

/**
 * @brief Pack a log_status_check message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param islogging  0: not logging, 1: logging.
 * @param type  Logger type.
 * @param written_kb [kiB] Size of written data to logfile in kiloBytes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_log_status_check_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t islogging,uint8_t type,float written_kb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, written_kb);
    _mav_put_uint8_t(buf, 12, islogging);
    _mav_put_uint8_t(buf, 13, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN);
#else
    mavlink_log_status_check_t packet;
    packet.time_usec = time_usec;
    packet.written_kb = written_kb;
    packet.islogging = islogging;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOG_STATUS_CHECK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC);
}

/**
 * @brief Encode a log_status_check struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param log_status_check C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_log_status_check_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_log_status_check_t* log_status_check)
{
    return mavlink_msg_log_status_check_pack(system_id, component_id, msg, log_status_check->time_usec, log_status_check->islogging, log_status_check->type, log_status_check->written_kb);
}

/**
 * @brief Encode a log_status_check struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param log_status_check C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_log_status_check_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_log_status_check_t* log_status_check)
{
    return mavlink_msg_log_status_check_pack_chan(system_id, component_id, chan, msg, log_status_check->time_usec, log_status_check->islogging, log_status_check->type, log_status_check->written_kb);
}

/**
 * @brief Encode a log_status_check struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param log_status_check C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_log_status_check_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_log_status_check_t* log_status_check)
{
    return mavlink_msg_log_status_check_pack_status(system_id, component_id, _status, msg,  log_status_check->time_usec, log_status_check->islogging, log_status_check->type, log_status_check->written_kb);
}

/**
 * @brief Send a log_status_check message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param islogging  0: not logging, 1: logging.
 * @param type  Logger type.
 * @param written_kb [kiB] Size of written data to logfile in kiloBytes.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_log_status_check_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t islogging, uint8_t type, float written_kb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, written_kb);
    _mav_put_uint8_t(buf, 12, islogging);
    _mav_put_uint8_t(buf, 13, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_STATUS_CHECK, buf, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC);
#else
    mavlink_log_status_check_t packet;
    packet.time_usec = time_usec;
    packet.written_kb = written_kb;
    packet.islogging = islogging;
    packet.type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_STATUS_CHECK, (const char *)&packet, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC);
#endif
}

/**
 * @brief Send a log_status_check message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_log_status_check_send_struct(mavlink_channel_t chan, const mavlink_log_status_check_t* log_status_check)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_log_status_check_send(chan, log_status_check->time_usec, log_status_check->islogging, log_status_check->type, log_status_check->written_kb);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_STATUS_CHECK, (const char *)log_status_check, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC);
#endif
}

#if MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_log_status_check_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t islogging, uint8_t type, float written_kb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, written_kb);
    _mav_put_uint8_t(buf, 12, islogging);
    _mav_put_uint8_t(buf, 13, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_STATUS_CHECK, buf, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC);
#else
    mavlink_log_status_check_t *packet = (mavlink_log_status_check_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->written_kb = written_kb;
    packet->islogging = islogging;
    packet->type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOG_STATUS_CHECK, (const char *)packet, MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN, MAVLINK_MSG_ID_LOG_STATUS_CHECK_CRC);
#endif
}
#endif

#endif

// MESSAGE LOG_STATUS_CHECK UNPACKING


/**
 * @brief Get field time_usec from log_status_check message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_log_status_check_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field islogging from log_status_check message
 *
 * @return  0: not logging, 1: logging.
 */
static inline uint8_t mavlink_msg_log_status_check_get_islogging(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field type from log_status_check message
 *
 * @return  Logger type.
 */
static inline uint8_t mavlink_msg_log_status_check_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field written_kb from log_status_check message
 *
 * @return [kiB] Size of written data to logfile in kiloBytes.
 */
static inline float mavlink_msg_log_status_check_get_written_kb(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a log_status_check message into a struct
 *
 * @param msg The message to decode
 * @param log_status_check C-struct to decode the message contents into
 */
static inline void mavlink_msg_log_status_check_decode(const mavlink_message_t* msg, mavlink_log_status_check_t* log_status_check)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    log_status_check->time_usec = mavlink_msg_log_status_check_get_time_usec(msg);
    log_status_check->written_kb = mavlink_msg_log_status_check_get_written_kb(msg);
    log_status_check->islogging = mavlink_msg_log_status_check_get_islogging(msg);
    log_status_check->type = mavlink_msg_log_status_check_get_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN? msg->len : MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN;
        memset(log_status_check, 0, MAVLINK_MSG_ID_LOG_STATUS_CHECK_LEN);
    memcpy(log_status_check, _MAV_PAYLOAD(msg), len);
#endif
}
