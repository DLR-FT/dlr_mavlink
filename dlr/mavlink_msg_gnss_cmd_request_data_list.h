#pragma once
// MESSAGE GNSS_CMD_REQUEST_DATA_LIST PACKING

#define MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST 521


typedef struct __mavlink_gnss_cmd_request_data_list_t {
 uint8_t datatype; /*<  GNSS-System data type to be requested.*/
 uint8_t n_sats; /*<  Amount of satellites requested in this msg*/
 uint8_t sats[200]; /*<  Amount of satellites requested in this msg*/
} mavlink_gnss_cmd_request_data_list_t;

#define MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN 202
#define MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN 202
#define MAVLINK_MSG_ID_521_LEN 202
#define MAVLINK_MSG_ID_521_MIN_LEN 202

#define MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC 74
#define MAVLINK_MSG_ID_521_CRC 74

#define MAVLINK_MSG_GNSS_CMD_REQUEST_DATA_LIST_FIELD_SATS_LEN 200

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GNSS_CMD_REQUEST_DATA_LIST { \
    521, \
    "GNSS_CMD_REQUEST_DATA_LIST", \
    3, \
    {  { "datatype", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gnss_cmd_request_data_list_t, datatype) }, \
         { "n_sats", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_gnss_cmd_request_data_list_t, n_sats) }, \
         { "sats", NULL, MAVLINK_TYPE_UINT8_T, 200, 2, offsetof(mavlink_gnss_cmd_request_data_list_t, sats) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GNSS_CMD_REQUEST_DATA_LIST { \
    "GNSS_CMD_REQUEST_DATA_LIST", \
    3, \
    {  { "datatype", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gnss_cmd_request_data_list_t, datatype) }, \
         { "n_sats", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_gnss_cmd_request_data_list_t, n_sats) }, \
         { "sats", NULL, MAVLINK_TYPE_UINT8_T, 200, 2, offsetof(mavlink_gnss_cmd_request_data_list_t, sats) }, \
         } \
}
#endif

/**
 * @brief Pack a gnss_cmd_request_data_list message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param datatype  GNSS-System data type to be requested.
 * @param n_sats  Amount of satellites requested in this msg
 * @param sats  Amount of satellites requested in this msg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_data_list_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t datatype, uint8_t n_sats, const uint8_t *sats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN];
    _mav_put_uint8_t(buf, 0, datatype);
    _mav_put_uint8_t(buf, 1, n_sats);
    _mav_put_uint8_t_array(buf, 2, sats, 200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN);
#else
    mavlink_gnss_cmd_request_data_list_t packet;
    packet.datatype = datatype;
    packet.n_sats = n_sats;
    mav_array_assign_uint8_t(packet.sats, sats, 200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC);
}

/**
 * @brief Pack a gnss_cmd_request_data_list message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param datatype  GNSS-System data type to be requested.
 * @param n_sats  Amount of satellites requested in this msg
 * @param sats  Amount of satellites requested in this msg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_data_list_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t datatype, uint8_t n_sats, const uint8_t *sats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN];
    _mav_put_uint8_t(buf, 0, datatype);
    _mav_put_uint8_t(buf, 1, n_sats);
    _mav_put_uint8_t_array(buf, 2, sats, 200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN);
#else
    mavlink_gnss_cmd_request_data_list_t packet;
    packet.datatype = datatype;
    packet.n_sats = n_sats;
    mav_array_memcpy(packet.sats, sats, sizeof(uint8_t)*200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN);
#endif
}

/**
 * @brief Pack a gnss_cmd_request_data_list message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param datatype  GNSS-System data type to be requested.
 * @param n_sats  Amount of satellites requested in this msg
 * @param sats  Amount of satellites requested in this msg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_data_list_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t datatype,uint8_t n_sats,const uint8_t *sats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN];
    _mav_put_uint8_t(buf, 0, datatype);
    _mav_put_uint8_t(buf, 1, n_sats);
    _mav_put_uint8_t_array(buf, 2, sats, 200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN);
#else
    mavlink_gnss_cmd_request_data_list_t packet;
    packet.datatype = datatype;
    packet.n_sats = n_sats;
    mav_array_assign_uint8_t(packet.sats, sats, 200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC);
}

/**
 * @brief Encode a gnss_cmd_request_data_list struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gnss_cmd_request_data_list C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_data_list_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gnss_cmd_request_data_list_t* gnss_cmd_request_data_list)
{
    return mavlink_msg_gnss_cmd_request_data_list_pack(system_id, component_id, msg, gnss_cmd_request_data_list->datatype, gnss_cmd_request_data_list->n_sats, gnss_cmd_request_data_list->sats);
}

/**
 * @brief Encode a gnss_cmd_request_data_list struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gnss_cmd_request_data_list C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_data_list_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gnss_cmd_request_data_list_t* gnss_cmd_request_data_list)
{
    return mavlink_msg_gnss_cmd_request_data_list_pack_chan(system_id, component_id, chan, msg, gnss_cmd_request_data_list->datatype, gnss_cmd_request_data_list->n_sats, gnss_cmd_request_data_list->sats);
}

/**
 * @brief Encode a gnss_cmd_request_data_list struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gnss_cmd_request_data_list C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_data_list_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gnss_cmd_request_data_list_t* gnss_cmd_request_data_list)
{
    return mavlink_msg_gnss_cmd_request_data_list_pack_status(system_id, component_id, _status, msg,  gnss_cmd_request_data_list->datatype, gnss_cmd_request_data_list->n_sats, gnss_cmd_request_data_list->sats);
}

/**
 * @brief Send a gnss_cmd_request_data_list message
 * @param chan MAVLink channel to send the message
 *
 * @param datatype  GNSS-System data type to be requested.
 * @param n_sats  Amount of satellites requested in this msg
 * @param sats  Amount of satellites requested in this msg
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gnss_cmd_request_data_list_send(mavlink_channel_t chan, uint8_t datatype, uint8_t n_sats, const uint8_t *sats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN];
    _mav_put_uint8_t(buf, 0, datatype);
    _mav_put_uint8_t(buf, 1, n_sats);
    _mav_put_uint8_t_array(buf, 2, sats, 200);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST, buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC);
#else
    mavlink_gnss_cmd_request_data_list_t packet;
    packet.datatype = datatype;
    packet.n_sats = n_sats;
    mav_array_assign_uint8_t(packet.sats, sats, 200);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST, (const char *)&packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC);
#endif
}

/**
 * @brief Send a gnss_cmd_request_data_list message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gnss_cmd_request_data_list_send_struct(mavlink_channel_t chan, const mavlink_gnss_cmd_request_data_list_t* gnss_cmd_request_data_list)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_cmd_request_data_list_send(chan, gnss_cmd_request_data_list->datatype, gnss_cmd_request_data_list->n_sats, gnss_cmd_request_data_list->sats);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST, (const char *)gnss_cmd_request_data_list, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC);
#endif
}

#if MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gnss_cmd_request_data_list_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t datatype, uint8_t n_sats, const uint8_t *sats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, datatype);
    _mav_put_uint8_t(buf, 1, n_sats);
    _mav_put_uint8_t_array(buf, 2, sats, 200);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST, buf, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC);
#else
    mavlink_gnss_cmd_request_data_list_t *packet = (mavlink_gnss_cmd_request_data_list_t *)msgbuf;
    packet->datatype = datatype;
    packet->n_sats = n_sats;
    mav_array_assign_uint8_t(packet->sats, sats, 200);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST, (const char *)packet, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_CRC);
#endif
}
#endif

#endif

// MESSAGE GNSS_CMD_REQUEST_DATA_LIST UNPACKING


/**
 * @brief Get field datatype from gnss_cmd_request_data_list message
 *
 * @return  GNSS-System data type to be requested.
 */
static inline uint8_t mavlink_msg_gnss_cmd_request_data_list_get_datatype(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field n_sats from gnss_cmd_request_data_list message
 *
 * @return  Amount of satellites requested in this msg
 */
static inline uint8_t mavlink_msg_gnss_cmd_request_data_list_get_n_sats(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field sats from gnss_cmd_request_data_list message
 *
 * @return  Amount of satellites requested in this msg
 */
static inline uint16_t mavlink_msg_gnss_cmd_request_data_list_get_sats(const mavlink_message_t* msg, uint8_t *sats)
{
    return _MAV_RETURN_uint8_t_array(msg, sats, 200,  2);
}

/**
 * @brief Decode a gnss_cmd_request_data_list message into a struct
 *
 * @param msg The message to decode
 * @param gnss_cmd_request_data_list C-struct to decode the message contents into
 */
static inline void mavlink_msg_gnss_cmd_request_data_list_decode(const mavlink_message_t* msg, mavlink_gnss_cmd_request_data_list_t* gnss_cmd_request_data_list)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gnss_cmd_request_data_list->datatype = mavlink_msg_gnss_cmd_request_data_list_get_datatype(msg);
    gnss_cmd_request_data_list->n_sats = mavlink_msg_gnss_cmd_request_data_list_get_n_sats(msg);
    mavlink_msg_gnss_cmd_request_data_list_get_sats(msg, gnss_cmd_request_data_list->sats);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN? msg->len : MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN;
        memset(gnss_cmd_request_data_list, 0, MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_LEN);
    memcpy(gnss_cmd_request_data_list, _MAV_PAYLOAD(msg), len);
#endif
}
