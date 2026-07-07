#pragma once
// MESSAGE FAUST_SETPOINTS PACKING

#define MAVLINK_MSG_ID_FAUST_SETPOINTS 527


typedef struct __mavlink_faust_setpoints_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 float delta_y; /*<  [m] Lateral path error*/
 float delta_y_dot; /*<  [m/s] Lateral velocity error*/
 float v_sp; /*<  [m/s] Velocity Setpoint*/
 float h_sp; /*<  [m] Height Setpoint*/
 float phi_sp; /*<  [rad] Euler angle phi (roll) setpoint*/
 float theta_sp; /*<  [rad] angle theta (pitch) setpoint*/
 float psi_sp; /*<  [rad] Euler angle psi (yaw) setpoint*/
 float roc_sp; /*<  [m/s] Rate of climb setpoint*/
 float p_sp; /*<  [rad/s] Body rate p (roll) setpoint */
 float q_sp; /*<  [rad/s] Body rate q (pitch) setpoint*/
 float r_sp; /*<  [rad/s] Body rate r (yaw) setpoint*/
} mavlink_faust_setpoints_t;

#define MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN 52
#define MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN 52
#define MAVLINK_MSG_ID_527_LEN 52
#define MAVLINK_MSG_ID_527_MIN_LEN 52

#define MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC 107
#define MAVLINK_MSG_ID_527_CRC 107



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FAUST_SETPOINTS { \
    527, \
    "FAUST_SETPOINTS", \
    12, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_faust_setpoints_t, time_usec) }, \
         { "delta_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_faust_setpoints_t, delta_y) }, \
         { "delta_y_dot", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_faust_setpoints_t, delta_y_dot) }, \
         { "v_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_faust_setpoints_t, v_sp) }, \
         { "h_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_faust_setpoints_t, h_sp) }, \
         { "phi_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_faust_setpoints_t, phi_sp) }, \
         { "theta_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_faust_setpoints_t, theta_sp) }, \
         { "psi_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_faust_setpoints_t, psi_sp) }, \
         { "roc_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_faust_setpoints_t, roc_sp) }, \
         { "p_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_faust_setpoints_t, p_sp) }, \
         { "q_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_faust_setpoints_t, q_sp) }, \
         { "r_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_faust_setpoints_t, r_sp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FAUST_SETPOINTS { \
    "FAUST_SETPOINTS", \
    12, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_faust_setpoints_t, time_usec) }, \
         { "delta_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_faust_setpoints_t, delta_y) }, \
         { "delta_y_dot", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_faust_setpoints_t, delta_y_dot) }, \
         { "v_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_faust_setpoints_t, v_sp) }, \
         { "h_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_faust_setpoints_t, h_sp) }, \
         { "phi_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_faust_setpoints_t, phi_sp) }, \
         { "theta_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_faust_setpoints_t, theta_sp) }, \
         { "psi_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_faust_setpoints_t, psi_sp) }, \
         { "roc_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_faust_setpoints_t, roc_sp) }, \
         { "p_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_faust_setpoints_t, p_sp) }, \
         { "q_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_faust_setpoints_t, q_sp) }, \
         { "r_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_faust_setpoints_t, r_sp) }, \
         } \
}
#endif

/**
 * @brief Pack a faust_setpoints message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param delta_y  [m] Lateral path error
 * @param delta_y_dot  [m/s] Lateral velocity error
 * @param v_sp  [m/s] Velocity Setpoint
 * @param h_sp  [m] Height Setpoint
 * @param phi_sp  [rad] Euler angle phi (roll) setpoint
 * @param theta_sp  [rad] angle theta (pitch) setpoint
 * @param psi_sp  [rad] Euler angle psi (yaw) setpoint
 * @param roc_sp  [m/s] Rate of climb setpoint
 * @param p_sp  [rad/s] Body rate p (roll) setpoint 
 * @param q_sp  [rad/s] Body rate q (pitch) setpoint
 * @param r_sp  [rad/s] Body rate r (yaw) setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_faust_setpoints_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float delta_y, float delta_y_dot, float v_sp, float h_sp, float phi_sp, float theta_sp, float psi_sp, float roc_sp, float p_sp, float q_sp, float r_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, delta_y);
    _mav_put_float(buf, 12, delta_y_dot);
    _mav_put_float(buf, 16, v_sp);
    _mav_put_float(buf, 20, h_sp);
    _mav_put_float(buf, 24, phi_sp);
    _mav_put_float(buf, 28, theta_sp);
    _mav_put_float(buf, 32, psi_sp);
    _mav_put_float(buf, 36, roc_sp);
    _mav_put_float(buf, 40, p_sp);
    _mav_put_float(buf, 44, q_sp);
    _mav_put_float(buf, 48, r_sp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN);
#else
    mavlink_faust_setpoints_t packet;
    packet.time_usec = time_usec;
    packet.delta_y = delta_y;
    packet.delta_y_dot = delta_y_dot;
    packet.v_sp = v_sp;
    packet.h_sp = h_sp;
    packet.phi_sp = phi_sp;
    packet.theta_sp = theta_sp;
    packet.psi_sp = psi_sp;
    packet.roc_sp = roc_sp;
    packet.p_sp = p_sp;
    packet.q_sp = q_sp;
    packet.r_sp = r_sp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FAUST_SETPOINTS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC);
}

/**
 * @brief Pack a faust_setpoints message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param delta_y  [m] Lateral path error
 * @param delta_y_dot  [m/s] Lateral velocity error
 * @param v_sp  [m/s] Velocity Setpoint
 * @param h_sp  [m] Height Setpoint
 * @param phi_sp  [rad] Euler angle phi (roll) setpoint
 * @param theta_sp  [rad] angle theta (pitch) setpoint
 * @param psi_sp  [rad] Euler angle psi (yaw) setpoint
 * @param roc_sp  [m/s] Rate of climb setpoint
 * @param p_sp  [rad/s] Body rate p (roll) setpoint 
 * @param q_sp  [rad/s] Body rate q (pitch) setpoint
 * @param r_sp  [rad/s] Body rate r (yaw) setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_faust_setpoints_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, float delta_y, float delta_y_dot, float v_sp, float h_sp, float phi_sp, float theta_sp, float psi_sp, float roc_sp, float p_sp, float q_sp, float r_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, delta_y);
    _mav_put_float(buf, 12, delta_y_dot);
    _mav_put_float(buf, 16, v_sp);
    _mav_put_float(buf, 20, h_sp);
    _mav_put_float(buf, 24, phi_sp);
    _mav_put_float(buf, 28, theta_sp);
    _mav_put_float(buf, 32, psi_sp);
    _mav_put_float(buf, 36, roc_sp);
    _mav_put_float(buf, 40, p_sp);
    _mav_put_float(buf, 44, q_sp);
    _mav_put_float(buf, 48, r_sp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN);
#else
    mavlink_faust_setpoints_t packet;
    packet.time_usec = time_usec;
    packet.delta_y = delta_y;
    packet.delta_y_dot = delta_y_dot;
    packet.v_sp = v_sp;
    packet.h_sp = h_sp;
    packet.phi_sp = phi_sp;
    packet.theta_sp = theta_sp;
    packet.psi_sp = psi_sp;
    packet.roc_sp = roc_sp;
    packet.p_sp = p_sp;
    packet.q_sp = q_sp;
    packet.r_sp = r_sp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FAUST_SETPOINTS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN);
#endif
}

/**
 * @brief Pack a faust_setpoints message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param delta_y  [m] Lateral path error
 * @param delta_y_dot  [m/s] Lateral velocity error
 * @param v_sp  [m/s] Velocity Setpoint
 * @param h_sp  [m] Height Setpoint
 * @param phi_sp  [rad] Euler angle phi (roll) setpoint
 * @param theta_sp  [rad] angle theta (pitch) setpoint
 * @param psi_sp  [rad] Euler angle psi (yaw) setpoint
 * @param roc_sp  [m/s] Rate of climb setpoint
 * @param p_sp  [rad/s] Body rate p (roll) setpoint 
 * @param q_sp  [rad/s] Body rate q (pitch) setpoint
 * @param r_sp  [rad/s] Body rate r (yaw) setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_faust_setpoints_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float delta_y,float delta_y_dot,float v_sp,float h_sp,float phi_sp,float theta_sp,float psi_sp,float roc_sp,float p_sp,float q_sp,float r_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, delta_y);
    _mav_put_float(buf, 12, delta_y_dot);
    _mav_put_float(buf, 16, v_sp);
    _mav_put_float(buf, 20, h_sp);
    _mav_put_float(buf, 24, phi_sp);
    _mav_put_float(buf, 28, theta_sp);
    _mav_put_float(buf, 32, psi_sp);
    _mav_put_float(buf, 36, roc_sp);
    _mav_put_float(buf, 40, p_sp);
    _mav_put_float(buf, 44, q_sp);
    _mav_put_float(buf, 48, r_sp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN);
#else
    mavlink_faust_setpoints_t packet;
    packet.time_usec = time_usec;
    packet.delta_y = delta_y;
    packet.delta_y_dot = delta_y_dot;
    packet.v_sp = v_sp;
    packet.h_sp = h_sp;
    packet.phi_sp = phi_sp;
    packet.theta_sp = theta_sp;
    packet.psi_sp = psi_sp;
    packet.roc_sp = roc_sp;
    packet.p_sp = p_sp;
    packet.q_sp = q_sp;
    packet.r_sp = r_sp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FAUST_SETPOINTS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC);
}

/**
 * @brief Encode a faust_setpoints struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param faust_setpoints C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_faust_setpoints_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_faust_setpoints_t* faust_setpoints)
{
    return mavlink_msg_faust_setpoints_pack(system_id, component_id, msg, faust_setpoints->time_usec, faust_setpoints->delta_y, faust_setpoints->delta_y_dot, faust_setpoints->v_sp, faust_setpoints->h_sp, faust_setpoints->phi_sp, faust_setpoints->theta_sp, faust_setpoints->psi_sp, faust_setpoints->roc_sp, faust_setpoints->p_sp, faust_setpoints->q_sp, faust_setpoints->r_sp);
}

/**
 * @brief Encode a faust_setpoints struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param faust_setpoints C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_faust_setpoints_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_faust_setpoints_t* faust_setpoints)
{
    return mavlink_msg_faust_setpoints_pack_chan(system_id, component_id, chan, msg, faust_setpoints->time_usec, faust_setpoints->delta_y, faust_setpoints->delta_y_dot, faust_setpoints->v_sp, faust_setpoints->h_sp, faust_setpoints->phi_sp, faust_setpoints->theta_sp, faust_setpoints->psi_sp, faust_setpoints->roc_sp, faust_setpoints->p_sp, faust_setpoints->q_sp, faust_setpoints->r_sp);
}

/**
 * @brief Encode a faust_setpoints struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param faust_setpoints C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_faust_setpoints_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_faust_setpoints_t* faust_setpoints)
{
    return mavlink_msg_faust_setpoints_pack_status(system_id, component_id, _status, msg,  faust_setpoints->time_usec, faust_setpoints->delta_y, faust_setpoints->delta_y_dot, faust_setpoints->v_sp, faust_setpoints->h_sp, faust_setpoints->phi_sp, faust_setpoints->theta_sp, faust_setpoints->psi_sp, faust_setpoints->roc_sp, faust_setpoints->p_sp, faust_setpoints->q_sp, faust_setpoints->r_sp);
}

/**
 * @brief Send a faust_setpoints message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param delta_y  [m] Lateral path error
 * @param delta_y_dot  [m/s] Lateral velocity error
 * @param v_sp  [m/s] Velocity Setpoint
 * @param h_sp  [m] Height Setpoint
 * @param phi_sp  [rad] Euler angle phi (roll) setpoint
 * @param theta_sp  [rad] angle theta (pitch) setpoint
 * @param psi_sp  [rad] Euler angle psi (yaw) setpoint
 * @param roc_sp  [m/s] Rate of climb setpoint
 * @param p_sp  [rad/s] Body rate p (roll) setpoint 
 * @param q_sp  [rad/s] Body rate q (pitch) setpoint
 * @param r_sp  [rad/s] Body rate r (yaw) setpoint
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_faust_setpoints_send(mavlink_channel_t chan, uint64_t time_usec, float delta_y, float delta_y_dot, float v_sp, float h_sp, float phi_sp, float theta_sp, float psi_sp, float roc_sp, float p_sp, float q_sp, float r_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, delta_y);
    _mav_put_float(buf, 12, delta_y_dot);
    _mav_put_float(buf, 16, v_sp);
    _mav_put_float(buf, 20, h_sp);
    _mav_put_float(buf, 24, phi_sp);
    _mav_put_float(buf, 28, theta_sp);
    _mav_put_float(buf, 32, psi_sp);
    _mav_put_float(buf, 36, roc_sp);
    _mav_put_float(buf, 40, p_sp);
    _mav_put_float(buf, 44, q_sp);
    _mav_put_float(buf, 48, r_sp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_SETPOINTS, buf, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC);
#else
    mavlink_faust_setpoints_t packet;
    packet.time_usec = time_usec;
    packet.delta_y = delta_y;
    packet.delta_y_dot = delta_y_dot;
    packet.v_sp = v_sp;
    packet.h_sp = h_sp;
    packet.phi_sp = phi_sp;
    packet.theta_sp = theta_sp;
    packet.psi_sp = psi_sp;
    packet.roc_sp = roc_sp;
    packet.p_sp = p_sp;
    packet.q_sp = q_sp;
    packet.r_sp = r_sp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_SETPOINTS, (const char *)&packet, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC);
#endif
}

/**
 * @brief Send a faust_setpoints message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_faust_setpoints_send_struct(mavlink_channel_t chan, const mavlink_faust_setpoints_t* faust_setpoints)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_faust_setpoints_send(chan, faust_setpoints->time_usec, faust_setpoints->delta_y, faust_setpoints->delta_y_dot, faust_setpoints->v_sp, faust_setpoints->h_sp, faust_setpoints->phi_sp, faust_setpoints->theta_sp, faust_setpoints->psi_sp, faust_setpoints->roc_sp, faust_setpoints->p_sp, faust_setpoints->q_sp, faust_setpoints->r_sp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_SETPOINTS, (const char *)faust_setpoints, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_faust_setpoints_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float delta_y, float delta_y_dot, float v_sp, float h_sp, float phi_sp, float theta_sp, float psi_sp, float roc_sp, float p_sp, float q_sp, float r_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, delta_y);
    _mav_put_float(buf, 12, delta_y_dot);
    _mav_put_float(buf, 16, v_sp);
    _mav_put_float(buf, 20, h_sp);
    _mav_put_float(buf, 24, phi_sp);
    _mav_put_float(buf, 28, theta_sp);
    _mav_put_float(buf, 32, psi_sp);
    _mav_put_float(buf, 36, roc_sp);
    _mav_put_float(buf, 40, p_sp);
    _mav_put_float(buf, 44, q_sp);
    _mav_put_float(buf, 48, r_sp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_SETPOINTS, buf, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC);
#else
    mavlink_faust_setpoints_t *packet = (mavlink_faust_setpoints_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->delta_y = delta_y;
    packet->delta_y_dot = delta_y_dot;
    packet->v_sp = v_sp;
    packet->h_sp = h_sp;
    packet->phi_sp = phi_sp;
    packet->theta_sp = theta_sp;
    packet->psi_sp = psi_sp;
    packet->roc_sp = roc_sp;
    packet->p_sp = p_sp;
    packet->q_sp = q_sp;
    packet->r_sp = r_sp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAUST_SETPOINTS, (const char *)packet, MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN, MAVLINK_MSG_ID_FAUST_SETPOINTS_CRC);
#endif
}
#endif

#endif

// MESSAGE FAUST_SETPOINTS UNPACKING


/**
 * @brief Get field time_usec from faust_setpoints message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_faust_setpoints_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field delta_y from faust_setpoints message
 *
 * @return  [m] Lateral path error
 */
static inline float mavlink_msg_faust_setpoints_get_delta_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field delta_y_dot from faust_setpoints message
 *
 * @return  [m/s] Lateral velocity error
 */
static inline float mavlink_msg_faust_setpoints_get_delta_y_dot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field v_sp from faust_setpoints message
 *
 * @return  [m/s] Velocity Setpoint
 */
static inline float mavlink_msg_faust_setpoints_get_v_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field h_sp from faust_setpoints message
 *
 * @return  [m] Height Setpoint
 */
static inline float mavlink_msg_faust_setpoints_get_h_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field phi_sp from faust_setpoints message
 *
 * @return  [rad] Euler angle phi (roll) setpoint
 */
static inline float mavlink_msg_faust_setpoints_get_phi_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field theta_sp from faust_setpoints message
 *
 * @return  [rad] angle theta (pitch) setpoint
 */
static inline float mavlink_msg_faust_setpoints_get_theta_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field psi_sp from faust_setpoints message
 *
 * @return  [rad] Euler angle psi (yaw) setpoint
 */
static inline float mavlink_msg_faust_setpoints_get_psi_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field roc_sp from faust_setpoints message
 *
 * @return  [m/s] Rate of climb setpoint
 */
static inline float mavlink_msg_faust_setpoints_get_roc_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field p_sp from faust_setpoints message
 *
 * @return  [rad/s] Body rate p (roll) setpoint 
 */
static inline float mavlink_msg_faust_setpoints_get_p_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field q_sp from faust_setpoints message
 *
 * @return  [rad/s] Body rate q (pitch) setpoint
 */
static inline float mavlink_msg_faust_setpoints_get_q_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field r_sp from faust_setpoints message
 *
 * @return  [rad/s] Body rate r (yaw) setpoint
 */
static inline float mavlink_msg_faust_setpoints_get_r_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Decode a faust_setpoints message into a struct
 *
 * @param msg The message to decode
 * @param faust_setpoints C-struct to decode the message contents into
 */
static inline void mavlink_msg_faust_setpoints_decode(const mavlink_message_t* msg, mavlink_faust_setpoints_t* faust_setpoints)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    faust_setpoints->time_usec = mavlink_msg_faust_setpoints_get_time_usec(msg);
    faust_setpoints->delta_y = mavlink_msg_faust_setpoints_get_delta_y(msg);
    faust_setpoints->delta_y_dot = mavlink_msg_faust_setpoints_get_delta_y_dot(msg);
    faust_setpoints->v_sp = mavlink_msg_faust_setpoints_get_v_sp(msg);
    faust_setpoints->h_sp = mavlink_msg_faust_setpoints_get_h_sp(msg);
    faust_setpoints->phi_sp = mavlink_msg_faust_setpoints_get_phi_sp(msg);
    faust_setpoints->theta_sp = mavlink_msg_faust_setpoints_get_theta_sp(msg);
    faust_setpoints->psi_sp = mavlink_msg_faust_setpoints_get_psi_sp(msg);
    faust_setpoints->roc_sp = mavlink_msg_faust_setpoints_get_roc_sp(msg);
    faust_setpoints->p_sp = mavlink_msg_faust_setpoints_get_p_sp(msg);
    faust_setpoints->q_sp = mavlink_msg_faust_setpoints_get_q_sp(msg);
    faust_setpoints->r_sp = mavlink_msg_faust_setpoints_get_r_sp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN? msg->len : MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN;
        memset(faust_setpoints, 0, MAVLINK_MSG_ID_FAUST_SETPOINTS_LEN);
    memcpy(faust_setpoints, _MAV_PAYLOAD(msg), len);
#endif
}
