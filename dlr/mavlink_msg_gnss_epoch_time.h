#pragma once
// MESSAGE GNSS_EPOCH_TIME PACKING

#define MAVLINK_MSG_ID_GNSS_EPOCH_TIME 509


typedef struct __mavlink_gnss_epoch_time_t {
 uint32_t epoch; /*<  GNSS-System epoch in microseconds*/
} mavlink_gnss_epoch_time_t;

#define MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN 4
#define MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN 4
#define MAVLINK_MSG_ID_509_LEN 4
#define MAVLINK_MSG_ID_509_MIN_LEN 4

#define MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC 17
#define MAVLINK_MSG_ID_509_CRC 17



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GNSS_EPOCH_TIME { \
    509, \
    "GNSS_EPOCH_TIME", \
    1, \
    {  { "epoch", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gnss_epoch_time_t, epoch) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GNSS_EPOCH_TIME { \
    "GNSS_EPOCH_TIME", \
    1, \
    {  { "epoch", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gnss_epoch_time_t, epoch) }, \
         } \
}
#endif

/**
 * @brief Pack a gnss_epoch_time message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param epoch  GNSS-System epoch in microseconds
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_epoch_time_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t epoch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN];
    _mav_put_uint32_t(buf, 0, epoch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN);
#else
    mavlink_gnss_epoch_time_t packet;
    packet.epoch = epoch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_EPOCH_TIME;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC);
}

/**
 * @brief Pack a gnss_epoch_time message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param epoch  GNSS-System epoch in microseconds
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_epoch_time_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t epoch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN];
    _mav_put_uint32_t(buf, 0, epoch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN);
#else
    mavlink_gnss_epoch_time_t packet;
    packet.epoch = epoch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_EPOCH_TIME;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN);
#endif
}

/**
 * @brief Pack a gnss_epoch_time message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param epoch  GNSS-System epoch in microseconds
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_epoch_time_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t epoch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN];
    _mav_put_uint32_t(buf, 0, epoch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN);
#else
    mavlink_gnss_epoch_time_t packet;
    packet.epoch = epoch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_EPOCH_TIME;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC);
}

/**
 * @brief Encode a gnss_epoch_time struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gnss_epoch_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_epoch_time_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gnss_epoch_time_t* gnss_epoch_time)
{
    return mavlink_msg_gnss_epoch_time_pack(system_id, component_id, msg, gnss_epoch_time->epoch);
}

/**
 * @brief Encode a gnss_epoch_time struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gnss_epoch_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_epoch_time_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gnss_epoch_time_t* gnss_epoch_time)
{
    return mavlink_msg_gnss_epoch_time_pack_chan(system_id, component_id, chan, msg, gnss_epoch_time->epoch);
}

/**
 * @brief Encode a gnss_epoch_time struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gnss_epoch_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_epoch_time_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gnss_epoch_time_t* gnss_epoch_time)
{
    return mavlink_msg_gnss_epoch_time_pack_status(system_id, component_id, _status, msg,  gnss_epoch_time->epoch);
}

/**
 * @brief Send a gnss_epoch_time message
 * @param chan MAVLink channel to send the message
 *
 * @param epoch  GNSS-System epoch in microseconds
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gnss_epoch_time_send(mavlink_channel_t chan, uint32_t epoch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN];
    _mav_put_uint32_t(buf, 0, epoch);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_EPOCH_TIME, buf, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC);
#else
    mavlink_gnss_epoch_time_t packet;
    packet.epoch = epoch;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_EPOCH_TIME, (const char *)&packet, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC);
#endif
}

/**
 * @brief Send a gnss_epoch_time message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gnss_epoch_time_send_struct(mavlink_channel_t chan, const mavlink_gnss_epoch_time_t* gnss_epoch_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_epoch_time_send(chan, gnss_epoch_time->epoch);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_EPOCH_TIME, (const char *)gnss_epoch_time, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC);
#endif
}

#if MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gnss_epoch_time_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t epoch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, epoch);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_EPOCH_TIME, buf, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC);
#else
    mavlink_gnss_epoch_time_t *packet = (mavlink_gnss_epoch_time_t *)msgbuf;
    packet->epoch = epoch;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_EPOCH_TIME, (const char *)packet, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_CRC);
#endif
}
#endif

#endif

// MESSAGE GNSS_EPOCH_TIME UNPACKING


/**
 * @brief Get field epoch from gnss_epoch_time message
 *
 * @return  GNSS-System epoch in microseconds
 */
static inline uint32_t mavlink_msg_gnss_epoch_time_get_epoch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a gnss_epoch_time message into a struct
 *
 * @param msg The message to decode
 * @param gnss_epoch_time C-struct to decode the message contents into
 */
static inline void mavlink_msg_gnss_epoch_time_decode(const mavlink_message_t* msg, mavlink_gnss_epoch_time_t* gnss_epoch_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gnss_epoch_time->epoch = mavlink_msg_gnss_epoch_time_get_epoch(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN? msg->len : MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN;
        memset(gnss_epoch_time, 0, MAVLINK_MSG_ID_GNSS_EPOCH_TIME_LEN);
    memcpy(gnss_epoch_time, _MAV_PAYLOAD(msg), len);
#endif
}
