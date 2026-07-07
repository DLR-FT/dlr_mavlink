#pragma once
// MESSAGE GNSS_PSEUDO_RANGE_PHASE_SHIFT PACKING

#define MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT 510


typedef struct __mavlink_gnss_pseudo_range_phase_shift_t {
 double pseudorange; /*< [nm] Pseudo-Range of Satellite to receiver*/
 double phaseshift; /*< [ns] Phase Shift in nanoseconds (10^-9 of a second)*/
 uint8_t sat; /*<  GNSS-System Crossover Unique SAT-Number*/
} mavlink_gnss_pseudo_range_phase_shift_t;

#define MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN 17
#define MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN 17
#define MAVLINK_MSG_ID_510_LEN 17
#define MAVLINK_MSG_ID_510_MIN_LEN 17

#define MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC 251
#define MAVLINK_MSG_ID_510_CRC 251



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GNSS_PSEUDO_RANGE_PHASE_SHIFT { \
    510, \
    "GNSS_PSEUDO_RANGE_PHASE_SHIFT", \
    3, \
    {  { "sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_gnss_pseudo_range_phase_shift_t, sat) }, \
         { "pseudorange", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_gnss_pseudo_range_phase_shift_t, pseudorange) }, \
         { "phaseshift", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_gnss_pseudo_range_phase_shift_t, phaseshift) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GNSS_PSEUDO_RANGE_PHASE_SHIFT { \
    "GNSS_PSEUDO_RANGE_PHASE_SHIFT", \
    3, \
    {  { "sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_gnss_pseudo_range_phase_shift_t, sat) }, \
         { "pseudorange", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_gnss_pseudo_range_phase_shift_t, pseudorange) }, \
         { "phaseshift", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_gnss_pseudo_range_phase_shift_t, phaseshift) }, \
         } \
}
#endif

/**
 * @brief Pack a gnss_pseudo_range_phase_shift message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param pseudorange [nm] Pseudo-Range of Satellite to receiver
 * @param phaseshift [ns] Phase Shift in nanoseconds (10^-9 of a second)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_pseudo_range_phase_shift_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t sat, double pseudorange, double phaseshift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN];
    _mav_put_double(buf, 0, pseudorange);
    _mav_put_double(buf, 8, phaseshift);
    _mav_put_uint8_t(buf, 16, sat);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN);
#else
    mavlink_gnss_pseudo_range_phase_shift_t packet;
    packet.pseudorange = pseudorange;
    packet.phaseshift = phaseshift;
    packet.sat = sat;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC);
}

/**
 * @brief Pack a gnss_pseudo_range_phase_shift message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param pseudorange [nm] Pseudo-Range of Satellite to receiver
 * @param phaseshift [ns] Phase Shift in nanoseconds (10^-9 of a second)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_pseudo_range_phase_shift_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t sat, double pseudorange, double phaseshift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN];
    _mav_put_double(buf, 0, pseudorange);
    _mav_put_double(buf, 8, phaseshift);
    _mav_put_uint8_t(buf, 16, sat);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN);
#else
    mavlink_gnss_pseudo_range_phase_shift_t packet;
    packet.pseudorange = pseudorange;
    packet.phaseshift = phaseshift;
    packet.sat = sat;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN);
#endif
}

/**
 * @brief Pack a gnss_pseudo_range_phase_shift message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param pseudorange [nm] Pseudo-Range of Satellite to receiver
 * @param phaseshift [ns] Phase Shift in nanoseconds (10^-9 of a second)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_pseudo_range_phase_shift_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t sat,double pseudorange,double phaseshift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN];
    _mav_put_double(buf, 0, pseudorange);
    _mav_put_double(buf, 8, phaseshift);
    _mav_put_uint8_t(buf, 16, sat);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN);
#else
    mavlink_gnss_pseudo_range_phase_shift_t packet;
    packet.pseudorange = pseudorange;
    packet.phaseshift = phaseshift;
    packet.sat = sat;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC);
}

/**
 * @brief Encode a gnss_pseudo_range_phase_shift struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gnss_pseudo_range_phase_shift C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_pseudo_range_phase_shift_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gnss_pseudo_range_phase_shift_t* gnss_pseudo_range_phase_shift)
{
    return mavlink_msg_gnss_pseudo_range_phase_shift_pack(system_id, component_id, msg, gnss_pseudo_range_phase_shift->sat, gnss_pseudo_range_phase_shift->pseudorange, gnss_pseudo_range_phase_shift->phaseshift);
}

/**
 * @brief Encode a gnss_pseudo_range_phase_shift struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gnss_pseudo_range_phase_shift C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_pseudo_range_phase_shift_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gnss_pseudo_range_phase_shift_t* gnss_pseudo_range_phase_shift)
{
    return mavlink_msg_gnss_pseudo_range_phase_shift_pack_chan(system_id, component_id, chan, msg, gnss_pseudo_range_phase_shift->sat, gnss_pseudo_range_phase_shift->pseudorange, gnss_pseudo_range_phase_shift->phaseshift);
}

/**
 * @brief Encode a gnss_pseudo_range_phase_shift struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gnss_pseudo_range_phase_shift C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_pseudo_range_phase_shift_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gnss_pseudo_range_phase_shift_t* gnss_pseudo_range_phase_shift)
{
    return mavlink_msg_gnss_pseudo_range_phase_shift_pack_status(system_id, component_id, _status, msg,  gnss_pseudo_range_phase_shift->sat, gnss_pseudo_range_phase_shift->pseudorange, gnss_pseudo_range_phase_shift->phaseshift);
}

/**
 * @brief Send a gnss_pseudo_range_phase_shift message
 * @param chan MAVLink channel to send the message
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param pseudorange [nm] Pseudo-Range of Satellite to receiver
 * @param phaseshift [ns] Phase Shift in nanoseconds (10^-9 of a second)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gnss_pseudo_range_phase_shift_send(mavlink_channel_t chan, uint8_t sat, double pseudorange, double phaseshift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN];
    _mav_put_double(buf, 0, pseudorange);
    _mav_put_double(buf, 8, phaseshift);
    _mav_put_uint8_t(buf, 16, sat);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT, buf, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC);
#else
    mavlink_gnss_pseudo_range_phase_shift_t packet;
    packet.pseudorange = pseudorange;
    packet.phaseshift = phaseshift;
    packet.sat = sat;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT, (const char *)&packet, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC);
#endif
}

/**
 * @brief Send a gnss_pseudo_range_phase_shift message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gnss_pseudo_range_phase_shift_send_struct(mavlink_channel_t chan, const mavlink_gnss_pseudo_range_phase_shift_t* gnss_pseudo_range_phase_shift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_pseudo_range_phase_shift_send(chan, gnss_pseudo_range_phase_shift->sat, gnss_pseudo_range_phase_shift->pseudorange, gnss_pseudo_range_phase_shift->phaseshift);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT, (const char *)gnss_pseudo_range_phase_shift, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC);
#endif
}

#if MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gnss_pseudo_range_phase_shift_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t sat, double pseudorange, double phaseshift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_double(buf, 0, pseudorange);
    _mav_put_double(buf, 8, phaseshift);
    _mav_put_uint8_t(buf, 16, sat);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT, buf, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC);
#else
    mavlink_gnss_pseudo_range_phase_shift_t *packet = (mavlink_gnss_pseudo_range_phase_shift_t *)msgbuf;
    packet->pseudorange = pseudorange;
    packet->phaseshift = phaseshift;
    packet->sat = sat;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT, (const char *)packet, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_CRC);
#endif
}
#endif

#endif

// MESSAGE GNSS_PSEUDO_RANGE_PHASE_SHIFT UNPACKING


/**
 * @brief Get field sat from gnss_pseudo_range_phase_shift message
 *
 * @return  GNSS-System Crossover Unique SAT-Number
 */
static inline uint8_t mavlink_msg_gnss_pseudo_range_phase_shift_get_sat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field pseudorange from gnss_pseudo_range_phase_shift message
 *
 * @return [nm] Pseudo-Range of Satellite to receiver
 */
static inline double mavlink_msg_gnss_pseudo_range_phase_shift_get_pseudorange(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  0);
}

/**
 * @brief Get field phaseshift from gnss_pseudo_range_phase_shift message
 *
 * @return [ns] Phase Shift in nanoseconds (10^-9 of a second)
 */
static inline double mavlink_msg_gnss_pseudo_range_phase_shift_get_phaseshift(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Decode a gnss_pseudo_range_phase_shift message into a struct
 *
 * @param msg The message to decode
 * @param gnss_pseudo_range_phase_shift C-struct to decode the message contents into
 */
static inline void mavlink_msg_gnss_pseudo_range_phase_shift_decode(const mavlink_message_t* msg, mavlink_gnss_pseudo_range_phase_shift_t* gnss_pseudo_range_phase_shift)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gnss_pseudo_range_phase_shift->pseudorange = mavlink_msg_gnss_pseudo_range_phase_shift_get_pseudorange(msg);
    gnss_pseudo_range_phase_shift->phaseshift = mavlink_msg_gnss_pseudo_range_phase_shift_get_phaseshift(msg);
    gnss_pseudo_range_phase_shift->sat = mavlink_msg_gnss_pseudo_range_phase_shift_get_sat(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN? msg->len : MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN;
        memset(gnss_pseudo_range_phase_shift, 0, MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_LEN);
    memcpy(gnss_pseudo_range_phase_shift, _MAV_PAYLOAD(msg), len);
#endif
}
