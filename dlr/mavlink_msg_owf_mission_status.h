#pragma once
// MESSAGE OWF_MISSION_STATUS PACKING

#define MAVLINK_MSG_ID_OWF_MISSION_STATUS 532


typedef struct __mavlink_owf_mission_status_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint32_t target_Windpark_ID; /*<  Identifier of target windpark.*/
 uint32_t target_WEA_ID; /*<  Identifier of target  wind turbine in windpark Windpark_ID*/
 uint16_t n_wea_request; /*<  [-], Number of wind turbines of interest of which data is requested from.*/
 uint16_t n_wea_data_available; /*<  [-], Number of wind turbines of interest of which data is available. (should be the same as n_wea_request if all works fine).*/
 uint8_t wea_hoist_ready; /*<  [-], Target wea is ready for landing.*/
 uint8_t wea_approach_clear; /*<  [-], OWF control room cleared approach on wea.*/
} mavlink_owf_mission_status_t;

#define MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN 22
#define MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN 22
#define MAVLINK_MSG_ID_532_LEN 22
#define MAVLINK_MSG_ID_532_MIN_LEN 22

#define MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC 10
#define MAVLINK_MSG_ID_532_CRC 10



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OWF_MISSION_STATUS { \
    532, \
    "OWF_MISSION_STATUS", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_owf_mission_status_t, time_usec) }, \
         { "target_Windpark_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_owf_mission_status_t, target_Windpark_ID) }, \
         { "target_WEA_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_owf_mission_status_t, target_WEA_ID) }, \
         { "wea_hoist_ready", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_owf_mission_status_t, wea_hoist_ready) }, \
         { "wea_approach_clear", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_owf_mission_status_t, wea_approach_clear) }, \
         { "n_wea_request", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_owf_mission_status_t, n_wea_request) }, \
         { "n_wea_data_available", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_owf_mission_status_t, n_wea_data_available) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OWF_MISSION_STATUS { \
    "OWF_MISSION_STATUS", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_owf_mission_status_t, time_usec) }, \
         { "target_Windpark_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_owf_mission_status_t, target_Windpark_ID) }, \
         { "target_WEA_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_owf_mission_status_t, target_WEA_ID) }, \
         { "wea_hoist_ready", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_owf_mission_status_t, wea_hoist_ready) }, \
         { "wea_approach_clear", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_owf_mission_status_t, wea_approach_clear) }, \
         { "n_wea_request", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_owf_mission_status_t, n_wea_request) }, \
         { "n_wea_data_available", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_owf_mission_status_t, n_wea_data_available) }, \
         } \
}
#endif

/**
 * @brief Pack a owf_mission_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param target_Windpark_ID  Identifier of target windpark.
 * @param target_WEA_ID  Identifier of target  wind turbine in windpark Windpark_ID
 * @param wea_hoist_ready  [-], Target wea is ready for landing.
 * @param wea_approach_clear  [-], OWF control room cleared approach on wea.
 * @param n_wea_request  [-], Number of wind turbines of interest of which data is requested from.
 * @param n_wea_data_available  [-], Number of wind turbines of interest of which data is available. (should be the same as n_wea_request if all works fine).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_owf_mission_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint32_t target_Windpark_ID, uint32_t target_WEA_ID, uint8_t wea_hoist_ready, uint8_t wea_approach_clear, uint16_t n_wea_request, uint16_t n_wea_data_available)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, target_Windpark_ID);
    _mav_put_uint32_t(buf, 12, target_WEA_ID);
    _mav_put_uint16_t(buf, 16, n_wea_request);
    _mav_put_uint16_t(buf, 18, n_wea_data_available);
    _mav_put_uint8_t(buf, 20, wea_hoist_ready);
    _mav_put_uint8_t(buf, 21, wea_approach_clear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN);
#else
    mavlink_owf_mission_status_t packet;
    packet.time_usec = time_usec;
    packet.target_Windpark_ID = target_Windpark_ID;
    packet.target_WEA_ID = target_WEA_ID;
    packet.n_wea_request = n_wea_request;
    packet.n_wea_data_available = n_wea_data_available;
    packet.wea_hoist_ready = wea_hoist_ready;
    packet.wea_approach_clear = wea_approach_clear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OWF_MISSION_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC);
}

/**
 * @brief Pack a owf_mission_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param target_Windpark_ID  Identifier of target windpark.
 * @param target_WEA_ID  Identifier of target  wind turbine in windpark Windpark_ID
 * @param wea_hoist_ready  [-], Target wea is ready for landing.
 * @param wea_approach_clear  [-], OWF control room cleared approach on wea.
 * @param n_wea_request  [-], Number of wind turbines of interest of which data is requested from.
 * @param n_wea_data_available  [-], Number of wind turbines of interest of which data is available. (should be the same as n_wea_request if all works fine).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_owf_mission_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint32_t target_Windpark_ID, uint32_t target_WEA_ID, uint8_t wea_hoist_ready, uint8_t wea_approach_clear, uint16_t n_wea_request, uint16_t n_wea_data_available)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, target_Windpark_ID);
    _mav_put_uint32_t(buf, 12, target_WEA_ID);
    _mav_put_uint16_t(buf, 16, n_wea_request);
    _mav_put_uint16_t(buf, 18, n_wea_data_available);
    _mav_put_uint8_t(buf, 20, wea_hoist_ready);
    _mav_put_uint8_t(buf, 21, wea_approach_clear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN);
#else
    mavlink_owf_mission_status_t packet;
    packet.time_usec = time_usec;
    packet.target_Windpark_ID = target_Windpark_ID;
    packet.target_WEA_ID = target_WEA_ID;
    packet.n_wea_request = n_wea_request;
    packet.n_wea_data_available = n_wea_data_available;
    packet.wea_hoist_ready = wea_hoist_ready;
    packet.wea_approach_clear = wea_approach_clear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OWF_MISSION_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN);
#endif
}

/**
 * @brief Pack a owf_mission_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param target_Windpark_ID  Identifier of target windpark.
 * @param target_WEA_ID  Identifier of target  wind turbine in windpark Windpark_ID
 * @param wea_hoist_ready  [-], Target wea is ready for landing.
 * @param wea_approach_clear  [-], OWF control room cleared approach on wea.
 * @param n_wea_request  [-], Number of wind turbines of interest of which data is requested from.
 * @param n_wea_data_available  [-], Number of wind turbines of interest of which data is available. (should be the same as n_wea_request if all works fine).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_owf_mission_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint32_t target_Windpark_ID,uint32_t target_WEA_ID,uint8_t wea_hoist_ready,uint8_t wea_approach_clear,uint16_t n_wea_request,uint16_t n_wea_data_available)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, target_Windpark_ID);
    _mav_put_uint32_t(buf, 12, target_WEA_ID);
    _mav_put_uint16_t(buf, 16, n_wea_request);
    _mav_put_uint16_t(buf, 18, n_wea_data_available);
    _mav_put_uint8_t(buf, 20, wea_hoist_ready);
    _mav_put_uint8_t(buf, 21, wea_approach_clear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN);
#else
    mavlink_owf_mission_status_t packet;
    packet.time_usec = time_usec;
    packet.target_Windpark_ID = target_Windpark_ID;
    packet.target_WEA_ID = target_WEA_ID;
    packet.n_wea_request = n_wea_request;
    packet.n_wea_data_available = n_wea_data_available;
    packet.wea_hoist_ready = wea_hoist_ready;
    packet.wea_approach_clear = wea_approach_clear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OWF_MISSION_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC);
}

/**
 * @brief Encode a owf_mission_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param owf_mission_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_owf_mission_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_owf_mission_status_t* owf_mission_status)
{
    return mavlink_msg_owf_mission_status_pack(system_id, component_id, msg, owf_mission_status->time_usec, owf_mission_status->target_Windpark_ID, owf_mission_status->target_WEA_ID, owf_mission_status->wea_hoist_ready, owf_mission_status->wea_approach_clear, owf_mission_status->n_wea_request, owf_mission_status->n_wea_data_available);
}

/**
 * @brief Encode a owf_mission_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param owf_mission_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_owf_mission_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_owf_mission_status_t* owf_mission_status)
{
    return mavlink_msg_owf_mission_status_pack_chan(system_id, component_id, chan, msg, owf_mission_status->time_usec, owf_mission_status->target_Windpark_ID, owf_mission_status->target_WEA_ID, owf_mission_status->wea_hoist_ready, owf_mission_status->wea_approach_clear, owf_mission_status->n_wea_request, owf_mission_status->n_wea_data_available);
}

/**
 * @brief Encode a owf_mission_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param owf_mission_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_owf_mission_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_owf_mission_status_t* owf_mission_status)
{
    return mavlink_msg_owf_mission_status_pack_status(system_id, component_id, _status, msg,  owf_mission_status->time_usec, owf_mission_status->target_Windpark_ID, owf_mission_status->target_WEA_ID, owf_mission_status->wea_hoist_ready, owf_mission_status->wea_approach_clear, owf_mission_status->n_wea_request, owf_mission_status->n_wea_data_available);
}

/**
 * @brief Send a owf_mission_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param target_Windpark_ID  Identifier of target windpark.
 * @param target_WEA_ID  Identifier of target  wind turbine in windpark Windpark_ID
 * @param wea_hoist_ready  [-], Target wea is ready for landing.
 * @param wea_approach_clear  [-], OWF control room cleared approach on wea.
 * @param n_wea_request  [-], Number of wind turbines of interest of which data is requested from.
 * @param n_wea_data_available  [-], Number of wind turbines of interest of which data is available. (should be the same as n_wea_request if all works fine).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_owf_mission_status_send(mavlink_channel_t chan, uint64_t time_usec, uint32_t target_Windpark_ID, uint32_t target_WEA_ID, uint8_t wea_hoist_ready, uint8_t wea_approach_clear, uint16_t n_wea_request, uint16_t n_wea_data_available)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, target_Windpark_ID);
    _mav_put_uint32_t(buf, 12, target_WEA_ID);
    _mav_put_uint16_t(buf, 16, n_wea_request);
    _mav_put_uint16_t(buf, 18, n_wea_data_available);
    _mav_put_uint8_t(buf, 20, wea_hoist_ready);
    _mav_put_uint8_t(buf, 21, wea_approach_clear);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OWF_MISSION_STATUS, buf, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC);
#else
    mavlink_owf_mission_status_t packet;
    packet.time_usec = time_usec;
    packet.target_Windpark_ID = target_Windpark_ID;
    packet.target_WEA_ID = target_WEA_ID;
    packet.n_wea_request = n_wea_request;
    packet.n_wea_data_available = n_wea_data_available;
    packet.wea_hoist_ready = wea_hoist_ready;
    packet.wea_approach_clear = wea_approach_clear;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OWF_MISSION_STATUS, (const char *)&packet, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC);
#endif
}

/**
 * @brief Send a owf_mission_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_owf_mission_status_send_struct(mavlink_channel_t chan, const mavlink_owf_mission_status_t* owf_mission_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_owf_mission_status_send(chan, owf_mission_status->time_usec, owf_mission_status->target_Windpark_ID, owf_mission_status->target_WEA_ID, owf_mission_status->wea_hoist_ready, owf_mission_status->wea_approach_clear, owf_mission_status->n_wea_request, owf_mission_status->n_wea_data_available);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OWF_MISSION_STATUS, (const char *)owf_mission_status, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_owf_mission_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint32_t target_Windpark_ID, uint32_t target_WEA_ID, uint8_t wea_hoist_ready, uint8_t wea_approach_clear, uint16_t n_wea_request, uint16_t n_wea_data_available)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, target_Windpark_ID);
    _mav_put_uint32_t(buf, 12, target_WEA_ID);
    _mav_put_uint16_t(buf, 16, n_wea_request);
    _mav_put_uint16_t(buf, 18, n_wea_data_available);
    _mav_put_uint8_t(buf, 20, wea_hoist_ready);
    _mav_put_uint8_t(buf, 21, wea_approach_clear);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OWF_MISSION_STATUS, buf, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC);
#else
    mavlink_owf_mission_status_t *packet = (mavlink_owf_mission_status_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->target_Windpark_ID = target_Windpark_ID;
    packet->target_WEA_ID = target_WEA_ID;
    packet->n_wea_request = n_wea_request;
    packet->n_wea_data_available = n_wea_data_available;
    packet->wea_hoist_ready = wea_hoist_ready;
    packet->wea_approach_clear = wea_approach_clear;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OWF_MISSION_STATUS, (const char *)packet, MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN, MAVLINK_MSG_ID_OWF_MISSION_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE OWF_MISSION_STATUS UNPACKING


/**
 * @brief Get field time_usec from owf_mission_status message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_owf_mission_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field target_Windpark_ID from owf_mission_status message
 *
 * @return  Identifier of target windpark.
 */
static inline uint32_t mavlink_msg_owf_mission_status_get_target_Windpark_ID(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field target_WEA_ID from owf_mission_status message
 *
 * @return  Identifier of target  wind turbine in windpark Windpark_ID
 */
static inline uint32_t mavlink_msg_owf_mission_status_get_target_WEA_ID(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field wea_hoist_ready from owf_mission_status message
 *
 * @return  [-], Target wea is ready for landing.
 */
static inline uint8_t mavlink_msg_owf_mission_status_get_wea_hoist_ready(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field wea_approach_clear from owf_mission_status message
 *
 * @return  [-], OWF control room cleared approach on wea.
 */
static inline uint8_t mavlink_msg_owf_mission_status_get_wea_approach_clear(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field n_wea_request from owf_mission_status message
 *
 * @return  [-], Number of wind turbines of interest of which data is requested from.
 */
static inline uint16_t mavlink_msg_owf_mission_status_get_n_wea_request(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field n_wea_data_available from owf_mission_status message
 *
 * @return  [-], Number of wind turbines of interest of which data is available. (should be the same as n_wea_request if all works fine).
 */
static inline uint16_t mavlink_msg_owf_mission_status_get_n_wea_data_available(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Decode a owf_mission_status message into a struct
 *
 * @param msg The message to decode
 * @param owf_mission_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_owf_mission_status_decode(const mavlink_message_t* msg, mavlink_owf_mission_status_t* owf_mission_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    owf_mission_status->time_usec = mavlink_msg_owf_mission_status_get_time_usec(msg);
    owf_mission_status->target_Windpark_ID = mavlink_msg_owf_mission_status_get_target_Windpark_ID(msg);
    owf_mission_status->target_WEA_ID = mavlink_msg_owf_mission_status_get_target_WEA_ID(msg);
    owf_mission_status->n_wea_request = mavlink_msg_owf_mission_status_get_n_wea_request(msg);
    owf_mission_status->n_wea_data_available = mavlink_msg_owf_mission_status_get_n_wea_data_available(msg);
    owf_mission_status->wea_hoist_ready = mavlink_msg_owf_mission_status_get_wea_hoist_ready(msg);
    owf_mission_status->wea_approach_clear = mavlink_msg_owf_mission_status_get_wea_approach_clear(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN? msg->len : MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN;
        memset(owf_mission_status, 0, MAVLINK_MSG_ID_OWF_MISSION_STATUS_LEN);
    memcpy(owf_mission_status, _MAV_PAYLOAD(msg), len);
#endif
}
