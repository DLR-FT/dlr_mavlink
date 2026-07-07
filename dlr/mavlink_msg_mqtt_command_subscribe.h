#pragma once
// MESSAGE MQTT_COMMAND_SUBSCRIBE PACKING

#define MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE 523


typedef struct __mavlink_mqtt_command_subscribe_t {
 char topic[50]; /*<  The topic name the MQTT client should subscribe to.*/
} mavlink_mqtt_command_subscribe_t;

#define MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN 50
#define MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN 50
#define MAVLINK_MSG_ID_523_LEN 50
#define MAVLINK_MSG_ID_523_MIN_LEN 50

#define MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC 228
#define MAVLINK_MSG_ID_523_CRC 228

#define MAVLINK_MSG_MQTT_COMMAND_SUBSCRIBE_FIELD_TOPIC_LEN 50

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MQTT_COMMAND_SUBSCRIBE { \
    523, \
    "MQTT_COMMAND_SUBSCRIBE", \
    1, \
    {  { "topic", NULL, MAVLINK_TYPE_CHAR, 50, 0, offsetof(mavlink_mqtt_command_subscribe_t, topic) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MQTT_COMMAND_SUBSCRIBE { \
    "MQTT_COMMAND_SUBSCRIBE", \
    1, \
    {  { "topic", NULL, MAVLINK_TYPE_CHAR, 50, 0, offsetof(mavlink_mqtt_command_subscribe_t, topic) }, \
         } \
}
#endif

/**
 * @brief Pack a mqtt_command_subscribe message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param topic  The topic name the MQTT client should subscribe to.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mqtt_command_subscribe_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN];

    _mav_put_char_array(buf, 0, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN);
#else
    mavlink_mqtt_command_subscribe_t packet;

    mav_array_assign_char(packet.topic, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC);
}

/**
 * @brief Pack a mqtt_command_subscribe message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param topic  The topic name the MQTT client should subscribe to.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mqtt_command_subscribe_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN];

    _mav_put_char_array(buf, 0, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN);
#else
    mavlink_mqtt_command_subscribe_t packet;

    mav_array_memcpy(packet.topic, topic, sizeof(char)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN);
#endif
}

/**
 * @brief Pack a mqtt_command_subscribe message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param topic  The topic name the MQTT client should subscribe to.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mqtt_command_subscribe_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN];

    _mav_put_char_array(buf, 0, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN);
#else
    mavlink_mqtt_command_subscribe_t packet;

    mav_array_assign_char(packet.topic, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC);
}

/**
 * @brief Encode a mqtt_command_subscribe struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mqtt_command_subscribe C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mqtt_command_subscribe_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mqtt_command_subscribe_t* mqtt_command_subscribe)
{
    return mavlink_msg_mqtt_command_subscribe_pack(system_id, component_id, msg, mqtt_command_subscribe->topic);
}

/**
 * @brief Encode a mqtt_command_subscribe struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mqtt_command_subscribe C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mqtt_command_subscribe_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mqtt_command_subscribe_t* mqtt_command_subscribe)
{
    return mavlink_msg_mqtt_command_subscribe_pack_chan(system_id, component_id, chan, msg, mqtt_command_subscribe->topic);
}

/**
 * @brief Encode a mqtt_command_subscribe struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param mqtt_command_subscribe C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mqtt_command_subscribe_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_mqtt_command_subscribe_t* mqtt_command_subscribe)
{
    return mavlink_msg_mqtt_command_subscribe_pack_status(system_id, component_id, _status, msg,  mqtt_command_subscribe->topic);
}

/**
 * @brief Send a mqtt_command_subscribe message
 * @param chan MAVLink channel to send the message
 *
 * @param topic  The topic name the MQTT client should subscribe to.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mqtt_command_subscribe_send(mavlink_channel_t chan, const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN];

    _mav_put_char_array(buf, 0, topic, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE, buf, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC);
#else
    mavlink_mqtt_command_subscribe_t packet;

    mav_array_assign_char(packet.topic, topic, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE, (const char *)&packet, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC);
#endif
}

/**
 * @brief Send a mqtt_command_subscribe message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mqtt_command_subscribe_send_struct(mavlink_channel_t chan, const mavlink_mqtt_command_subscribe_t* mqtt_command_subscribe)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mqtt_command_subscribe_send(chan, mqtt_command_subscribe->topic);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE, (const char *)mqtt_command_subscribe, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC);
#endif
}

#if MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mqtt_command_subscribe_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, topic, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE, buf, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC);
#else
    mavlink_mqtt_command_subscribe_t *packet = (mavlink_mqtt_command_subscribe_t *)msgbuf;

    mav_array_assign_char(packet->topic, topic, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE, (const char *)packet, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_CRC);
#endif
}
#endif

#endif

// MESSAGE MQTT_COMMAND_SUBSCRIBE UNPACKING


/**
 * @brief Get field topic from mqtt_command_subscribe message
 *
 * @return  The topic name the MQTT client should subscribe to.
 */
static inline uint16_t mavlink_msg_mqtt_command_subscribe_get_topic(const mavlink_message_t* msg, char *topic)
{
    return _MAV_RETURN_char_array(msg, topic, 50,  0);
}

/**
 * @brief Decode a mqtt_command_subscribe message into a struct
 *
 * @param msg The message to decode
 * @param mqtt_command_subscribe C-struct to decode the message contents into
 */
static inline void mavlink_msg_mqtt_command_subscribe_decode(const mavlink_message_t* msg, mavlink_mqtt_command_subscribe_t* mqtt_command_subscribe)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mqtt_command_subscribe_get_topic(msg, mqtt_command_subscribe->topic);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN? msg->len : MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN;
        memset(mqtt_command_subscribe, 0, MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_LEN);
    memcpy(mqtt_command_subscribe, _MAV_PAYLOAD(msg), len);
#endif
}
