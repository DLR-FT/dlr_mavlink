#pragma once
// MESSAGE OUTER_LOOP_SETPOINT PACKING

#define MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT 529


typedef struct __mavlink_outer_loop_setpoint_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 int32_t px; /*< [mm] Position setpoint North or longitudinal in heading reference system.*/
 int32_t py; /*< [mm] Position setpoint East or lateral in heading reference system.*/
 int32_t pz; /*< [mm] Position setpoint Down.*/
 uint16_t mode; /*<  OL controller mode bitfield.*/
 int16_t vx; /*< [cm/s] Velocity North or forward velocity in heading reference system.*/
 int16_t vy; /*< [cm/s] Velocity East or lateral velocity in heading reference system.*/
 int16_t vz; /*< [cm/s] Velocity Down */
 int16_t ax; /*< [cm/s/s] Acceleration North or longitudinal in heading reference system.*/
 int16_t ay; /*< [cm/s/s] Acceleration East or longitudinal in heading reference system.*/
 int16_t az; /*< [cm/s/s] Acceleration Down.*/
 int16_t psi; /*< [mrad] Commanded yaw angle (euler)*/
 int16_t dpsi; /*< [mrad/s] Commanded yaw angle (euler) rate*/
} mavlink_outer_loop_setpoint_t;

#define MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN 38
#define MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN 38
#define MAVLINK_MSG_ID_529_LEN 38
#define MAVLINK_MSG_ID_529_MIN_LEN 38

#define MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC 114
#define MAVLINK_MSG_ID_529_CRC 114



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OUTER_LOOP_SETPOINT { \
    529, \
    "OUTER_LOOP_SETPOINT", \
    13, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_outer_loop_setpoint_t, time_usec) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_outer_loop_setpoint_t, mode) }, \
         { "px", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_outer_loop_setpoint_t, px) }, \
         { "py", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_outer_loop_setpoint_t, py) }, \
         { "pz", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_outer_loop_setpoint_t, pz) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_outer_loop_setpoint_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_outer_loop_setpoint_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_outer_loop_setpoint_t, vz) }, \
         { "ax", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_outer_loop_setpoint_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_outer_loop_setpoint_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_outer_loop_setpoint_t, az) }, \
         { "psi", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_outer_loop_setpoint_t, psi) }, \
         { "dpsi", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_outer_loop_setpoint_t, dpsi) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OUTER_LOOP_SETPOINT { \
    "OUTER_LOOP_SETPOINT", \
    13, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_outer_loop_setpoint_t, time_usec) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_outer_loop_setpoint_t, mode) }, \
         { "px", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_outer_loop_setpoint_t, px) }, \
         { "py", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_outer_loop_setpoint_t, py) }, \
         { "pz", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_outer_loop_setpoint_t, pz) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_outer_loop_setpoint_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_outer_loop_setpoint_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_outer_loop_setpoint_t, vz) }, \
         { "ax", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_outer_loop_setpoint_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_outer_loop_setpoint_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_outer_loop_setpoint_t, az) }, \
         { "psi", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_outer_loop_setpoint_t, psi) }, \
         { "dpsi", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_outer_loop_setpoint_t, dpsi) }, \
         } \
}
#endif

/**
 * @brief Pack a outer_loop_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param mode  OL controller mode bitfield.
 * @param px [mm] Position setpoint North or longitudinal in heading reference system.
 * @param py [mm] Position setpoint East or lateral in heading reference system.
 * @param pz [mm] Position setpoint Down.
 * @param vx [cm/s] Velocity North or forward velocity in heading reference system.
 * @param vy [cm/s] Velocity East or lateral velocity in heading reference system.
 * @param vz [cm/s] Velocity Down 
 * @param ax [cm/s/s] Acceleration North or longitudinal in heading reference system.
 * @param ay [cm/s/s] Acceleration East or longitudinal in heading reference system.
 * @param az [cm/s/s] Acceleration Down.
 * @param psi [mrad] Commanded yaw angle (euler)
 * @param dpsi [mrad/s] Commanded yaw angle (euler) rate
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_outer_loop_setpoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint16_t mode, int32_t px, int32_t py, int32_t pz, int16_t vx, int16_t vy, int16_t vz, int16_t ax, int16_t ay, int16_t az, int16_t psi, int16_t dpsi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_uint16_t(buf, 20, mode);
    _mav_put_int16_t(buf, 22, vx);
    _mav_put_int16_t(buf, 24, vy);
    _mav_put_int16_t(buf, 26, vz);
    _mav_put_int16_t(buf, 28, ax);
    _mav_put_int16_t(buf, 30, ay);
    _mav_put_int16_t(buf, 32, az);
    _mav_put_int16_t(buf, 34, psi);
    _mav_put_int16_t(buf, 36, dpsi);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN);
#else
    mavlink_outer_loop_setpoint_t packet;
    packet.time_usec = time_usec;
    packet.px = px;
    packet.py = py;
    packet.pz = pz;
    packet.mode = mode;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.psi = psi;
    packet.dpsi = dpsi;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC);
}

/**
 * @brief Pack a outer_loop_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param mode  OL controller mode bitfield.
 * @param px [mm] Position setpoint North or longitudinal in heading reference system.
 * @param py [mm] Position setpoint East or lateral in heading reference system.
 * @param pz [mm] Position setpoint Down.
 * @param vx [cm/s] Velocity North or forward velocity in heading reference system.
 * @param vy [cm/s] Velocity East or lateral velocity in heading reference system.
 * @param vz [cm/s] Velocity Down 
 * @param ax [cm/s/s] Acceleration North or longitudinal in heading reference system.
 * @param ay [cm/s/s] Acceleration East or longitudinal in heading reference system.
 * @param az [cm/s/s] Acceleration Down.
 * @param psi [mrad] Commanded yaw angle (euler)
 * @param dpsi [mrad/s] Commanded yaw angle (euler) rate
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_outer_loop_setpoint_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint16_t mode, int32_t px, int32_t py, int32_t pz, int16_t vx, int16_t vy, int16_t vz, int16_t ax, int16_t ay, int16_t az, int16_t psi, int16_t dpsi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_uint16_t(buf, 20, mode);
    _mav_put_int16_t(buf, 22, vx);
    _mav_put_int16_t(buf, 24, vy);
    _mav_put_int16_t(buf, 26, vz);
    _mav_put_int16_t(buf, 28, ax);
    _mav_put_int16_t(buf, 30, ay);
    _mav_put_int16_t(buf, 32, az);
    _mav_put_int16_t(buf, 34, psi);
    _mav_put_int16_t(buf, 36, dpsi);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN);
#else
    mavlink_outer_loop_setpoint_t packet;
    packet.time_usec = time_usec;
    packet.px = px;
    packet.py = py;
    packet.pz = pz;
    packet.mode = mode;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.psi = psi;
    packet.dpsi = dpsi;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN);
#endif
}

/**
 * @brief Pack a outer_loop_setpoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param mode  OL controller mode bitfield.
 * @param px [mm] Position setpoint North or longitudinal in heading reference system.
 * @param py [mm] Position setpoint East or lateral in heading reference system.
 * @param pz [mm] Position setpoint Down.
 * @param vx [cm/s] Velocity North or forward velocity in heading reference system.
 * @param vy [cm/s] Velocity East or lateral velocity in heading reference system.
 * @param vz [cm/s] Velocity Down 
 * @param ax [cm/s/s] Acceleration North or longitudinal in heading reference system.
 * @param ay [cm/s/s] Acceleration East or longitudinal in heading reference system.
 * @param az [cm/s/s] Acceleration Down.
 * @param psi [mrad] Commanded yaw angle (euler)
 * @param dpsi [mrad/s] Commanded yaw angle (euler) rate
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_outer_loop_setpoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint16_t mode,int32_t px,int32_t py,int32_t pz,int16_t vx,int16_t vy,int16_t vz,int16_t ax,int16_t ay,int16_t az,int16_t psi,int16_t dpsi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_uint16_t(buf, 20, mode);
    _mav_put_int16_t(buf, 22, vx);
    _mav_put_int16_t(buf, 24, vy);
    _mav_put_int16_t(buf, 26, vz);
    _mav_put_int16_t(buf, 28, ax);
    _mav_put_int16_t(buf, 30, ay);
    _mav_put_int16_t(buf, 32, az);
    _mav_put_int16_t(buf, 34, psi);
    _mav_put_int16_t(buf, 36, dpsi);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN);
#else
    mavlink_outer_loop_setpoint_t packet;
    packet.time_usec = time_usec;
    packet.px = px;
    packet.py = py;
    packet.pz = pz;
    packet.mode = mode;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.psi = psi;
    packet.dpsi = dpsi;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC);
}

/**
 * @brief Encode a outer_loop_setpoint struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param outer_loop_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_outer_loop_setpoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_outer_loop_setpoint_t* outer_loop_setpoint)
{
    return mavlink_msg_outer_loop_setpoint_pack(system_id, component_id, msg, outer_loop_setpoint->time_usec, outer_loop_setpoint->mode, outer_loop_setpoint->px, outer_loop_setpoint->py, outer_loop_setpoint->pz, outer_loop_setpoint->vx, outer_loop_setpoint->vy, outer_loop_setpoint->vz, outer_loop_setpoint->ax, outer_loop_setpoint->ay, outer_loop_setpoint->az, outer_loop_setpoint->psi, outer_loop_setpoint->dpsi);
}

/**
 * @brief Encode a outer_loop_setpoint struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param outer_loop_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_outer_loop_setpoint_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_outer_loop_setpoint_t* outer_loop_setpoint)
{
    return mavlink_msg_outer_loop_setpoint_pack_chan(system_id, component_id, chan, msg, outer_loop_setpoint->time_usec, outer_loop_setpoint->mode, outer_loop_setpoint->px, outer_loop_setpoint->py, outer_loop_setpoint->pz, outer_loop_setpoint->vx, outer_loop_setpoint->vy, outer_loop_setpoint->vz, outer_loop_setpoint->ax, outer_loop_setpoint->ay, outer_loop_setpoint->az, outer_loop_setpoint->psi, outer_loop_setpoint->dpsi);
}

/**
 * @brief Encode a outer_loop_setpoint struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param outer_loop_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_outer_loop_setpoint_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_outer_loop_setpoint_t* outer_loop_setpoint)
{
    return mavlink_msg_outer_loop_setpoint_pack_status(system_id, component_id, _status, msg,  outer_loop_setpoint->time_usec, outer_loop_setpoint->mode, outer_loop_setpoint->px, outer_loop_setpoint->py, outer_loop_setpoint->pz, outer_loop_setpoint->vx, outer_loop_setpoint->vy, outer_loop_setpoint->vz, outer_loop_setpoint->ax, outer_loop_setpoint->ay, outer_loop_setpoint->az, outer_loop_setpoint->psi, outer_loop_setpoint->dpsi);
}

/**
 * @brief Send a outer_loop_setpoint message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param mode  OL controller mode bitfield.
 * @param px [mm] Position setpoint North or longitudinal in heading reference system.
 * @param py [mm] Position setpoint East or lateral in heading reference system.
 * @param pz [mm] Position setpoint Down.
 * @param vx [cm/s] Velocity North or forward velocity in heading reference system.
 * @param vy [cm/s] Velocity East or lateral velocity in heading reference system.
 * @param vz [cm/s] Velocity Down 
 * @param ax [cm/s/s] Acceleration North or longitudinal in heading reference system.
 * @param ay [cm/s/s] Acceleration East or longitudinal in heading reference system.
 * @param az [cm/s/s] Acceleration Down.
 * @param psi [mrad] Commanded yaw angle (euler)
 * @param dpsi [mrad/s] Commanded yaw angle (euler) rate
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_outer_loop_setpoint_send(mavlink_channel_t chan, uint64_t time_usec, uint16_t mode, int32_t px, int32_t py, int32_t pz, int16_t vx, int16_t vy, int16_t vz, int16_t ax, int16_t ay, int16_t az, int16_t psi, int16_t dpsi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_uint16_t(buf, 20, mode);
    _mav_put_int16_t(buf, 22, vx);
    _mav_put_int16_t(buf, 24, vy);
    _mav_put_int16_t(buf, 26, vz);
    _mav_put_int16_t(buf, 28, ax);
    _mav_put_int16_t(buf, 30, ay);
    _mav_put_int16_t(buf, 32, az);
    _mav_put_int16_t(buf, 34, psi);
    _mav_put_int16_t(buf, 36, dpsi);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT, buf, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC);
#else
    mavlink_outer_loop_setpoint_t packet;
    packet.time_usec = time_usec;
    packet.px = px;
    packet.py = py;
    packet.pz = pz;
    packet.mode = mode;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.psi = psi;
    packet.dpsi = dpsi;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT, (const char *)&packet, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC);
#endif
}

/**
 * @brief Send a outer_loop_setpoint message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_outer_loop_setpoint_send_struct(mavlink_channel_t chan, const mavlink_outer_loop_setpoint_t* outer_loop_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_outer_loop_setpoint_send(chan, outer_loop_setpoint->time_usec, outer_loop_setpoint->mode, outer_loop_setpoint->px, outer_loop_setpoint->py, outer_loop_setpoint->pz, outer_loop_setpoint->vx, outer_loop_setpoint->vy, outer_loop_setpoint->vz, outer_loop_setpoint->ax, outer_loop_setpoint->ay, outer_loop_setpoint->az, outer_loop_setpoint->psi, outer_loop_setpoint->dpsi);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT, (const char *)outer_loop_setpoint, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_outer_loop_setpoint_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint16_t mode, int32_t px, int32_t py, int32_t pz, int16_t vx, int16_t vy, int16_t vz, int16_t ax, int16_t ay, int16_t az, int16_t psi, int16_t dpsi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_uint16_t(buf, 20, mode);
    _mav_put_int16_t(buf, 22, vx);
    _mav_put_int16_t(buf, 24, vy);
    _mav_put_int16_t(buf, 26, vz);
    _mav_put_int16_t(buf, 28, ax);
    _mav_put_int16_t(buf, 30, ay);
    _mav_put_int16_t(buf, 32, az);
    _mav_put_int16_t(buf, 34, psi);
    _mav_put_int16_t(buf, 36, dpsi);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT, buf, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC);
#else
    mavlink_outer_loop_setpoint_t *packet = (mavlink_outer_loop_setpoint_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->px = px;
    packet->py = py;
    packet->pz = pz;
    packet->mode = mode;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->ax = ax;
    packet->ay = ay;
    packet->az = az;
    packet->psi = psi;
    packet->dpsi = dpsi;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT, (const char *)packet, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_CRC);
#endif
}
#endif

#endif

// MESSAGE OUTER_LOOP_SETPOINT UNPACKING


/**
 * @brief Get field time_usec from outer_loop_setpoint message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_outer_loop_setpoint_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field mode from outer_loop_setpoint message
 *
 * @return  OL controller mode bitfield.
 */
static inline uint16_t mavlink_msg_outer_loop_setpoint_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field px from outer_loop_setpoint message
 *
 * @return [mm] Position setpoint North or longitudinal in heading reference system.
 */
static inline int32_t mavlink_msg_outer_loop_setpoint_get_px(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field py from outer_loop_setpoint message
 *
 * @return [mm] Position setpoint East or lateral in heading reference system.
 */
static inline int32_t mavlink_msg_outer_loop_setpoint_get_py(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field pz from outer_loop_setpoint message
 *
 * @return [mm] Position setpoint Down.
 */
static inline int32_t mavlink_msg_outer_loop_setpoint_get_pz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field vx from outer_loop_setpoint message
 *
 * @return [cm/s] Velocity North or forward velocity in heading reference system.
 */
static inline int16_t mavlink_msg_outer_loop_setpoint_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field vy from outer_loop_setpoint message
 *
 * @return [cm/s] Velocity East or lateral velocity in heading reference system.
 */
static inline int16_t mavlink_msg_outer_loop_setpoint_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field vz from outer_loop_setpoint message
 *
 * @return [cm/s] Velocity Down 
 */
static inline int16_t mavlink_msg_outer_loop_setpoint_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field ax from outer_loop_setpoint message
 *
 * @return [cm/s/s] Acceleration North or longitudinal in heading reference system.
 */
static inline int16_t mavlink_msg_outer_loop_setpoint_get_ax(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field ay from outer_loop_setpoint message
 *
 * @return [cm/s/s] Acceleration East or longitudinal in heading reference system.
 */
static inline int16_t mavlink_msg_outer_loop_setpoint_get_ay(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field az from outer_loop_setpoint message
 *
 * @return [cm/s/s] Acceleration Down.
 */
static inline int16_t mavlink_msg_outer_loop_setpoint_get_az(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field psi from outer_loop_setpoint message
 *
 * @return [mrad] Commanded yaw angle (euler)
 */
static inline int16_t mavlink_msg_outer_loop_setpoint_get_psi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field dpsi from outer_loop_setpoint message
 *
 * @return [mrad/s] Commanded yaw angle (euler) rate
 */
static inline int16_t mavlink_msg_outer_loop_setpoint_get_dpsi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Decode a outer_loop_setpoint message into a struct
 *
 * @param msg The message to decode
 * @param outer_loop_setpoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_outer_loop_setpoint_decode(const mavlink_message_t* msg, mavlink_outer_loop_setpoint_t* outer_loop_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    outer_loop_setpoint->time_usec = mavlink_msg_outer_loop_setpoint_get_time_usec(msg);
    outer_loop_setpoint->px = mavlink_msg_outer_loop_setpoint_get_px(msg);
    outer_loop_setpoint->py = mavlink_msg_outer_loop_setpoint_get_py(msg);
    outer_loop_setpoint->pz = mavlink_msg_outer_loop_setpoint_get_pz(msg);
    outer_loop_setpoint->mode = mavlink_msg_outer_loop_setpoint_get_mode(msg);
    outer_loop_setpoint->vx = mavlink_msg_outer_loop_setpoint_get_vx(msg);
    outer_loop_setpoint->vy = mavlink_msg_outer_loop_setpoint_get_vy(msg);
    outer_loop_setpoint->vz = mavlink_msg_outer_loop_setpoint_get_vz(msg);
    outer_loop_setpoint->ax = mavlink_msg_outer_loop_setpoint_get_ax(msg);
    outer_loop_setpoint->ay = mavlink_msg_outer_loop_setpoint_get_ay(msg);
    outer_loop_setpoint->az = mavlink_msg_outer_loop_setpoint_get_az(msg);
    outer_loop_setpoint->psi = mavlink_msg_outer_loop_setpoint_get_psi(msg);
    outer_loop_setpoint->dpsi = mavlink_msg_outer_loop_setpoint_get_dpsi(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN? msg->len : MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN;
        memset(outer_loop_setpoint, 0, MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_LEN);
    memcpy(outer_loop_setpoint, _MAV_PAYLOAD(msg), len);
#endif
}
