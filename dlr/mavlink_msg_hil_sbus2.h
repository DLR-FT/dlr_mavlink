#pragma once
// MESSAGE HIL_SBUS2 PACKING

#define MAVLINK_MSG_ID_HIL_SBUS2 544


typedef struct __mavlink_hil_sbus2_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint8_t nSlots; /*<  Number of slot fields used in this message*/
 uint8_t Slots[36]; /*<  Slots, contains 12 fields of triplet Slot-ID, Highbyte, Lowbyte*/
} mavlink_hil_sbus2_t;

#define MAVLINK_MSG_ID_HIL_SBUS2_LEN 45
#define MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN 45
#define MAVLINK_MSG_ID_544_LEN 45
#define MAVLINK_MSG_ID_544_MIN_LEN 45

#define MAVLINK_MSG_ID_HIL_SBUS2_CRC 218
#define MAVLINK_MSG_ID_544_CRC 218

#define MAVLINK_MSG_HIL_SBUS2_FIELD_SLOTS_LEN 36

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HIL_SBUS2 { \
    544, \
    "HIL_SBUS2", \
    3, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_sbus2_t, time_usec) }, \
         { "nSlots", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_hil_sbus2_t, nSlots) }, \
         { "Slots", NULL, MAVLINK_TYPE_UINT8_T, 36, 9, offsetof(mavlink_hil_sbus2_t, Slots) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HIL_SBUS2 { \
    "HIL_SBUS2", \
    3, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_sbus2_t, time_usec) }, \
         { "nSlots", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_hil_sbus2_t, nSlots) }, \
         { "Slots", NULL, MAVLINK_TYPE_UINT8_T, 36, 9, offsetof(mavlink_hil_sbus2_t, Slots) }, \
         } \
}
#endif

/**
 * @brief Pack a hil_sbus2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param nSlots  Number of slot fields used in this message
 * @param Slots  Slots, contains 12 fields of triplet Slot-ID, Highbyte, Lowbyte
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_sbus2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t nSlots, const uint8_t *Slots)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_SBUS2_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, nSlots);
    _mav_put_uint8_t_array(buf, 9, Slots, 36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_SBUS2_LEN);
#else
    mavlink_hil_sbus2_t packet;
    packet.time_usec = time_usec;
    packet.nSlots = nSlots;
    mav_array_assign_uint8_t(packet.Slots, Slots, 36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_SBUS2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_SBUS2;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN, MAVLINK_MSG_ID_HIL_SBUS2_CRC);
}

/**
 * @brief Pack a hil_sbus2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param nSlots  Number of slot fields used in this message
 * @param Slots  Slots, contains 12 fields of triplet Slot-ID, Highbyte, Lowbyte
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_sbus2_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t nSlots, const uint8_t *Slots)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_SBUS2_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, nSlots);
    _mav_put_uint8_t_array(buf, 9, Slots, 36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_SBUS2_LEN);
#else
    mavlink_hil_sbus2_t packet;
    packet.time_usec = time_usec;
    packet.nSlots = nSlots;
    mav_array_memcpy(packet.Slots, Slots, sizeof(uint8_t)*36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_SBUS2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_SBUS2;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN, MAVLINK_MSG_ID_HIL_SBUS2_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN);
#endif
}

/**
 * @brief Pack a hil_sbus2 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param nSlots  Number of slot fields used in this message
 * @param Slots  Slots, contains 12 fields of triplet Slot-ID, Highbyte, Lowbyte
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_sbus2_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t nSlots,const uint8_t *Slots)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_SBUS2_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, nSlots);
    _mav_put_uint8_t_array(buf, 9, Slots, 36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_SBUS2_LEN);
#else
    mavlink_hil_sbus2_t packet;
    packet.time_usec = time_usec;
    packet.nSlots = nSlots;
    mav_array_assign_uint8_t(packet.Slots, Slots, 36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_SBUS2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_SBUS2;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN, MAVLINK_MSG_ID_HIL_SBUS2_CRC);
}

/**
 * @brief Encode a hil_sbus2 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hil_sbus2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_sbus2_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hil_sbus2_t* hil_sbus2)
{
    return mavlink_msg_hil_sbus2_pack(system_id, component_id, msg, hil_sbus2->time_usec, hil_sbus2->nSlots, hil_sbus2->Slots);
}

/**
 * @brief Encode a hil_sbus2 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hil_sbus2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_sbus2_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hil_sbus2_t* hil_sbus2)
{
    return mavlink_msg_hil_sbus2_pack_chan(system_id, component_id, chan, msg, hil_sbus2->time_usec, hil_sbus2->nSlots, hil_sbus2->Slots);
}

/**
 * @brief Encode a hil_sbus2 struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hil_sbus2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_sbus2_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hil_sbus2_t* hil_sbus2)
{
    return mavlink_msg_hil_sbus2_pack_status(system_id, component_id, _status, msg,  hil_sbus2->time_usec, hil_sbus2->nSlots, hil_sbus2->Slots);
}

/**
 * @brief Send a hil_sbus2 message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param nSlots  Number of slot fields used in this message
 * @param Slots  Slots, contains 12 fields of triplet Slot-ID, Highbyte, Lowbyte
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hil_sbus2_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t nSlots, const uint8_t *Slots)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_SBUS2_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, nSlots);
    _mav_put_uint8_t_array(buf, 9, Slots, 36);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_SBUS2, buf, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN, MAVLINK_MSG_ID_HIL_SBUS2_CRC);
#else
    mavlink_hil_sbus2_t packet;
    packet.time_usec = time_usec;
    packet.nSlots = nSlots;
    mav_array_assign_uint8_t(packet.Slots, Slots, 36);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_SBUS2, (const char *)&packet, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN, MAVLINK_MSG_ID_HIL_SBUS2_CRC);
#endif
}

/**
 * @brief Send a hil_sbus2 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hil_sbus2_send_struct(mavlink_channel_t chan, const mavlink_hil_sbus2_t* hil_sbus2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hil_sbus2_send(chan, hil_sbus2->time_usec, hil_sbus2->nSlots, hil_sbus2->Slots);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_SBUS2, (const char *)hil_sbus2, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN, MAVLINK_MSG_ID_HIL_SBUS2_CRC);
#endif
}

#if MAVLINK_MSG_ID_HIL_SBUS2_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hil_sbus2_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t nSlots, const uint8_t *Slots)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, nSlots);
    _mav_put_uint8_t_array(buf, 9, Slots, 36);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_SBUS2, buf, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN, MAVLINK_MSG_ID_HIL_SBUS2_CRC);
#else
    mavlink_hil_sbus2_t *packet = (mavlink_hil_sbus2_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->nSlots = nSlots;
    mav_array_assign_uint8_t(packet->Slots, Slots, 36);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_SBUS2, (const char *)packet, MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN, MAVLINK_MSG_ID_HIL_SBUS2_LEN, MAVLINK_MSG_ID_HIL_SBUS2_CRC);
#endif
}
#endif

#endif

// MESSAGE HIL_SBUS2 UNPACKING


/**
 * @brief Get field time_usec from hil_sbus2 message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_hil_sbus2_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field nSlots from hil_sbus2 message
 *
 * @return  Number of slot fields used in this message
 */
static inline uint8_t mavlink_msg_hil_sbus2_get_nSlots(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field Slots from hil_sbus2 message
 *
 * @return  Slots, contains 12 fields of triplet Slot-ID, Highbyte, Lowbyte
 */
static inline uint16_t mavlink_msg_hil_sbus2_get_Slots(const mavlink_message_t* msg, uint8_t *Slots)
{
    return _MAV_RETURN_uint8_t_array(msg, Slots, 36,  9);
}

/**
 * @brief Decode a hil_sbus2 message into a struct
 *
 * @param msg The message to decode
 * @param hil_sbus2 C-struct to decode the message contents into
 */
static inline void mavlink_msg_hil_sbus2_decode(const mavlink_message_t* msg, mavlink_hil_sbus2_t* hil_sbus2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hil_sbus2->time_usec = mavlink_msg_hil_sbus2_get_time_usec(msg);
    hil_sbus2->nSlots = mavlink_msg_hil_sbus2_get_nSlots(msg);
    mavlink_msg_hil_sbus2_get_Slots(msg, hil_sbus2->Slots);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HIL_SBUS2_LEN? msg->len : MAVLINK_MSG_ID_HIL_SBUS2_LEN;
        memset(hil_sbus2, 0, MAVLINK_MSG_ID_HIL_SBUS2_LEN);
    memcpy(hil_sbus2, _MAV_PAYLOAD(msg), len);
#endif
}
