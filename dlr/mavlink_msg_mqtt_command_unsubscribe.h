#pragma once
// MESSAGE MQTT_COMMAND_UNSUBSCRIBE PACKING

#define MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE 524


typedef struct __mavlink_mqtt_command_unsubscribe_t {
 char topic[50]; /*<  The topic name the MQTT client should unsubscribe from.*/
} mavlink_mqtt_command_unsubscribe_t;

#define MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN 50
#define MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN 50
#define MAVLINK_MSG_ID_524_LEN 50
#define MAVLINK_MSG_ID_524_MIN_LEN 50

#define MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC 163
#define MAVLINK_MSG_ID_524_CRC 163

#define MAVLINK_MSG_MQTT_COMMAND_UNSUBSCRIBE_FIELD_TOPIC_LEN 50

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MQTT_COMMAND_UNSUBSCRIBE { \
    524, \
    "MQTT_COMMAND_UNSUBSCRIBE", \
    1, \
    {  { "topic", NULL, MAVLINK_TYPE_CHAR, 50, 0, offsetof(mavlink_mqtt_command_unsubscribe_t, topic) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MQTT_COMMAND_UNSUBSCRIBE { \
    "MQTT_COMMAND_UNSUBSCRIBE", \
    1, \
    {  { "topic", NULL, MAVLINK_TYPE_CHAR, 50, 0, offsetof(mavlink_mqtt_command_unsubscribe_t, topic) }, \
         } \
}
#endif

/**
 * @brief Pack a mqtt_command_unsubscribe message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param topic  The topic name the MQTT client should unsubscribe from.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mqtt_command_unsubscribe_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN];

    _mav_put_char_array(buf, 0, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN);
#else
    mavlink_mqtt_command_unsubscribe_t packet;

    mav_array_assign_char(packet.topic, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC);
}

/**
 * @brief Pack a mqtt_command_unsubscribe message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param topic  The topic name the MQTT client should unsubscribe from.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mqtt_command_unsubscribe_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN];

    _mav_put_char_array(buf, 0, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN);
#else
    mavlink_mqtt_command_unsubscribe_t packet;

    mav_array_memcpy(packet.topic, topic, sizeof(char)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN);
#endif
}

/**
 * @brief Pack a mqtt_command_unsubscribe message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param topic  The topic name the MQTT client should unsubscribe from.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mqtt_command_unsubscribe_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN];

    _mav_put_char_array(buf, 0, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN);
#else
    mavlink_mqtt_command_unsubscribe_t packet;

    mav_array_assign_char(packet.topic, topic, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC);
}

/**
 * @brief Encode a mqtt_command_unsubscribe struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mqtt_command_unsubscribe C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mqtt_command_unsubscribe_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mqtt_command_unsubscribe_t* mqtt_command_unsubscribe)
{
    return mavlink_msg_mqtt_command_unsubscribe_pack(system_id, component_id, msg, mqtt_command_unsubscribe->topic);
}

/**
 * @brief Encode a mqtt_command_unsubscribe struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mqtt_command_unsubscribe C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mqtt_command_unsubscribe_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mqtt_command_unsubscribe_t* mqtt_command_unsubscribe)
{
    return mavlink_msg_mqtt_command_unsubscribe_pack_chan(system_id, component_id, chan, msg, mqtt_command_unsubscribe->topic);
}

/**
 * @brief Encode a mqtt_command_unsubscribe struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param mqtt_command_unsubscribe C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mqtt_command_unsubscribe_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_mqtt_command_unsubscribe_t* mqtt_command_unsubscribe)
{
    return mavlink_msg_mqtt_command_unsubscribe_pack_status(system_id, component_id, _status, msg,  mqtt_command_unsubscribe->topic);
}

/**
 * @brief Send a mqtt_command_unsubscribe message
 * @param chan MAVLink channel to send the message
 *
 * @param topic  The topic name the MQTT client should unsubscribe from.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mqtt_command_unsubscribe_send(mavlink_channel_t chan, const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN];

    _mav_put_char_array(buf, 0, topic, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE, buf, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC);
#else
    mavlink_mqtt_command_unsubscribe_t packet;

    mav_array_assign_char(packet.topic, topic, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE, (const char *)&packet, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC);
#endif
}

/**
 * @brief Send a mqtt_command_unsubscribe message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mqtt_command_unsubscribe_send_struct(mavlink_channel_t chan, const mavlink_mqtt_command_unsubscribe_t* mqtt_command_unsubscribe)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mqtt_command_unsubscribe_send(chan, mqtt_command_unsubscribe->topic);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE, (const char *)mqtt_command_unsubscribe, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC);
#endif
}

#if MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mqtt_command_unsubscribe_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *topic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, topic, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE, buf, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC);
#else
    mavlink_mqtt_command_unsubscribe_t *packet = (mavlink_mqtt_command_unsubscribe_t *)msgbuf;

    mav_array_assign_char(packet->topic, topic, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE, (const char *)packet, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_CRC);
#endif
}
#endif

#endif

// MESSAGE MQTT_COMMAND_UNSUBSCRIBE UNPACKING


/**
 * @brief Get field topic from mqtt_command_unsubscribe message
 *
 * @return  The topic name the MQTT client should unsubscribe from.
 */
static inline uint16_t mavlink_msg_mqtt_command_unsubscribe_get_topic(const mavlink_message_t* msg, char *topic)
{
    return _MAV_RETURN_char_array(msg, topic, 50,  0);
}

/**
 * @brief Decode a mqtt_command_unsubscribe message into a struct
 *
 * @param msg The message to decode
 * @param mqtt_command_unsubscribe C-struct to decode the message contents into
 */
static inline void mavlink_msg_mqtt_command_unsubscribe_decode(const mavlink_message_t* msg, mavlink_mqtt_command_unsubscribe_t* mqtt_command_unsubscribe)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mqtt_command_unsubscribe_get_topic(msg, mqtt_command_unsubscribe->topic);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN? msg->len : MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN;
        memset(mqtt_command_unsubscribe, 0, MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_LEN);
    memcpy(mqtt_command_unsubscribe, _MAV_PAYLOAD(msg), len);
#endif
}
