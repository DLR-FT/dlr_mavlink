#pragma once
// MESSAGE INNER_LOOP_SETPOINT PACKING

#define MAVLINK_MSG_ID_INNER_LOOP_SETPOINT 528


typedef struct __mavlink_inner_loop_setpoint_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 float phi_sp; /*<  [rad] Euler angle phi (roll) setpoint*/
 float theta_sp; /*<  [rad] angle theta (pitch) setpoint*/
 float psi_sp; /*<  [rad] Euler angle psi (yaw) setpoint*/
 float p_sp; /*<  [rad/s] Body rate p (roll) setpoint */
 float q_sp; /*<  [rad/s] Body rate q (pitch) setpoint*/
 float r_sp; /*<  [rad/s] Body rate r (yaw) setpoint*/
 float roc_sp; /*<  [m/s] Rate of climb setpoint*/
} mavlink_inner_loop_setpoint_t;

#define MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN 36
#define MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN 36
#define MAVLINK_MSG_ID_528_LEN 36
#define MAVLINK_MSG_ID_528_MIN_LEN 36

#define MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC 24
#define MAVLINK_MSG_ID_528_CRC 24



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_INNER_LOOP_SETPOINT { \
    528, \
    "INNER_LOOP_SETPOINT", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_inner_loop_setpoint_t, time_usec) }, \
         { "phi_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_inner_loop_setpoint_t, phi_sp) }, \
         { "theta_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_inner_loop_setpoint_t, theta_sp) }, \
         { "psi_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_inner_loop_setpoint_t, psi_sp) }, \
         { "p_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_inner_loop_setpoint_t, p_sp) }, \
         { "q_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_inner_loop_setpoint_t, q_sp) }, \
         { "r_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_inner_loop_setpoint_t, r_sp) }, \
         { "roc_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_inner_loop_setpoint_t, roc_sp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_INNER_LOOP_SETPOINT { \
    "INNER_LOOP_SETPOINT", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_inner_loop_setpoint_t, time_usec) }, \
         { "phi_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_inner_loop_setpoint_t, phi_sp) }, \
         { "theta_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_inner_loop_setpoint_t, theta_sp) }, \
         { "psi_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_inner_loop_setpoint_t, psi_sp) }, \
         { "p_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_inner_loop_setpoint_t, p_sp) }, \
         { "q_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_inner_loop_setpoint_t, q_sp) }, \
         { "r_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_inner_loop_setpoint_t, r_sp) }, \
         { "roc_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_inner_loop_setpoint_t, roc_sp) }, \
         } \
}
#endif

/**
 * @brief Pack a inner_loop_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param phi_sp  [rad] Euler angle phi (roll) setpoint
 * @param theta_sp  [rad] angle theta (pitch) setpoint
 * @param psi_sp  [rad] Euler angle psi (yaw) setpoint
 * @param p_sp  [rad/s] Body rate p (roll) setpoint 
 * @param q_sp  [rad/s] Body rate q (pitch) setpoint
 * @param r_sp  [rad/s] Body rate r (yaw) setpoint
 * @param roc_sp  [m/s] Rate of climb setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_inner_loop_setpoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float phi_sp, float theta_sp, float psi_sp, float p_sp, float q_sp, float r_sp, float roc_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, phi_sp);
    _mav_put_float(buf, 12, theta_sp);
    _mav_put_float(buf, 16, psi_sp);
    _mav_put_float(buf, 20, p_sp);
    _mav_put_float(buf, 24, q_sp);
    _mav_put_float(buf, 28, r_sp);
    _mav_put_float(buf, 32, roc_sp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN);
#else
    mavlink_inner_loop_setpoint_t packet;
    packet.time_usec = time_usec;
    packet.phi_sp = phi_sp;
    packet.theta_sp = theta_sp;
    packet.psi_sp = psi_sp;
    packet.p_sp = p_sp;
    packet.q_sp = q_sp;
    packet.r_sp = r_sp;
    packet.roc_sp = roc_sp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_INNER_LOOP_SETPOINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC);
}

/**
 * @brief Pack a inner_loop_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param phi_sp  [rad] Euler angle phi (roll) setpoint
 * @param theta_sp  [rad] angle theta (pitch) setpoint
 * @param psi_sp  [rad] Euler angle psi (yaw) setpoint
 * @param p_sp  [rad/s] Body rate p (roll) setpoint 
 * @param q_sp  [rad/s] Body rate q (pitch) setpoint
 * @param r_sp  [rad/s] Body rate r (yaw) setpoint
 * @param roc_sp  [m/s] Rate of climb setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_inner_loop_setpoint_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, float phi_sp, float theta_sp, float psi_sp, float p_sp, float q_sp, float r_sp, float roc_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, phi_sp);
    _mav_put_float(buf, 12, theta_sp);
    _mav_put_float(buf, 16, psi_sp);
    _mav_put_float(buf, 20, p_sp);
    _mav_put_float(buf, 24, q_sp);
    _mav_put_float(buf, 28, r_sp);
    _mav_put_float(buf, 32, roc_sp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN);
#else
    mavlink_inner_loop_setpoint_t packet;
    packet.time_usec = time_usec;
    packet.phi_sp = phi_sp;
    packet.theta_sp = theta_sp;
    packet.psi_sp = psi_sp;
    packet.p_sp = p_sp;
    packet.q_sp = q_sp;
    packet.r_sp = r_sp;
    packet.roc_sp = roc_sp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_INNER_LOOP_SETPOINT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN);
#endif
}

/**
 * @brief Pack a inner_loop_setpoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param phi_sp  [rad] Euler angle phi (roll) setpoint
 * @param theta_sp  [rad] angle theta (pitch) setpoint
 * @param psi_sp  [rad] Euler angle psi (yaw) setpoint
 * @param p_sp  [rad/s] Body rate p (roll) setpoint 
 * @param q_sp  [rad/s] Body rate q (pitch) setpoint
 * @param r_sp  [rad/s] Body rate r (yaw) setpoint
 * @param roc_sp  [m/s] Rate of climb setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_inner_loop_setpoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float phi_sp,float theta_sp,float psi_sp,float p_sp,float q_sp,float r_sp,float roc_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, phi_sp);
    _mav_put_float(buf, 12, theta_sp);
    _mav_put_float(buf, 16, psi_sp);
    _mav_put_float(buf, 20, p_sp);
    _mav_put_float(buf, 24, q_sp);
    _mav_put_float(buf, 28, r_sp);
    _mav_put_float(buf, 32, roc_sp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN);
#else
    mavlink_inner_loop_setpoint_t packet;
    packet.time_usec = time_usec;
    packet.phi_sp = phi_sp;
    packet.theta_sp = theta_sp;
    packet.psi_sp = psi_sp;
    packet.p_sp = p_sp;
    packet.q_sp = q_sp;
    packet.r_sp = r_sp;
    packet.roc_sp = roc_sp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_INNER_LOOP_SETPOINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC);
}

/**
 * @brief Encode a inner_loop_setpoint struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param inner_loop_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_inner_loop_setpoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_inner_loop_setpoint_t* inner_loop_setpoint)
{
    return mavlink_msg_inner_loop_setpoint_pack(system_id, component_id, msg, inner_loop_setpoint->time_usec, inner_loop_setpoint->phi_sp, inner_loop_setpoint->theta_sp, inner_loop_setpoint->psi_sp, inner_loop_setpoint->p_sp, inner_loop_setpoint->q_sp, inner_loop_setpoint->r_sp, inner_loop_setpoint->roc_sp);
}

/**
 * @brief Encode a inner_loop_setpoint struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param inner_loop_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_inner_loop_setpoint_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_inner_loop_setpoint_t* inner_loop_setpoint)
{
    return mavlink_msg_inner_loop_setpoint_pack_chan(system_id, component_id, chan, msg, inner_loop_setpoint->time_usec, inner_loop_setpoint->phi_sp, inner_loop_setpoint->theta_sp, inner_loop_setpoint->psi_sp, inner_loop_setpoint->p_sp, inner_loop_setpoint->q_sp, inner_loop_setpoint->r_sp, inner_loop_setpoint->roc_sp);
}

/**
 * @brief Encode a inner_loop_setpoint struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param inner_loop_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_inner_loop_setpoint_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_inner_loop_setpoint_t* inner_loop_setpoint)
{
    return mavlink_msg_inner_loop_setpoint_pack_status(system_id, component_id, _status, msg,  inner_loop_setpoint->time_usec, inner_loop_setpoint->phi_sp, inner_loop_setpoint->theta_sp, inner_loop_setpoint->psi_sp, inner_loop_setpoint->p_sp, inner_loop_setpoint->q_sp, inner_loop_setpoint->r_sp, inner_loop_setpoint->roc_sp);
}

/**
 * @brief Send a inner_loop_setpoint message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param phi_sp  [rad] Euler angle phi (roll) setpoint
 * @param theta_sp  [rad] angle theta (pitch) setpoint
 * @param psi_sp  [rad] Euler angle psi (yaw) setpoint
 * @param p_sp  [rad/s] Body rate p (roll) setpoint 
 * @param q_sp  [rad/s] Body rate q (pitch) setpoint
 * @param r_sp  [rad/s] Body rate r (yaw) setpoint
 * @param roc_sp  [m/s] Rate of climb setpoint
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_inner_loop_setpoint_send(mavlink_channel_t chan, uint64_t time_usec, float phi_sp, float theta_sp, float psi_sp, float p_sp, float q_sp, float r_sp, float roc_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, phi_sp);
    _mav_put_float(buf, 12, theta_sp);
    _mav_put_float(buf, 16, psi_sp);
    _mav_put_float(buf, 20, p_sp);
    _mav_put_float(buf, 24, q_sp);
    _mav_put_float(buf, 28, r_sp);
    _mav_put_float(buf, 32, roc_sp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT, buf, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC);
#else
    mavlink_inner_loop_setpoint_t packet;
    packet.time_usec = time_usec;
    packet.phi_sp = phi_sp;
    packet.theta_sp = theta_sp;
    packet.psi_sp = psi_sp;
    packet.p_sp = p_sp;
    packet.q_sp = q_sp;
    packet.r_sp = r_sp;
    packet.roc_sp = roc_sp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT, (const char *)&packet, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC);
#endif
}

/**
 * @brief Send a inner_loop_setpoint message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_inner_loop_setpoint_send_struct(mavlink_channel_t chan, const mavlink_inner_loop_setpoint_t* inner_loop_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_inner_loop_setpoint_send(chan, inner_loop_setpoint->time_usec, inner_loop_setpoint->phi_sp, inner_loop_setpoint->theta_sp, inner_loop_setpoint->psi_sp, inner_loop_setpoint->p_sp, inner_loop_setpoint->q_sp, inner_loop_setpoint->r_sp, inner_loop_setpoint->roc_sp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT, (const char *)inner_loop_setpoint, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_inner_loop_setpoint_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float phi_sp, float theta_sp, float psi_sp, float p_sp, float q_sp, float r_sp, float roc_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, phi_sp);
    _mav_put_float(buf, 12, theta_sp);
    _mav_put_float(buf, 16, psi_sp);
    _mav_put_float(buf, 20, p_sp);
    _mav_put_float(buf, 24, q_sp);
    _mav_put_float(buf, 28, r_sp);
    _mav_put_float(buf, 32, roc_sp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT, buf, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC);
#else
    mavlink_inner_loop_setpoint_t *packet = (mavlink_inner_loop_setpoint_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->phi_sp = phi_sp;
    packet->theta_sp = theta_sp;
    packet->psi_sp = psi_sp;
    packet->p_sp = p_sp;
    packet->q_sp = q_sp;
    packet->r_sp = r_sp;
    packet->roc_sp = roc_sp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT, (const char *)packet, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_CRC);
#endif
}
#endif

#endif

// MESSAGE INNER_LOOP_SETPOINT UNPACKING


/**
 * @brief Get field time_usec from inner_loop_setpoint message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_inner_loop_setpoint_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field phi_sp from inner_loop_setpoint message
 *
 * @return  [rad] Euler angle phi (roll) setpoint
 */
static inline float mavlink_msg_inner_loop_setpoint_get_phi_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field theta_sp from inner_loop_setpoint message
 *
 * @return  [rad] angle theta (pitch) setpoint
 */
static inline float mavlink_msg_inner_loop_setpoint_get_theta_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field psi_sp from inner_loop_setpoint message
 *
 * @return  [rad] Euler angle psi (yaw) setpoint
 */
static inline float mavlink_msg_inner_loop_setpoint_get_psi_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field p_sp from inner_loop_setpoint message
 *
 * @return  [rad/s] Body rate p (roll) setpoint 
 */
static inline float mavlink_msg_inner_loop_setpoint_get_p_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field q_sp from inner_loop_setpoint message
 *
 * @return  [rad/s] Body rate q (pitch) setpoint
 */
static inline float mavlink_msg_inner_loop_setpoint_get_q_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field r_sp from inner_loop_setpoint message
 *
 * @return  [rad/s] Body rate r (yaw) setpoint
 */
static inline float mavlink_msg_inner_loop_setpoint_get_r_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field roc_sp from inner_loop_setpoint message
 *
 * @return  [m/s] Rate of climb setpoint
 */
static inline float mavlink_msg_inner_loop_setpoint_get_roc_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a inner_loop_setpoint message into a struct
 *
 * @param msg The message to decode
 * @param inner_loop_setpoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_inner_loop_setpoint_decode(const mavlink_message_t* msg, mavlink_inner_loop_setpoint_t* inner_loop_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    inner_loop_setpoint->time_usec = mavlink_msg_inner_loop_setpoint_get_time_usec(msg);
    inner_loop_setpoint->phi_sp = mavlink_msg_inner_loop_setpoint_get_phi_sp(msg);
    inner_loop_setpoint->theta_sp = mavlink_msg_inner_loop_setpoint_get_theta_sp(msg);
    inner_loop_setpoint->psi_sp = mavlink_msg_inner_loop_setpoint_get_psi_sp(msg);
    inner_loop_setpoint->p_sp = mavlink_msg_inner_loop_setpoint_get_p_sp(msg);
    inner_loop_setpoint->q_sp = mavlink_msg_inner_loop_setpoint_get_q_sp(msg);
    inner_loop_setpoint->r_sp = mavlink_msg_inner_loop_setpoint_get_r_sp(msg);
    inner_loop_setpoint->roc_sp = mavlink_msg_inner_loop_setpoint_get_roc_sp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN? msg->len : MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN;
        memset(inner_loop_setpoint, 0, MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_LEN);
    memcpy(inner_loop_setpoint, _MAV_PAYLOAD(msg), len);
#endif
}
