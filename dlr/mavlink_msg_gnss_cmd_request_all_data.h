#pragma once
// MESSAGE GNSS_CMD_REQUEST_ALL_DATA PACKING

#define MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA 520


typedef struct __mavlink_gnss_cmd_request_all_data_t {
 uint8_t datatype; /*<  GNSS-System data type to be requested.*/
} mavlink_gnss_cmd_request_all_data_t;

#define MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN 1
#define MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN 1
#define MAVLINK_MSG_ID_520_LEN 1
#define MAVLINK_MSG_ID_520_MIN_LEN 1

#define MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC 92
#define MAVLINK_MSG_ID_520_CRC 92



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GNSS_CMD_REQUEST_ALL_DATA { \
    520, \
    "GNSS_CMD_REQUEST_ALL_DATA", \
    1, \
    {  { "datatype", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gnss_cmd_request_all_data_t, datatype) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GNSS_CMD_REQUEST_ALL_DATA { \
    "GNSS_CMD_REQUEST_ALL_DATA", \
    1, \
    {  { "datatype", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gnss_cmd_request_all_data_t, datatype) }, \
         } \
}
#endif

/**
 * @brief Pack a gnss_cmd_request_all_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param datatype  GNSS-System data type to be requested.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_all_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t datatype)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN];
    _mav_put_uint8_t(buf, 0, datatype);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN);
#else
    mavlink_gnss_cmd_request_all_data_t packet;
    packet.datatype = datatype;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC);
}

/**
 * @brief Pack a gnss_cmd_request_all_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param datatype  GNSS-System data type to be requested.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_all_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t datatype)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN];
    _mav_put_uint8_t(buf, 0, datatype);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN);
#else
    mavlink_gnss_cmd_request_all_data_t packet;
    packet.datatype = datatype;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN);
#endif
}

/**
 * @brief Pack a gnss_cmd_request_all_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param datatype  GNSS-System data type to be requested.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_all_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t datatype)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN];
    _mav_put_uint8_t(buf, 0, datatype);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN);
#else
    mavlink_gnss_cmd_request_all_data_t packet;
    packet.datatype = datatype;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC);
}

/**
 * @brief Encode a gnss_cmd_request_all_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gnss_cmd_request_all_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_all_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gnss_cmd_request_all_data_t* gnss_cmd_request_all_data)
{
    return mavlink_msg_gnss_cmd_request_all_data_pack(system_id, component_id, msg, gnss_cmd_request_all_data->datatype);
}

/**
 * @brief Encode a gnss_cmd_request_all_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gnss_cmd_request_all_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_all_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gnss_cmd_request_all_data_t* gnss_cmd_request_all_data)
{
    return mavlink_msg_gnss_cmd_request_all_data_pack_chan(system_id, component_id, chan, msg, gnss_cmd_request_all_data->datatype);
}

/**
 * @brief Encode a gnss_cmd_request_all_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gnss_cmd_request_all_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_all_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gnss_cmd_request_all_data_t* gnss_cmd_request_all_data)
{
    return mavlink_msg_gnss_cmd_request_all_data_pack_status(system_id, component_id, _status, msg,  gnss_cmd_request_all_data->datatype);
}

/**
 * @brief Send a gnss_cmd_request_all_data message
 * @param chan MAVLink channel to send the message
 *
 * @param datatype  GNSS-System data type to be requested.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gnss_cmd_request_all_data_send(mavlink_channel_t chan, uint8_t datatype)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN];
    _mav_put_uint8_t(buf, 0, datatype);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA, buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC);
#else
    mavlink_gnss_cmd_request_all_data_t packet;
    packet.datatype = datatype;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA, (const char *)&packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC);
#endif
}

/**
 * @brief Send a gnss_cmd_request_all_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gnss_cmd_request_all_data_send_struct(mavlink_channel_t chan, const mavlink_gnss_cmd_request_all_data_t* gnss_cmd_request_all_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_cmd_request_all_data_send(chan, gnss_cmd_request_all_data->datatype);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA, (const char *)gnss_cmd_request_all_data, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gnss_cmd_request_all_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t datatype)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, datatype);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA, buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC);
#else
    mavlink_gnss_cmd_request_all_data_t *packet = (mavlink_gnss_cmd_request_all_data_t *)msgbuf;
    packet->datatype = datatype;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA, (const char *)packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE GNSS_CMD_REQUEST_ALL_DATA UNPACKING


/**
 * @brief Get field datatype from gnss_cmd_request_all_data message
 *
 * @return  GNSS-System data type to be requested.
 */
static inline uint8_t mavlink_msg_gnss_cmd_request_all_data_get_datatype(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a gnss_cmd_request_all_data message into a struct
 *
 * @param msg The message to decode
 * @param gnss_cmd_request_all_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_gnss_cmd_request_all_data_decode(const mavlink_message_t* msg, mavlink_gnss_cmd_request_all_data_t* gnss_cmd_request_all_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gnss_cmd_request_all_data->datatype = mavlink_msg_gnss_cmd_request_all_data_get_datatype(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN? msg->len : MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN;
        memset(gnss_cmd_request_all_data, 0, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_LEN);
    memcpy(gnss_cmd_request_all_data, _MAV_PAYLOAD(msg), len);
#endif
}
