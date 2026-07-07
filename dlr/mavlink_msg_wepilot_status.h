#pragma once
// MESSAGE WEPILOT_STATUS PACKING

#define MAVLINK_MSG_ID_WEPILOT_STATUS 539


typedef struct __mavlink_wepilot_status_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint8_t num_sats; /*<  Satellites in use.*/
 uint8_t ctrl_mode; /*<  wePilot main CTRL mode.*/
 uint8_t flight_mode; /*<  wePilot flight mode.*/
 uint8_t flight_phase; /*<  wePilot flight phase.*/
 uint8_t flight_subphase; /*<  wePilot flight sub-phase.*/
} mavlink_wepilot_status_t;

#define MAVLINK_MSG_ID_WEPILOT_STATUS_LEN 13
#define MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN 13
#define MAVLINK_MSG_ID_539_LEN 13
#define MAVLINK_MSG_ID_539_MIN_LEN 13

#define MAVLINK_MSG_ID_WEPILOT_STATUS_CRC 118
#define MAVLINK_MSG_ID_539_CRC 118



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WEPILOT_STATUS { \
    539, \
    "WEPILOT_STATUS", \
    6, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_wepilot_status_t, time_usec) }, \
         { "num_sats", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_wepilot_status_t, num_sats) }, \
         { "ctrl_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_wepilot_status_t, ctrl_mode) }, \
         { "flight_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_wepilot_status_t, flight_mode) }, \
         { "flight_phase", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_wepilot_status_t, flight_phase) }, \
         { "flight_subphase", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_wepilot_status_t, flight_subphase) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WEPILOT_STATUS { \
    "WEPILOT_STATUS", \
    6, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_wepilot_status_t, time_usec) }, \
         { "num_sats", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_wepilot_status_t, num_sats) }, \
         { "ctrl_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_wepilot_status_t, ctrl_mode) }, \
         { "flight_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_wepilot_status_t, flight_mode) }, \
         { "flight_phase", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_wepilot_status_t, flight_phase) }, \
         { "flight_subphase", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_wepilot_status_t, flight_subphase) }, \
         } \
}
#endif

/**
 * @brief Pack a wepilot_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param num_sats  Satellites in use.
 * @param ctrl_mode  wePilot main CTRL mode.
 * @param flight_mode  wePilot flight mode.
 * @param flight_phase  wePilot flight phase.
 * @param flight_subphase  wePilot flight sub-phase.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wepilot_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t num_sats, uint8_t ctrl_mode, uint8_t flight_mode, uint8_t flight_phase, uint8_t flight_subphase)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEPILOT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, num_sats);
    _mav_put_uint8_t(buf, 9, ctrl_mode);
    _mav_put_uint8_t(buf, 10, flight_mode);
    _mav_put_uint8_t(buf, 11, flight_phase);
    _mav_put_uint8_t(buf, 12, flight_subphase);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN);
#else
    mavlink_wepilot_status_t packet;
    packet.time_usec = time_usec;
    packet.num_sats = num_sats;
    packet.ctrl_mode = ctrl_mode;
    packet.flight_mode = flight_mode;
    packet.flight_phase = flight_phase;
    packet.flight_subphase = flight_subphase;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEPILOT_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_CRC);
}

/**
 * @brief Pack a wepilot_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param num_sats  Satellites in use.
 * @param ctrl_mode  wePilot main CTRL mode.
 * @param flight_mode  wePilot flight mode.
 * @param flight_phase  wePilot flight phase.
 * @param flight_subphase  wePilot flight sub-phase.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wepilot_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t num_sats, uint8_t ctrl_mode, uint8_t flight_mode, uint8_t flight_phase, uint8_t flight_subphase)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEPILOT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, num_sats);
    _mav_put_uint8_t(buf, 9, ctrl_mode);
    _mav_put_uint8_t(buf, 10, flight_mode);
    _mav_put_uint8_t(buf, 11, flight_phase);
    _mav_put_uint8_t(buf, 12, flight_subphase);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN);
#else
    mavlink_wepilot_status_t packet;
    packet.time_usec = time_usec;
    packet.num_sats = num_sats;
    packet.ctrl_mode = ctrl_mode;
    packet.flight_mode = flight_mode;
    packet.flight_phase = flight_phase;
    packet.flight_subphase = flight_subphase;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEPILOT_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN);
#endif
}

/**
 * @brief Pack a wepilot_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param num_sats  Satellites in use.
 * @param ctrl_mode  wePilot main CTRL mode.
 * @param flight_mode  wePilot flight mode.
 * @param flight_phase  wePilot flight phase.
 * @param flight_subphase  wePilot flight sub-phase.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wepilot_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t num_sats,uint8_t ctrl_mode,uint8_t flight_mode,uint8_t flight_phase,uint8_t flight_subphase)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEPILOT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, num_sats);
    _mav_put_uint8_t(buf, 9, ctrl_mode);
    _mav_put_uint8_t(buf, 10, flight_mode);
    _mav_put_uint8_t(buf, 11, flight_phase);
    _mav_put_uint8_t(buf, 12, flight_subphase);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN);
#else
    mavlink_wepilot_status_t packet;
    packet.time_usec = time_usec;
    packet.num_sats = num_sats;
    packet.ctrl_mode = ctrl_mode;
    packet.flight_mode = flight_mode;
    packet.flight_phase = flight_phase;
    packet.flight_subphase = flight_subphase;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEPILOT_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_CRC);
}

/**
 * @brief Encode a wepilot_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param wepilot_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wepilot_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_wepilot_status_t* wepilot_status)
{
    return mavlink_msg_wepilot_status_pack(system_id, component_id, msg, wepilot_status->time_usec, wepilot_status->num_sats, wepilot_status->ctrl_mode, wepilot_status->flight_mode, wepilot_status->flight_phase, wepilot_status->flight_subphase);
}

/**
 * @brief Encode a wepilot_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wepilot_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wepilot_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_wepilot_status_t* wepilot_status)
{
    return mavlink_msg_wepilot_status_pack_chan(system_id, component_id, chan, msg, wepilot_status->time_usec, wepilot_status->num_sats, wepilot_status->ctrl_mode, wepilot_status->flight_mode, wepilot_status->flight_phase, wepilot_status->flight_subphase);
}

/**
 * @brief Encode a wepilot_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param wepilot_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wepilot_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_wepilot_status_t* wepilot_status)
{
    return mavlink_msg_wepilot_status_pack_status(system_id, component_id, _status, msg,  wepilot_status->time_usec, wepilot_status->num_sats, wepilot_status->ctrl_mode, wepilot_status->flight_mode, wepilot_status->flight_phase, wepilot_status->flight_subphase);
}

/**
 * @brief Send a wepilot_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param num_sats  Satellites in use.
 * @param ctrl_mode  wePilot main CTRL mode.
 * @param flight_mode  wePilot flight mode.
 * @param flight_phase  wePilot flight phase.
 * @param flight_subphase  wePilot flight sub-phase.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_wepilot_status_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t num_sats, uint8_t ctrl_mode, uint8_t flight_mode, uint8_t flight_phase, uint8_t flight_subphase)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEPILOT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, num_sats);
    _mav_put_uint8_t(buf, 9, ctrl_mode);
    _mav_put_uint8_t(buf, 10, flight_mode);
    _mav_put_uint8_t(buf, 11, flight_phase);
    _mav_put_uint8_t(buf, 12, flight_subphase);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_STATUS, buf, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_CRC);
#else
    mavlink_wepilot_status_t packet;
    packet.time_usec = time_usec;
    packet.num_sats = num_sats;
    packet.ctrl_mode = ctrl_mode;
    packet.flight_mode = flight_mode;
    packet.flight_phase = flight_phase;
    packet.flight_subphase = flight_subphase;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_STATUS, (const char *)&packet, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_CRC);
#endif
}

/**
 * @brief Send a wepilot_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_wepilot_status_send_struct(mavlink_channel_t chan, const mavlink_wepilot_status_t* wepilot_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wepilot_status_send(chan, wepilot_status->time_usec, wepilot_status->num_sats, wepilot_status->ctrl_mode, wepilot_status->flight_mode, wepilot_status->flight_phase, wepilot_status->flight_subphase);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_STATUS, (const char *)wepilot_status, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_WEPILOT_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_wepilot_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t num_sats, uint8_t ctrl_mode, uint8_t flight_mode, uint8_t flight_phase, uint8_t flight_subphase)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, num_sats);
    _mav_put_uint8_t(buf, 9, ctrl_mode);
    _mav_put_uint8_t(buf, 10, flight_mode);
    _mav_put_uint8_t(buf, 11, flight_phase);
    _mav_put_uint8_t(buf, 12, flight_subphase);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_STATUS, buf, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_CRC);
#else
    mavlink_wepilot_status_t *packet = (mavlink_wepilot_status_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->num_sats = num_sats;
    packet->ctrl_mode = ctrl_mode;
    packet->flight_mode = flight_mode;
    packet->flight_phase = flight_phase;
    packet->flight_subphase = flight_subphase;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_STATUS, (const char *)packet, MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN, MAVLINK_MSG_ID_WEPILOT_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE WEPILOT_STATUS UNPACKING


/**
 * @brief Get field time_usec from wepilot_status message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_wepilot_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field num_sats from wepilot_status message
 *
 * @return  Satellites in use.
 */
static inline uint8_t mavlink_msg_wepilot_status_get_num_sats(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field ctrl_mode from wepilot_status message
 *
 * @return  wePilot main CTRL mode.
 */
static inline uint8_t mavlink_msg_wepilot_status_get_ctrl_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field flight_mode from wepilot_status message
 *
 * @return  wePilot flight mode.
 */
static inline uint8_t mavlink_msg_wepilot_status_get_flight_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field flight_phase from wepilot_status message
 *
 * @return  wePilot flight phase.
 */
static inline uint8_t mavlink_msg_wepilot_status_get_flight_phase(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field flight_subphase from wepilot_status message
 *
 * @return  wePilot flight sub-phase.
 */
static inline uint8_t mavlink_msg_wepilot_status_get_flight_subphase(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Decode a wepilot_status message into a struct
 *
 * @param msg The message to decode
 * @param wepilot_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_wepilot_status_decode(const mavlink_message_t* msg, mavlink_wepilot_status_t* wepilot_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    wepilot_status->time_usec = mavlink_msg_wepilot_status_get_time_usec(msg);
    wepilot_status->num_sats = mavlink_msg_wepilot_status_get_num_sats(msg);
    wepilot_status->ctrl_mode = mavlink_msg_wepilot_status_get_ctrl_mode(msg);
    wepilot_status->flight_mode = mavlink_msg_wepilot_status_get_flight_mode(msg);
    wepilot_status->flight_phase = mavlink_msg_wepilot_status_get_flight_phase(msg);
    wepilot_status->flight_subphase = mavlink_msg_wepilot_status_get_flight_subphase(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WEPILOT_STATUS_LEN? msg->len : MAVLINK_MSG_ID_WEPILOT_STATUS_LEN;
        memset(wepilot_status, 0, MAVLINK_MSG_ID_WEPILOT_STATUS_LEN);
    memcpy(wepilot_status, _MAV_PAYLOAD(msg), len);
#endif
}
