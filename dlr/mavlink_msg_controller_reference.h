#pragma once
// MESSAGE CONTROLLER_REFERENCE PACKING

#define MAVLINK_MSG_ID_CONTROLLER_REFERENCE 543


typedef struct __mavlink_controller_reference_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 int32_t px; /*< [cm] Reference Position setpoint North.*/
 int32_t py; /*< [cm] Reference Position setpoint East.*/
 int32_t pz; /*< [cm] Reference Position setpoint Down.*/
 float theta; /*< [deg] Commanded pitch.*/
 float phi; /*< [deg] Commanded roll.*/
 float r; /*< [deg] Commanded body-fixed yaw rate.*/
 int16_t vx; /*< [cm/s] Reference Velocity North.*/
 int16_t vy; /*< [cm/s] Reference Velocity East.*/
 int16_t vz; /*< [cm/s] Reference Velocity Down.*/
 int16_t ax; /*< [cm/s/s] Reference acceleration North.*/
 int16_t ay; /*< [cm/s/s] Reference acceleration East.*/
 int16_t az; /*< [cm/s/s] Reference acceleration Down.*/
 int16_t psi; /*< [deg] Reference yaw.*/
 int16_t dpsi; /*< [deg] Reference yaw derivative.*/
 int16_t w; /*< [cm/s] Commanded body-fixed vertical velocity.*/
 int16_t d_x; /*< [cm/s/s] Disturbance estimate (body-fixed x-axis).*/
 int16_t d_y; /*< [cm/s/s] Disturbance estimate (body-fixed y-axis).*/
 int16_t d_z; /*< [cm/s/s] Disturbance estimate (body-fixed z-axis).*/
} mavlink_controller_reference_t;

#define MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN 56
#define MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN 56
#define MAVLINK_MSG_ID_543_LEN 56
#define MAVLINK_MSG_ID_543_MIN_LEN 56

#define MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC 240
#define MAVLINK_MSG_ID_543_CRC 240



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CONTROLLER_REFERENCE { \
    543, \
    "CONTROLLER_REFERENCE", \
    19, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_controller_reference_t, time_usec) }, \
         { "px", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_controller_reference_t, px) }, \
         { "py", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_controller_reference_t, py) }, \
         { "pz", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_controller_reference_t, pz) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_controller_reference_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_controller_reference_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_controller_reference_t, vz) }, \
         { "ax", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_controller_reference_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_controller_reference_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_controller_reference_t, az) }, \
         { "psi", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_controller_reference_t, psi) }, \
         { "dpsi", NULL, MAVLINK_TYPE_INT16_T, 0, 46, offsetof(mavlink_controller_reference_t, dpsi) }, \
         { "theta", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_controller_reference_t, theta) }, \
         { "phi", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_controller_reference_t, phi) }, \
         { "r", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_controller_reference_t, r) }, \
         { "w", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_controller_reference_t, w) }, \
         { "d_x", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_controller_reference_t, d_x) }, \
         { "d_y", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_controller_reference_t, d_y) }, \
         { "d_z", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_controller_reference_t, d_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CONTROLLER_REFERENCE { \
    "CONTROLLER_REFERENCE", \
    19, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_controller_reference_t, time_usec) }, \
         { "px", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_controller_reference_t, px) }, \
         { "py", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_controller_reference_t, py) }, \
         { "pz", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_controller_reference_t, pz) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_controller_reference_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_controller_reference_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_controller_reference_t, vz) }, \
         { "ax", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_controller_reference_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_controller_reference_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_controller_reference_t, az) }, \
         { "psi", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_controller_reference_t, psi) }, \
         { "dpsi", NULL, MAVLINK_TYPE_INT16_T, 0, 46, offsetof(mavlink_controller_reference_t, dpsi) }, \
         { "theta", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_controller_reference_t, theta) }, \
         { "phi", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_controller_reference_t, phi) }, \
         { "r", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_controller_reference_t, r) }, \
         { "w", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_controller_reference_t, w) }, \
         { "d_x", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_controller_reference_t, d_x) }, \
         { "d_y", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_controller_reference_t, d_y) }, \
         { "d_z", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_controller_reference_t, d_z) }, \
         } \
}
#endif

/**
 * @brief Pack a controller_reference message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param px [cm] Reference Position setpoint North.
 * @param py [cm] Reference Position setpoint East.
 * @param pz [cm] Reference Position setpoint Down.
 * @param vx [cm/s] Reference Velocity North.
 * @param vy [cm/s] Reference Velocity East.
 * @param vz [cm/s] Reference Velocity Down.
 * @param ax [cm/s/s] Reference acceleration North.
 * @param ay [cm/s/s] Reference acceleration East.
 * @param az [cm/s/s] Reference acceleration Down.
 * @param psi [deg] Reference yaw.
 * @param dpsi [deg] Reference yaw derivative.
 * @param theta [deg] Commanded pitch.
 * @param phi [deg] Commanded roll.
 * @param r [deg] Commanded body-fixed yaw rate.
 * @param w [cm/s] Commanded body-fixed vertical velocity.
 * @param d_x [cm/s/s] Disturbance estimate (body-fixed x-axis).
 * @param d_y [cm/s/s] Disturbance estimate (body-fixed y-axis).
 * @param d_z [cm/s/s] Disturbance estimate (body-fixed z-axis).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controller_reference_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, int32_t px, int32_t py, int32_t pz, int16_t vx, int16_t vy, int16_t vz, int16_t ax, int16_t ay, int16_t az, int16_t psi, int16_t dpsi, float theta, float phi, float r, int16_t w, int16_t d_x, int16_t d_y, int16_t d_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_float(buf, 20, theta);
    _mav_put_float(buf, 24, phi);
    _mav_put_float(buf, 28, r);
    _mav_put_int16_t(buf, 32, vx);
    _mav_put_int16_t(buf, 34, vy);
    _mav_put_int16_t(buf, 36, vz);
    _mav_put_int16_t(buf, 38, ax);
    _mav_put_int16_t(buf, 40, ay);
    _mav_put_int16_t(buf, 42, az);
    _mav_put_int16_t(buf, 44, psi);
    _mav_put_int16_t(buf, 46, dpsi);
    _mav_put_int16_t(buf, 48, w);
    _mav_put_int16_t(buf, 50, d_x);
    _mav_put_int16_t(buf, 52, d_y);
    _mav_put_int16_t(buf, 54, d_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN);
#else
    mavlink_controller_reference_t packet;
    packet.time_usec = time_usec;
    packet.px = px;
    packet.py = py;
    packet.pz = pz;
    packet.theta = theta;
    packet.phi = phi;
    packet.r = r;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.psi = psi;
    packet.dpsi = dpsi;
    packet.w = w;
    packet.d_x = d_x;
    packet.d_y = d_y;
    packet.d_z = d_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONTROLLER_REFERENCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC);
}

/**
 * @brief Pack a controller_reference message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param px [cm] Reference Position setpoint North.
 * @param py [cm] Reference Position setpoint East.
 * @param pz [cm] Reference Position setpoint Down.
 * @param vx [cm/s] Reference Velocity North.
 * @param vy [cm/s] Reference Velocity East.
 * @param vz [cm/s] Reference Velocity Down.
 * @param ax [cm/s/s] Reference acceleration North.
 * @param ay [cm/s/s] Reference acceleration East.
 * @param az [cm/s/s] Reference acceleration Down.
 * @param psi [deg] Reference yaw.
 * @param dpsi [deg] Reference yaw derivative.
 * @param theta [deg] Commanded pitch.
 * @param phi [deg] Commanded roll.
 * @param r [deg] Commanded body-fixed yaw rate.
 * @param w [cm/s] Commanded body-fixed vertical velocity.
 * @param d_x [cm/s/s] Disturbance estimate (body-fixed x-axis).
 * @param d_y [cm/s/s] Disturbance estimate (body-fixed y-axis).
 * @param d_z [cm/s/s] Disturbance estimate (body-fixed z-axis).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controller_reference_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, int32_t px, int32_t py, int32_t pz, int16_t vx, int16_t vy, int16_t vz, int16_t ax, int16_t ay, int16_t az, int16_t psi, int16_t dpsi, float theta, float phi, float r, int16_t w, int16_t d_x, int16_t d_y, int16_t d_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_float(buf, 20, theta);
    _mav_put_float(buf, 24, phi);
    _mav_put_float(buf, 28, r);
    _mav_put_int16_t(buf, 32, vx);
    _mav_put_int16_t(buf, 34, vy);
    _mav_put_int16_t(buf, 36, vz);
    _mav_put_int16_t(buf, 38, ax);
    _mav_put_int16_t(buf, 40, ay);
    _mav_put_int16_t(buf, 42, az);
    _mav_put_int16_t(buf, 44, psi);
    _mav_put_int16_t(buf, 46, dpsi);
    _mav_put_int16_t(buf, 48, w);
    _mav_put_int16_t(buf, 50, d_x);
    _mav_put_int16_t(buf, 52, d_y);
    _mav_put_int16_t(buf, 54, d_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN);
#else
    mavlink_controller_reference_t packet;
    packet.time_usec = time_usec;
    packet.px = px;
    packet.py = py;
    packet.pz = pz;
    packet.theta = theta;
    packet.phi = phi;
    packet.r = r;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.psi = psi;
    packet.dpsi = dpsi;
    packet.w = w;
    packet.d_x = d_x;
    packet.d_y = d_y;
    packet.d_z = d_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONTROLLER_REFERENCE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN);
#endif
}

/**
 * @brief Pack a controller_reference message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param px [cm] Reference Position setpoint North.
 * @param py [cm] Reference Position setpoint East.
 * @param pz [cm] Reference Position setpoint Down.
 * @param vx [cm/s] Reference Velocity North.
 * @param vy [cm/s] Reference Velocity East.
 * @param vz [cm/s] Reference Velocity Down.
 * @param ax [cm/s/s] Reference acceleration North.
 * @param ay [cm/s/s] Reference acceleration East.
 * @param az [cm/s/s] Reference acceleration Down.
 * @param psi [deg] Reference yaw.
 * @param dpsi [deg] Reference yaw derivative.
 * @param theta [deg] Commanded pitch.
 * @param phi [deg] Commanded roll.
 * @param r [deg] Commanded body-fixed yaw rate.
 * @param w [cm/s] Commanded body-fixed vertical velocity.
 * @param d_x [cm/s/s] Disturbance estimate (body-fixed x-axis).
 * @param d_y [cm/s/s] Disturbance estimate (body-fixed y-axis).
 * @param d_z [cm/s/s] Disturbance estimate (body-fixed z-axis).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controller_reference_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,int32_t px,int32_t py,int32_t pz,int16_t vx,int16_t vy,int16_t vz,int16_t ax,int16_t ay,int16_t az,int16_t psi,int16_t dpsi,float theta,float phi,float r,int16_t w,int16_t d_x,int16_t d_y,int16_t d_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_float(buf, 20, theta);
    _mav_put_float(buf, 24, phi);
    _mav_put_float(buf, 28, r);
    _mav_put_int16_t(buf, 32, vx);
    _mav_put_int16_t(buf, 34, vy);
    _mav_put_int16_t(buf, 36, vz);
    _mav_put_int16_t(buf, 38, ax);
    _mav_put_int16_t(buf, 40, ay);
    _mav_put_int16_t(buf, 42, az);
    _mav_put_int16_t(buf, 44, psi);
    _mav_put_int16_t(buf, 46, dpsi);
    _mav_put_int16_t(buf, 48, w);
    _mav_put_int16_t(buf, 50, d_x);
    _mav_put_int16_t(buf, 52, d_y);
    _mav_put_int16_t(buf, 54, d_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN);
#else
    mavlink_controller_reference_t packet;
    packet.time_usec = time_usec;
    packet.px = px;
    packet.py = py;
    packet.pz = pz;
    packet.theta = theta;
    packet.phi = phi;
    packet.r = r;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.psi = psi;
    packet.dpsi = dpsi;
    packet.w = w;
    packet.d_x = d_x;
    packet.d_y = d_y;
    packet.d_z = d_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONTROLLER_REFERENCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC);
}

/**
 * @brief Encode a controller_reference struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param controller_reference C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controller_reference_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_controller_reference_t* controller_reference)
{
    return mavlink_msg_controller_reference_pack(system_id, component_id, msg, controller_reference->time_usec, controller_reference->px, controller_reference->py, controller_reference->pz, controller_reference->vx, controller_reference->vy, controller_reference->vz, controller_reference->ax, controller_reference->ay, controller_reference->az, controller_reference->psi, controller_reference->dpsi, controller_reference->theta, controller_reference->phi, controller_reference->r, controller_reference->w, controller_reference->d_x, controller_reference->d_y, controller_reference->d_z);
}

/**
 * @brief Encode a controller_reference struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param controller_reference C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controller_reference_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_controller_reference_t* controller_reference)
{
    return mavlink_msg_controller_reference_pack_chan(system_id, component_id, chan, msg, controller_reference->time_usec, controller_reference->px, controller_reference->py, controller_reference->pz, controller_reference->vx, controller_reference->vy, controller_reference->vz, controller_reference->ax, controller_reference->ay, controller_reference->az, controller_reference->psi, controller_reference->dpsi, controller_reference->theta, controller_reference->phi, controller_reference->r, controller_reference->w, controller_reference->d_x, controller_reference->d_y, controller_reference->d_z);
}

/**
 * @brief Encode a controller_reference struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param controller_reference C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controller_reference_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_controller_reference_t* controller_reference)
{
    return mavlink_msg_controller_reference_pack_status(system_id, component_id, _status, msg,  controller_reference->time_usec, controller_reference->px, controller_reference->py, controller_reference->pz, controller_reference->vx, controller_reference->vy, controller_reference->vz, controller_reference->ax, controller_reference->ay, controller_reference->az, controller_reference->psi, controller_reference->dpsi, controller_reference->theta, controller_reference->phi, controller_reference->r, controller_reference->w, controller_reference->d_x, controller_reference->d_y, controller_reference->d_z);
}

/**
 * @brief Send a controller_reference message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param px [cm] Reference Position setpoint North.
 * @param py [cm] Reference Position setpoint East.
 * @param pz [cm] Reference Position setpoint Down.
 * @param vx [cm/s] Reference Velocity North.
 * @param vy [cm/s] Reference Velocity East.
 * @param vz [cm/s] Reference Velocity Down.
 * @param ax [cm/s/s] Reference acceleration North.
 * @param ay [cm/s/s] Reference acceleration East.
 * @param az [cm/s/s] Reference acceleration Down.
 * @param psi [deg] Reference yaw.
 * @param dpsi [deg] Reference yaw derivative.
 * @param theta [deg] Commanded pitch.
 * @param phi [deg] Commanded roll.
 * @param r [deg] Commanded body-fixed yaw rate.
 * @param w [cm/s] Commanded body-fixed vertical velocity.
 * @param d_x [cm/s/s] Disturbance estimate (body-fixed x-axis).
 * @param d_y [cm/s/s] Disturbance estimate (body-fixed y-axis).
 * @param d_z [cm/s/s] Disturbance estimate (body-fixed z-axis).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_controller_reference_send(mavlink_channel_t chan, uint64_t time_usec, int32_t px, int32_t py, int32_t pz, int16_t vx, int16_t vy, int16_t vz, int16_t ax, int16_t ay, int16_t az, int16_t psi, int16_t dpsi, float theta, float phi, float r, int16_t w, int16_t d_x, int16_t d_y, int16_t d_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_float(buf, 20, theta);
    _mav_put_float(buf, 24, phi);
    _mav_put_float(buf, 28, r);
    _mav_put_int16_t(buf, 32, vx);
    _mav_put_int16_t(buf, 34, vy);
    _mav_put_int16_t(buf, 36, vz);
    _mav_put_int16_t(buf, 38, ax);
    _mav_put_int16_t(buf, 40, ay);
    _mav_put_int16_t(buf, 42, az);
    _mav_put_int16_t(buf, 44, psi);
    _mav_put_int16_t(buf, 46, dpsi);
    _mav_put_int16_t(buf, 48, w);
    _mav_put_int16_t(buf, 50, d_x);
    _mav_put_int16_t(buf, 52, d_y);
    _mav_put_int16_t(buf, 54, d_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_REFERENCE, buf, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC);
#else
    mavlink_controller_reference_t packet;
    packet.time_usec = time_usec;
    packet.px = px;
    packet.py = py;
    packet.pz = pz;
    packet.theta = theta;
    packet.phi = phi;
    packet.r = r;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.psi = psi;
    packet.dpsi = dpsi;
    packet.w = w;
    packet.d_x = d_x;
    packet.d_y = d_y;
    packet.d_z = d_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_REFERENCE, (const char *)&packet, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC);
#endif
}

/**
 * @brief Send a controller_reference message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_controller_reference_send_struct(mavlink_channel_t chan, const mavlink_controller_reference_t* controller_reference)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_controller_reference_send(chan, controller_reference->time_usec, controller_reference->px, controller_reference->py, controller_reference->pz, controller_reference->vx, controller_reference->vy, controller_reference->vz, controller_reference->ax, controller_reference->ay, controller_reference->az, controller_reference->psi, controller_reference->dpsi, controller_reference->theta, controller_reference->phi, controller_reference->r, controller_reference->w, controller_reference->d_x, controller_reference->d_y, controller_reference->d_z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_REFERENCE, (const char *)controller_reference, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_controller_reference_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int32_t px, int32_t py, int32_t pz, int16_t vx, int16_t vy, int16_t vz, int16_t ax, int16_t ay, int16_t az, int16_t psi, int16_t dpsi, float theta, float phi, float r, int16_t w, int16_t d_x, int16_t d_y, int16_t d_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, px);
    _mav_put_int32_t(buf, 12, py);
    _mav_put_int32_t(buf, 16, pz);
    _mav_put_float(buf, 20, theta);
    _mav_put_float(buf, 24, phi);
    _mav_put_float(buf, 28, r);
    _mav_put_int16_t(buf, 32, vx);
    _mav_put_int16_t(buf, 34, vy);
    _mav_put_int16_t(buf, 36, vz);
    _mav_put_int16_t(buf, 38, ax);
    _mav_put_int16_t(buf, 40, ay);
    _mav_put_int16_t(buf, 42, az);
    _mav_put_int16_t(buf, 44, psi);
    _mav_put_int16_t(buf, 46, dpsi);
    _mav_put_int16_t(buf, 48, w);
    _mav_put_int16_t(buf, 50, d_x);
    _mav_put_int16_t(buf, 52, d_y);
    _mav_put_int16_t(buf, 54, d_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_REFERENCE, buf, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC);
#else
    mavlink_controller_reference_t *packet = (mavlink_controller_reference_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->px = px;
    packet->py = py;
    packet->pz = pz;
    packet->theta = theta;
    packet->phi = phi;
    packet->r = r;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->ax = ax;
    packet->ay = ay;
    packet->az = az;
    packet->psi = psi;
    packet->dpsi = dpsi;
    packet->w = w;
    packet->d_x = d_x;
    packet->d_y = d_y;
    packet->d_z = d_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_REFERENCE, (const char *)packet, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_CRC);
#endif
}
#endif

#endif

// MESSAGE CONTROLLER_REFERENCE UNPACKING


/**
 * @brief Get field time_usec from controller_reference message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_controller_reference_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field px from controller_reference message
 *
 * @return [cm] Reference Position setpoint North.
 */
static inline int32_t mavlink_msg_controller_reference_get_px(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field py from controller_reference message
 *
 * @return [cm] Reference Position setpoint East.
 */
static inline int32_t mavlink_msg_controller_reference_get_py(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field pz from controller_reference message
 *
 * @return [cm] Reference Position setpoint Down.
 */
static inline int32_t mavlink_msg_controller_reference_get_pz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field vx from controller_reference message
 *
 * @return [cm/s] Reference Velocity North.
 */
static inline int16_t mavlink_msg_controller_reference_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field vy from controller_reference message
 *
 * @return [cm/s] Reference Velocity East.
 */
static inline int16_t mavlink_msg_controller_reference_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field vz from controller_reference message
 *
 * @return [cm/s] Reference Velocity Down.
 */
static inline int16_t mavlink_msg_controller_reference_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field ax from controller_reference message
 *
 * @return [cm/s/s] Reference acceleration North.
 */
static inline int16_t mavlink_msg_controller_reference_get_ax(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field ay from controller_reference message
 *
 * @return [cm/s/s] Reference acceleration East.
 */
static inline int16_t mavlink_msg_controller_reference_get_ay(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field az from controller_reference message
 *
 * @return [cm/s/s] Reference acceleration Down.
 */
static inline int16_t mavlink_msg_controller_reference_get_az(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  42);
}

/**
 * @brief Get field psi from controller_reference message
 *
 * @return [deg] Reference yaw.
 */
static inline int16_t mavlink_msg_controller_reference_get_psi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  44);
}

/**
 * @brief Get field dpsi from controller_reference message
 *
 * @return [deg] Reference yaw derivative.
 */
static inline int16_t mavlink_msg_controller_reference_get_dpsi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  46);
}

/**
 * @brief Get field theta from controller_reference message
 *
 * @return [deg] Commanded pitch.
 */
static inline float mavlink_msg_controller_reference_get_theta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field phi from controller_reference message
 *
 * @return [deg] Commanded roll.
 */
static inline float mavlink_msg_controller_reference_get_phi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field r from controller_reference message
 *
 * @return [deg] Commanded body-fixed yaw rate.
 */
static inline float mavlink_msg_controller_reference_get_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field w from controller_reference message
 *
 * @return [cm/s] Commanded body-fixed vertical velocity.
 */
static inline int16_t mavlink_msg_controller_reference_get_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  48);
}

/**
 * @brief Get field d_x from controller_reference message
 *
 * @return [cm/s/s] Disturbance estimate (body-fixed x-axis).
 */
static inline int16_t mavlink_msg_controller_reference_get_d_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  50);
}

/**
 * @brief Get field d_y from controller_reference message
 *
 * @return [cm/s/s] Disturbance estimate (body-fixed y-axis).
 */
static inline int16_t mavlink_msg_controller_reference_get_d_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  52);
}

/**
 * @brief Get field d_z from controller_reference message
 *
 * @return [cm/s/s] Disturbance estimate (body-fixed z-axis).
 */
static inline int16_t mavlink_msg_controller_reference_get_d_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  54);
}

/**
 * @brief Decode a controller_reference message into a struct
 *
 * @param msg The message to decode
 * @param controller_reference C-struct to decode the message contents into
 */
static inline void mavlink_msg_controller_reference_decode(const mavlink_message_t* msg, mavlink_controller_reference_t* controller_reference)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    controller_reference->time_usec = mavlink_msg_controller_reference_get_time_usec(msg);
    controller_reference->px = mavlink_msg_controller_reference_get_px(msg);
    controller_reference->py = mavlink_msg_controller_reference_get_py(msg);
    controller_reference->pz = mavlink_msg_controller_reference_get_pz(msg);
    controller_reference->theta = mavlink_msg_controller_reference_get_theta(msg);
    controller_reference->phi = mavlink_msg_controller_reference_get_phi(msg);
    controller_reference->r = mavlink_msg_controller_reference_get_r(msg);
    controller_reference->vx = mavlink_msg_controller_reference_get_vx(msg);
    controller_reference->vy = mavlink_msg_controller_reference_get_vy(msg);
    controller_reference->vz = mavlink_msg_controller_reference_get_vz(msg);
    controller_reference->ax = mavlink_msg_controller_reference_get_ax(msg);
    controller_reference->ay = mavlink_msg_controller_reference_get_ay(msg);
    controller_reference->az = mavlink_msg_controller_reference_get_az(msg);
    controller_reference->psi = mavlink_msg_controller_reference_get_psi(msg);
    controller_reference->dpsi = mavlink_msg_controller_reference_get_dpsi(msg);
    controller_reference->w = mavlink_msg_controller_reference_get_w(msg);
    controller_reference->d_x = mavlink_msg_controller_reference_get_d_x(msg);
    controller_reference->d_y = mavlink_msg_controller_reference_get_d_y(msg);
    controller_reference->d_z = mavlink_msg_controller_reference_get_d_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN? msg->len : MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN;
        memset(controller_reference, 0, MAVLINK_MSG_ID_CONTROLLER_REFERENCE_LEN);
    memcpy(controller_reference, _MAV_PAYLOAD(msg), len);
#endif
}
