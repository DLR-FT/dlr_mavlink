#pragma once
// MESSAGE FAUST_CTRL_MODE_STATUS PACKING

#define MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS 530


typedef struct __mavlink_faust_ctrl_mode_status_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint8_t fcs_enabled; /*<  [-], This indicates if the experiment is enabled. The SP can choose manual or auto on his remote control, this mirrors this check 0: Manual mode, 1: Auto mode*/
 uint8_t fcs_mode; /*<  [-], Indicates the fcs mode. 0: disabled, 1: SysID, 2:AFCS, 3:SysID + AFCS*/
 uint8_t sysid_status; /*<  [-], Indicates whether a SysID input is active or not. 0: disabled, 1: SysID active*/
} mavlink_faust_ctrl_mode_status_t;

#define MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN 11
#define MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN 11
#define MAVLINK_MSG_ID_530_LEN 11
#define MAVLINK_MSG_ID_530_MIN_LEN 11

#define MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC 36
#define MAVLINK_MSG_ID_530_CRC 36



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FAUST_CTRL_MODE_STATUS { \
    530, \
    "FAUST_CTRL_MODE_STATUS", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_faust_ctrl_mode_status_t, time_usec) }, \
         { "fcs_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_faust_ctrl_mode_status_t, fcs_enabled) }, \
         { "fcs_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_faust_ctrl_mode_status_t, fcs_mode) }, \
         { "sysid_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_faust_ctrl_mode_status_t, sysid_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FAUST_CTRL_MODE_STATUS { \
    "FAUST_CTRL_MODE_STATUS", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_faust_ctrl_mode_status_t, time_usec) }, \
         { "fcs_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_faust_ctrl_mode_status_t, fcs_enabled) }, \
         { "fcs_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_faust_ctrl_mode_status_t, fcs_mode) }, \
         { "sysid_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_faust_ctrl_mode_status_t, sysid_status) }, \
         } \
}
#endif

/**
 * @brief Pack a faust_ctrl_mode_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param fcs_enabled  [-], This indicates if the experiment is enabled. The SP can choose manual or auto on his remote control, this mirrors this check 0: Manual mode, 1: Auto mode
 * @param fcs_mode  [-], Indicates the fcs mode. 0: disabled, 1: SysID, 2:AFCS, 3:SysID + AFCS
 * @param sysid_status  [-], Indicates whether a SysID input is active or not. 0: disabled, 1: SysID active
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_faust_ctrl_mode_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t fcs_enabled, uint8_t fcs_mode, uint8_t sysid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, fcs_enabled);
    _mav_put_uint8_t(buf, 9, fcs_mode);
    _mav_put_uint8_t(buf, 10, sysid_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN);
#else
    mavlink_faust_ctrl_mode_status_t packet;
    packet.time_usec = time_usec;
    packet.fcs_enabled = fcs_enabled;
    packet.fcs_mode = fcs_mode;
    packet.sysid_status = sysid_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC);
}

/**
 * @brief Pack a faust_ctrl_mode_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param fcs_enabled  [-], This indicates if the experiment is enabled. The SP can choose manual or auto on his remote control, this mirrors this check 0: Manual mode, 1: Auto mode
 * @param fcs_mode  [-], Indicates the fcs mode. 0: disabled, 1: SysID, 2:AFCS, 3:SysID + AFCS
 * @param sysid_status  [-], Indicates whether a SysID input is active or not. 0: disabled, 1: SysID active
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_faust_ctrl_mode_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t fcs_enabled, uint8_t fcs_mode, uint8_t sysid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, fcs_enabled);
    _mav_put_uint8_t(buf, 9, fcs_mode);
    _mav_put_uint8_t(buf, 10, sysid_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN);
#else
    mavlink_faust_ctrl_mode_status_t packet;
    packet.time_usec = time_usec;
    packet.fcs_enabled = fcs_enabled;
    packet.fcs_mode = fcs_mode;
    packet.sysid_status = sysid_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN);
#endif
}

/**
 * @brief Pack a faust_ctrl_mode_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param fcs_enabled  [-], This indicates if the experiment is enabled. The SP can choose manual or auto on his remote control, this mirrors this check 0: Manual mode, 1: Auto mode
 * @param fcs_mode  [-], Indicates the fcs mode. 0: disabled, 1: SysID, 2:AFCS, 3:SysID + AFCS
 * @param sysid_status  [-], Indicates whether a SysID input is active or not. 0: disabled, 1: SysID active
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_faust_ctrl_mode_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t fcs_enabled,uint8_t fcs_mode,uint8_t sysid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, fcs_enabled);
    _mav_put_uint8_t(buf, 9, fcs_mode);
    _mav_put_uint8_t(buf, 10, sysid_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN);
#else
    mavlink_faust_ctrl_mode_status_t packet;
    packet.time_usec = time_usec;
    packet.fcs_enabled = fcs_enabled;
    packet.fcs_mode = fcs_mode;
    packet.sysid_status = sysid_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC);
}

/**
 * @brief Encode a faust_ctrl_mode_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param faust_ctrl_mode_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_faust_ctrl_mode_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_faust_ctrl_mode_status_t* faust_ctrl_mode_status)
{
    return mavlink_msg_faust_ctrl_mode_status_pack(system_id, component_id, msg, faust_ctrl_mode_status->time_usec, faust_ctrl_mode_status->fcs_enabled, faust_ctrl_mode_status->fcs_mode, faust_ctrl_mode_status->sysid_status);
}

/**
 * @brief Encode a faust_ctrl_mode_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param faust_ctrl_mode_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_faust_ctrl_mode_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_faust_ctrl_mode_status_t* faust_ctrl_mode_status)
{
    return mavlink_msg_faust_ctrl_mode_status_pack_chan(system_id, component_id, chan, msg, faust_ctrl_mode_status->time_usec, faust_ctrl_mode_status->fcs_enabled, faust_ctrl_mode_status->fcs_mode, faust_ctrl_mode_status->sysid_status);
}

/**
 * @brief Encode a faust_ctrl_mode_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param faust_ctrl_mode_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_faust_ctrl_mode_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_faust_ctrl_mode_status_t* faust_ctrl_mode_status)
{
    return mavlink_msg_faust_ctrl_mode_status_pack_status(system_id, component_id, _status, msg,  faust_ctrl_mode_status->time_usec, faust_ctrl_mode_status->fcs_enabled, faust_ctrl_mode_status->fcs_mode, faust_ctrl_mode_status->sysid_status);
}

/**
 * @brief Send a faust_ctrl_mode_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param fcs_enabled  [-], This indicates if the experiment is enabled. The SP can choose manual or auto on his remote control, this mirrors this check 0: Manual mode, 1: Auto mode
 * @param fcs_mode  [-], Indicates the fcs mode. 0: disabled, 1: SysID, 2:AFCS, 3:SysID + AFCS
 * @param sysid_status  [-], Indicates whether a SysID input is active or not. 0: disabled, 1: SysID active
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_faust_ctrl_mode_status_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t fcs_enabled, uint8_t fcs_mode, uint8_t sysid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, fcs_enabled);
    _mav_put_uint8_t(buf, 9, fcs_mode);
    _mav_put_uint8_t(buf, 10, sysid_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS, buf, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC);
#else
    mavlink_faust_ctrl_mode_status_t packet;
    packet.time_usec = time_usec;
    packet.fcs_enabled = fcs_enabled;
    packet.fcs_mode = fcs_mode;
    packet.sysid_status = sysid_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC);
#endif
}

/**
 * @brief Send a faust_ctrl_mode_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_faust_ctrl_mode_status_send_struct(mavlink_channel_t chan, const mavlink_faust_ctrl_mode_status_t* faust_ctrl_mode_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_faust_ctrl_mode_status_send(chan, faust_ctrl_mode_status->time_usec, faust_ctrl_mode_status->fcs_enabled, faust_ctrl_mode_status->fcs_mode, faust_ctrl_mode_status->sysid_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS, (const char *)faust_ctrl_mode_status, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_faust_ctrl_mode_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t fcs_enabled, uint8_t fcs_mode, uint8_t sysid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, fcs_enabled);
    _mav_put_uint8_t(buf, 9, fcs_mode);
    _mav_put_uint8_t(buf, 10, sysid_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS, buf, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC);
#else
    mavlink_faust_ctrl_mode_status_t *packet = (mavlink_faust_ctrl_mode_status_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->fcs_enabled = fcs_enabled;
    packet->fcs_mode = fcs_mode;
    packet->sysid_status = sysid_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS, (const char *)packet, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE FAUST_CTRL_MODE_STATUS UNPACKING


/**
 * @brief Get field time_usec from faust_ctrl_mode_status message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_faust_ctrl_mode_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field fcs_enabled from faust_ctrl_mode_status message
 *
 * @return  [-], This indicates if the experiment is enabled. The SP can choose manual or auto on his remote control, this mirrors this check 0: Manual mode, 1: Auto mode
 */
static inline uint8_t mavlink_msg_faust_ctrl_mode_status_get_fcs_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field fcs_mode from faust_ctrl_mode_status message
 *
 * @return  [-], Indicates the fcs mode. 0: disabled, 1: SysID, 2:AFCS, 3:SysID + AFCS
 */
static inline uint8_t mavlink_msg_faust_ctrl_mode_status_get_fcs_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field sysid_status from faust_ctrl_mode_status message
 *
 * @return  [-], Indicates whether a SysID input is active or not. 0: disabled, 1: SysID active
 */
static inline uint8_t mavlink_msg_faust_ctrl_mode_status_get_sysid_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Decode a faust_ctrl_mode_status message into a struct
 *
 * @param msg The message to decode
 * @param faust_ctrl_mode_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_faust_ctrl_mode_status_decode(const mavlink_message_t* msg, mavlink_faust_ctrl_mode_status_t* faust_ctrl_mode_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    faust_ctrl_mode_status->time_usec = mavlink_msg_faust_ctrl_mode_status_get_time_usec(msg);
    faust_ctrl_mode_status->fcs_enabled = mavlink_msg_faust_ctrl_mode_status_get_fcs_enabled(msg);
    faust_ctrl_mode_status->fcs_mode = mavlink_msg_faust_ctrl_mode_status_get_fcs_mode(msg);
    faust_ctrl_mode_status->sysid_status = mavlink_msg_faust_ctrl_mode_status_get_sysid_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN;
        memset(faust_ctrl_mode_status, 0, MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_LEN);
    memcpy(faust_ctrl_mode_status, _MAV_PAYLOAD(msg), len);
#endif
}
