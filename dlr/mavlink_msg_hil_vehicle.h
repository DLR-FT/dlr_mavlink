#pragma once
// MESSAGE HIL_VEHICLE PACKING

#define MAVLINK_MSG_ID_HIL_VEHICLE 541


typedef struct __mavlink_hil_vehicle_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 int32_t lat; /*< [degE7] Latitude (WGS84)*/
 int32_t lon; /*< [degE7] Longitude (WGS84)*/
 int32_t alt; /*< [mm] Altitude (MSL). Positive for up.*/
 int32_t pos_n; /*< [cm] North position in NED earth-fixed frame.*/
 int32_t pos_e; /*< [cm] East position in NED earth-fixed frame.*/
 int32_t pos_d; /*< [cm] Down position in NED earth-fixed frame.*/
 float roll; /*< [deg] roll*/
 float pitch; /*< [deg] pitch*/
 float heading; /*< [deg] heading*/
 float rollspeed; /*< [deg/s] Body frame roll / phi angular speed*/
 float pitchspeed; /*< [deg/s] Body frame pitch / theta angular speed*/
 float yawspeed; /*< [deg/s] Body frame yaw / psi angular speed*/
 int16_t vel_n; /*< [cm/s] North velocity in NED earth-fixed frame.*/
 int16_t vel_e; /*< [cm/s] East velocity in NED earth-fixed frame.*/
 int16_t vel_d; /*< [cm/s] Down velocity in NED earth-fixed frame.*/
 int16_t vel_xb; /*< [cm/s] Velocity in x-direction in body-fixed frame.*/
 int16_t vel_yb; /*< [cm/s] Velocity in y-direction in body-fixed frame.*/
 int16_t vel_zb; /*< [cm/s] Velocity in z-direction in body-fixed frame.*/
 int16_t xacc; /*< [mG] X acceleration in body frame*/
 int16_t yacc; /*< [mG] Y acceleration in body frame*/
 int16_t zacc; /*< [mG] Z acceleration in body frame*/
 uint8_t valid; /*<  True if data is valid*/
} mavlink_hil_vehicle_t;

#define MAVLINK_MSG_ID_HIL_VEHICLE_LEN 75
#define MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN 75
#define MAVLINK_MSG_ID_541_LEN 75
#define MAVLINK_MSG_ID_541_MIN_LEN 75

#define MAVLINK_MSG_ID_HIL_VEHICLE_CRC 59
#define MAVLINK_MSG_ID_541_CRC 59



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HIL_VEHICLE { \
    541, \
    "HIL_VEHICLE", \
    23, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_vehicle_t, time_usec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hil_vehicle_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_hil_vehicle_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_hil_vehicle_t, alt) }, \
         { "pos_n", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_hil_vehicle_t, pos_n) }, \
         { "pos_e", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_hil_vehicle_t, pos_e) }, \
         { "pos_d", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_hil_vehicle_t, pos_d) }, \
         { "vel_n", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_hil_vehicle_t, vel_n) }, \
         { "vel_e", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_hil_vehicle_t, vel_e) }, \
         { "vel_d", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_hil_vehicle_t, vel_d) }, \
         { "vel_xb", NULL, MAVLINK_TYPE_INT16_T, 0, 62, offsetof(mavlink_hil_vehicle_t, vel_xb) }, \
         { "vel_yb", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_hil_vehicle_t, vel_yb) }, \
         { "vel_zb", NULL, MAVLINK_TYPE_INT16_T, 0, 66, offsetof(mavlink_hil_vehicle_t, vel_zb) }, \
         { "xacc", NULL, MAVLINK_TYPE_INT16_T, 0, 68, offsetof(mavlink_hil_vehicle_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_INT16_T, 0, 70, offsetof(mavlink_hil_vehicle_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_INT16_T, 0, 72, offsetof(mavlink_hil_vehicle_t, zacc) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hil_vehicle_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hil_vehicle_t, pitch) }, \
         { "heading", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hil_vehicle_t, heading) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hil_vehicle_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_hil_vehicle_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_hil_vehicle_t, yawspeed) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_hil_vehicle_t, valid) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HIL_VEHICLE { \
    "HIL_VEHICLE", \
    23, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_vehicle_t, time_usec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hil_vehicle_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_hil_vehicle_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_hil_vehicle_t, alt) }, \
         { "pos_n", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_hil_vehicle_t, pos_n) }, \
         { "pos_e", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_hil_vehicle_t, pos_e) }, \
         { "pos_d", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_hil_vehicle_t, pos_d) }, \
         { "vel_n", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_hil_vehicle_t, vel_n) }, \
         { "vel_e", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_hil_vehicle_t, vel_e) }, \
         { "vel_d", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_hil_vehicle_t, vel_d) }, \
         { "vel_xb", NULL, MAVLINK_TYPE_INT16_T, 0, 62, offsetof(mavlink_hil_vehicle_t, vel_xb) }, \
         { "vel_yb", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_hil_vehicle_t, vel_yb) }, \
         { "vel_zb", NULL, MAVLINK_TYPE_INT16_T, 0, 66, offsetof(mavlink_hil_vehicle_t, vel_zb) }, \
         { "xacc", NULL, MAVLINK_TYPE_INT16_T, 0, 68, offsetof(mavlink_hil_vehicle_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_INT16_T, 0, 70, offsetof(mavlink_hil_vehicle_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_INT16_T, 0, 72, offsetof(mavlink_hil_vehicle_t, zacc) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hil_vehicle_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hil_vehicle_t, pitch) }, \
         { "heading", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hil_vehicle_t, heading) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hil_vehicle_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_hil_vehicle_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_hil_vehicle_t, yawspeed) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_hil_vehicle_t, valid) }, \
         } \
}
#endif

/**
 * @brief Pack a hil_vehicle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [mm] Altitude (MSL). Positive for up.
 * @param pos_n [cm] North position in NED earth-fixed frame.
 * @param pos_e [cm] East position in NED earth-fixed frame.
 * @param pos_d [cm] Down position in NED earth-fixed frame.
 * @param vel_n [cm/s] North velocity in NED earth-fixed frame.
 * @param vel_e [cm/s] East velocity in NED earth-fixed frame.
 * @param vel_d [cm/s] Down velocity in NED earth-fixed frame.
 * @param vel_xb [cm/s] Velocity in x-direction in body-fixed frame.
 * @param vel_yb [cm/s] Velocity in y-direction in body-fixed frame.
 * @param vel_zb [cm/s] Velocity in z-direction in body-fixed frame.
 * @param xacc [mG] X acceleration in body frame
 * @param yacc [mG] Y acceleration in body frame
 * @param zacc [mG] Z acceleration in body frame
 * @param roll [deg] roll
 * @param pitch [deg] pitch
 * @param heading [deg] heading
 * @param rollspeed [deg/s] Body frame roll / phi angular speed
 * @param pitchspeed [deg/s] Body frame pitch / theta angular speed
 * @param yawspeed [deg/s] Body frame yaw / psi angular speed
 * @param valid  True if data is valid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_vehicle_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, int32_t pos_n, int32_t pos_e, int32_t pos_d, int16_t vel_n, int16_t vel_e, int16_t vel_d, int16_t vel_xb, int16_t vel_yb, int16_t vel_zb, int16_t xacc, int16_t yacc, int16_t zacc, float roll, float pitch, float heading, float rollspeed, float pitchspeed, float yawspeed, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_VEHICLE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_int32_t(buf, 20, pos_n);
    _mav_put_int32_t(buf, 24, pos_e);
    _mav_put_int32_t(buf, 28, pos_d);
    _mav_put_float(buf, 32, roll);
    _mav_put_float(buf, 36, pitch);
    _mav_put_float(buf, 40, heading);
    _mav_put_float(buf, 44, rollspeed);
    _mav_put_float(buf, 48, pitchspeed);
    _mav_put_float(buf, 52, yawspeed);
    _mav_put_int16_t(buf, 56, vel_n);
    _mav_put_int16_t(buf, 58, vel_e);
    _mav_put_int16_t(buf, 60, vel_d);
    _mav_put_int16_t(buf, 62, vel_xb);
    _mav_put_int16_t(buf, 64, vel_yb);
    _mav_put_int16_t(buf, 66, vel_zb);
    _mav_put_int16_t(buf, 68, xacc);
    _mav_put_int16_t(buf, 70, yacc);
    _mav_put_int16_t(buf, 72, zacc);
    _mav_put_uint8_t(buf, 74, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_VEHICLE_LEN);
#else
    mavlink_hil_vehicle_t packet;
    packet.time_usec = time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.pos_n = pos_n;
    packet.pos_e = pos_e;
    packet.pos_d = pos_d;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.vel_n = vel_n;
    packet.vel_e = vel_e;
    packet.vel_d = vel_d;
    packet.vel_xb = vel_xb;
    packet.vel_yb = vel_yb;
    packet.vel_zb = vel_zb;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_VEHICLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_VEHICLE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_CRC);
}

/**
 * @brief Pack a hil_vehicle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [mm] Altitude (MSL). Positive for up.
 * @param pos_n [cm] North position in NED earth-fixed frame.
 * @param pos_e [cm] East position in NED earth-fixed frame.
 * @param pos_d [cm] Down position in NED earth-fixed frame.
 * @param vel_n [cm/s] North velocity in NED earth-fixed frame.
 * @param vel_e [cm/s] East velocity in NED earth-fixed frame.
 * @param vel_d [cm/s] Down velocity in NED earth-fixed frame.
 * @param vel_xb [cm/s] Velocity in x-direction in body-fixed frame.
 * @param vel_yb [cm/s] Velocity in y-direction in body-fixed frame.
 * @param vel_zb [cm/s] Velocity in z-direction in body-fixed frame.
 * @param xacc [mG] X acceleration in body frame
 * @param yacc [mG] Y acceleration in body frame
 * @param zacc [mG] Z acceleration in body frame
 * @param roll [deg] roll
 * @param pitch [deg] pitch
 * @param heading [deg] heading
 * @param rollspeed [deg/s] Body frame roll / phi angular speed
 * @param pitchspeed [deg/s] Body frame pitch / theta angular speed
 * @param yawspeed [deg/s] Body frame yaw / psi angular speed
 * @param valid  True if data is valid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_vehicle_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, int32_t pos_n, int32_t pos_e, int32_t pos_d, int16_t vel_n, int16_t vel_e, int16_t vel_d, int16_t vel_xb, int16_t vel_yb, int16_t vel_zb, int16_t xacc, int16_t yacc, int16_t zacc, float roll, float pitch, float heading, float rollspeed, float pitchspeed, float yawspeed, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_VEHICLE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_int32_t(buf, 20, pos_n);
    _mav_put_int32_t(buf, 24, pos_e);
    _mav_put_int32_t(buf, 28, pos_d);
    _mav_put_float(buf, 32, roll);
    _mav_put_float(buf, 36, pitch);
    _mav_put_float(buf, 40, heading);
    _mav_put_float(buf, 44, rollspeed);
    _mav_put_float(buf, 48, pitchspeed);
    _mav_put_float(buf, 52, yawspeed);
    _mav_put_int16_t(buf, 56, vel_n);
    _mav_put_int16_t(buf, 58, vel_e);
    _mav_put_int16_t(buf, 60, vel_d);
    _mav_put_int16_t(buf, 62, vel_xb);
    _mav_put_int16_t(buf, 64, vel_yb);
    _mav_put_int16_t(buf, 66, vel_zb);
    _mav_put_int16_t(buf, 68, xacc);
    _mav_put_int16_t(buf, 70, yacc);
    _mav_put_int16_t(buf, 72, zacc);
    _mav_put_uint8_t(buf, 74, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_VEHICLE_LEN);
#else
    mavlink_hil_vehicle_t packet;
    packet.time_usec = time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.pos_n = pos_n;
    packet.pos_e = pos_e;
    packet.pos_d = pos_d;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.vel_n = vel_n;
    packet.vel_e = vel_e;
    packet.vel_d = vel_d;
    packet.vel_xb = vel_xb;
    packet.vel_yb = vel_yb;
    packet.vel_zb = vel_zb;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_VEHICLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_VEHICLE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN);
#endif
}

/**
 * @brief Pack a hil_vehicle message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [mm] Altitude (MSL). Positive for up.
 * @param pos_n [cm] North position in NED earth-fixed frame.
 * @param pos_e [cm] East position in NED earth-fixed frame.
 * @param pos_d [cm] Down position in NED earth-fixed frame.
 * @param vel_n [cm/s] North velocity in NED earth-fixed frame.
 * @param vel_e [cm/s] East velocity in NED earth-fixed frame.
 * @param vel_d [cm/s] Down velocity in NED earth-fixed frame.
 * @param vel_xb [cm/s] Velocity in x-direction in body-fixed frame.
 * @param vel_yb [cm/s] Velocity in y-direction in body-fixed frame.
 * @param vel_zb [cm/s] Velocity in z-direction in body-fixed frame.
 * @param xacc [mG] X acceleration in body frame
 * @param yacc [mG] Y acceleration in body frame
 * @param zacc [mG] Z acceleration in body frame
 * @param roll [deg] roll
 * @param pitch [deg] pitch
 * @param heading [deg] heading
 * @param rollspeed [deg/s] Body frame roll / phi angular speed
 * @param pitchspeed [deg/s] Body frame pitch / theta angular speed
 * @param yawspeed [deg/s] Body frame yaw / psi angular speed
 * @param valid  True if data is valid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_vehicle_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,int32_t lat,int32_t lon,int32_t alt,int32_t pos_n,int32_t pos_e,int32_t pos_d,int16_t vel_n,int16_t vel_e,int16_t vel_d,int16_t vel_xb,int16_t vel_yb,int16_t vel_zb,int16_t xacc,int16_t yacc,int16_t zacc,float roll,float pitch,float heading,float rollspeed,float pitchspeed,float yawspeed,uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_VEHICLE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_int32_t(buf, 20, pos_n);
    _mav_put_int32_t(buf, 24, pos_e);
    _mav_put_int32_t(buf, 28, pos_d);
    _mav_put_float(buf, 32, roll);
    _mav_put_float(buf, 36, pitch);
    _mav_put_float(buf, 40, heading);
    _mav_put_float(buf, 44, rollspeed);
    _mav_put_float(buf, 48, pitchspeed);
    _mav_put_float(buf, 52, yawspeed);
    _mav_put_int16_t(buf, 56, vel_n);
    _mav_put_int16_t(buf, 58, vel_e);
    _mav_put_int16_t(buf, 60, vel_d);
    _mav_put_int16_t(buf, 62, vel_xb);
    _mav_put_int16_t(buf, 64, vel_yb);
    _mav_put_int16_t(buf, 66, vel_zb);
    _mav_put_int16_t(buf, 68, xacc);
    _mav_put_int16_t(buf, 70, yacc);
    _mav_put_int16_t(buf, 72, zacc);
    _mav_put_uint8_t(buf, 74, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_VEHICLE_LEN);
#else
    mavlink_hil_vehicle_t packet;
    packet.time_usec = time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.pos_n = pos_n;
    packet.pos_e = pos_e;
    packet.pos_d = pos_d;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.vel_n = vel_n;
    packet.vel_e = vel_e;
    packet.vel_d = vel_d;
    packet.vel_xb = vel_xb;
    packet.vel_yb = vel_yb;
    packet.vel_zb = vel_zb;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_VEHICLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_VEHICLE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_CRC);
}

/**
 * @brief Encode a hil_vehicle struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hil_vehicle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_vehicle_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hil_vehicle_t* hil_vehicle)
{
    return mavlink_msg_hil_vehicle_pack(system_id, component_id, msg, hil_vehicle->time_usec, hil_vehicle->lat, hil_vehicle->lon, hil_vehicle->alt, hil_vehicle->pos_n, hil_vehicle->pos_e, hil_vehicle->pos_d, hil_vehicle->vel_n, hil_vehicle->vel_e, hil_vehicle->vel_d, hil_vehicle->vel_xb, hil_vehicle->vel_yb, hil_vehicle->vel_zb, hil_vehicle->xacc, hil_vehicle->yacc, hil_vehicle->zacc, hil_vehicle->roll, hil_vehicle->pitch, hil_vehicle->heading, hil_vehicle->rollspeed, hil_vehicle->pitchspeed, hil_vehicle->yawspeed, hil_vehicle->valid);
}

/**
 * @brief Encode a hil_vehicle struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hil_vehicle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_vehicle_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hil_vehicle_t* hil_vehicle)
{
    return mavlink_msg_hil_vehicle_pack_chan(system_id, component_id, chan, msg, hil_vehicle->time_usec, hil_vehicle->lat, hil_vehicle->lon, hil_vehicle->alt, hil_vehicle->pos_n, hil_vehicle->pos_e, hil_vehicle->pos_d, hil_vehicle->vel_n, hil_vehicle->vel_e, hil_vehicle->vel_d, hil_vehicle->vel_xb, hil_vehicle->vel_yb, hil_vehicle->vel_zb, hil_vehicle->xacc, hil_vehicle->yacc, hil_vehicle->zacc, hil_vehicle->roll, hil_vehicle->pitch, hil_vehicle->heading, hil_vehicle->rollspeed, hil_vehicle->pitchspeed, hil_vehicle->yawspeed, hil_vehicle->valid);
}

/**
 * @brief Encode a hil_vehicle struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hil_vehicle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_vehicle_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hil_vehicle_t* hil_vehicle)
{
    return mavlink_msg_hil_vehicle_pack_status(system_id, component_id, _status, msg,  hil_vehicle->time_usec, hil_vehicle->lat, hil_vehicle->lon, hil_vehicle->alt, hil_vehicle->pos_n, hil_vehicle->pos_e, hil_vehicle->pos_d, hil_vehicle->vel_n, hil_vehicle->vel_e, hil_vehicle->vel_d, hil_vehicle->vel_xb, hil_vehicle->vel_yb, hil_vehicle->vel_zb, hil_vehicle->xacc, hil_vehicle->yacc, hil_vehicle->zacc, hil_vehicle->roll, hil_vehicle->pitch, hil_vehicle->heading, hil_vehicle->rollspeed, hil_vehicle->pitchspeed, hil_vehicle->yawspeed, hil_vehicle->valid);
}

/**
 * @brief Send a hil_vehicle message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [mm] Altitude (MSL). Positive for up.
 * @param pos_n [cm] North position in NED earth-fixed frame.
 * @param pos_e [cm] East position in NED earth-fixed frame.
 * @param pos_d [cm] Down position in NED earth-fixed frame.
 * @param vel_n [cm/s] North velocity in NED earth-fixed frame.
 * @param vel_e [cm/s] East velocity in NED earth-fixed frame.
 * @param vel_d [cm/s] Down velocity in NED earth-fixed frame.
 * @param vel_xb [cm/s] Velocity in x-direction in body-fixed frame.
 * @param vel_yb [cm/s] Velocity in y-direction in body-fixed frame.
 * @param vel_zb [cm/s] Velocity in z-direction in body-fixed frame.
 * @param xacc [mG] X acceleration in body frame
 * @param yacc [mG] Y acceleration in body frame
 * @param zacc [mG] Z acceleration in body frame
 * @param roll [deg] roll
 * @param pitch [deg] pitch
 * @param heading [deg] heading
 * @param rollspeed [deg/s] Body frame roll / phi angular speed
 * @param pitchspeed [deg/s] Body frame pitch / theta angular speed
 * @param yawspeed [deg/s] Body frame yaw / psi angular speed
 * @param valid  True if data is valid
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hil_vehicle_send(mavlink_channel_t chan, uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, int32_t pos_n, int32_t pos_e, int32_t pos_d, int16_t vel_n, int16_t vel_e, int16_t vel_d, int16_t vel_xb, int16_t vel_yb, int16_t vel_zb, int16_t xacc, int16_t yacc, int16_t zacc, float roll, float pitch, float heading, float rollspeed, float pitchspeed, float yawspeed, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_VEHICLE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_int32_t(buf, 20, pos_n);
    _mav_put_int32_t(buf, 24, pos_e);
    _mav_put_int32_t(buf, 28, pos_d);
    _mav_put_float(buf, 32, roll);
    _mav_put_float(buf, 36, pitch);
    _mav_put_float(buf, 40, heading);
    _mav_put_float(buf, 44, rollspeed);
    _mav_put_float(buf, 48, pitchspeed);
    _mav_put_float(buf, 52, yawspeed);
    _mav_put_int16_t(buf, 56, vel_n);
    _mav_put_int16_t(buf, 58, vel_e);
    _mav_put_int16_t(buf, 60, vel_d);
    _mav_put_int16_t(buf, 62, vel_xb);
    _mav_put_int16_t(buf, 64, vel_yb);
    _mav_put_int16_t(buf, 66, vel_zb);
    _mav_put_int16_t(buf, 68, xacc);
    _mav_put_int16_t(buf, 70, yacc);
    _mav_put_int16_t(buf, 72, zacc);
    _mav_put_uint8_t(buf, 74, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_VEHICLE, buf, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_CRC);
#else
    mavlink_hil_vehicle_t packet;
    packet.time_usec = time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.pos_n = pos_n;
    packet.pos_e = pos_e;
    packet.pos_d = pos_d;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.vel_n = vel_n;
    packet.vel_e = vel_e;
    packet.vel_d = vel_d;
    packet.vel_xb = vel_xb;
    packet.vel_yb = vel_yb;
    packet.vel_zb = vel_zb;
    packet.xacc = xacc;
    packet.yacc = yacc;
    packet.zacc = zacc;
    packet.valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_VEHICLE, (const char *)&packet, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_CRC);
#endif
}

/**
 * @brief Send a hil_vehicle message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hil_vehicle_send_struct(mavlink_channel_t chan, const mavlink_hil_vehicle_t* hil_vehicle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hil_vehicle_send(chan, hil_vehicle->time_usec, hil_vehicle->lat, hil_vehicle->lon, hil_vehicle->alt, hil_vehicle->pos_n, hil_vehicle->pos_e, hil_vehicle->pos_d, hil_vehicle->vel_n, hil_vehicle->vel_e, hil_vehicle->vel_d, hil_vehicle->vel_xb, hil_vehicle->vel_yb, hil_vehicle->vel_zb, hil_vehicle->xacc, hil_vehicle->yacc, hil_vehicle->zacc, hil_vehicle->roll, hil_vehicle->pitch, hil_vehicle->heading, hil_vehicle->rollspeed, hil_vehicle->pitchspeed, hil_vehicle->yawspeed, hil_vehicle->valid);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_VEHICLE, (const char *)hil_vehicle, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_CRC);
#endif
}

#if MAVLINK_MSG_ID_HIL_VEHICLE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hil_vehicle_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, int32_t pos_n, int32_t pos_e, int32_t pos_d, int16_t vel_n, int16_t vel_e, int16_t vel_d, int16_t vel_xb, int16_t vel_yb, int16_t vel_zb, int16_t xacc, int16_t yacc, int16_t zacc, float roll, float pitch, float heading, float rollspeed, float pitchspeed, float yawspeed, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_int32_t(buf, 20, pos_n);
    _mav_put_int32_t(buf, 24, pos_e);
    _mav_put_int32_t(buf, 28, pos_d);
    _mav_put_float(buf, 32, roll);
    _mav_put_float(buf, 36, pitch);
    _mav_put_float(buf, 40, heading);
    _mav_put_float(buf, 44, rollspeed);
    _mav_put_float(buf, 48, pitchspeed);
    _mav_put_float(buf, 52, yawspeed);
    _mav_put_int16_t(buf, 56, vel_n);
    _mav_put_int16_t(buf, 58, vel_e);
    _mav_put_int16_t(buf, 60, vel_d);
    _mav_put_int16_t(buf, 62, vel_xb);
    _mav_put_int16_t(buf, 64, vel_yb);
    _mav_put_int16_t(buf, 66, vel_zb);
    _mav_put_int16_t(buf, 68, xacc);
    _mav_put_int16_t(buf, 70, yacc);
    _mav_put_int16_t(buf, 72, zacc);
    _mav_put_uint8_t(buf, 74, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_VEHICLE, buf, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_CRC);
#else
    mavlink_hil_vehicle_t *packet = (mavlink_hil_vehicle_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->pos_n = pos_n;
    packet->pos_e = pos_e;
    packet->pos_d = pos_d;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->heading = heading;
    packet->rollspeed = rollspeed;
    packet->pitchspeed = pitchspeed;
    packet->yawspeed = yawspeed;
    packet->vel_n = vel_n;
    packet->vel_e = vel_e;
    packet->vel_d = vel_d;
    packet->vel_xb = vel_xb;
    packet->vel_yb = vel_yb;
    packet->vel_zb = vel_zb;
    packet->xacc = xacc;
    packet->yacc = yacc;
    packet->zacc = zacc;
    packet->valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_VEHICLE, (const char *)packet, MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_LEN, MAVLINK_MSG_ID_HIL_VEHICLE_CRC);
#endif
}
#endif

#endif

// MESSAGE HIL_VEHICLE UNPACKING


/**
 * @brief Get field time_usec from hil_vehicle message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_hil_vehicle_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field lat from hil_vehicle message
 *
 * @return [degE7] Latitude (WGS84)
 */
static inline int32_t mavlink_msg_hil_vehicle_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field lon from hil_vehicle message
 *
 * @return [degE7] Longitude (WGS84)
 */
static inline int32_t mavlink_msg_hil_vehicle_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field alt from hil_vehicle message
 *
 * @return [mm] Altitude (MSL). Positive for up.
 */
static inline int32_t mavlink_msg_hil_vehicle_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field pos_n from hil_vehicle message
 *
 * @return [cm] North position in NED earth-fixed frame.
 */
static inline int32_t mavlink_msg_hil_vehicle_get_pos_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field pos_e from hil_vehicle message
 *
 * @return [cm] East position in NED earth-fixed frame.
 */
static inline int32_t mavlink_msg_hil_vehicle_get_pos_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field pos_d from hil_vehicle message
 *
 * @return [cm] Down position in NED earth-fixed frame.
 */
static inline int32_t mavlink_msg_hil_vehicle_get_pos_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field vel_n from hil_vehicle message
 *
 * @return [cm/s] North velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_hil_vehicle_get_vel_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  56);
}

/**
 * @brief Get field vel_e from hil_vehicle message
 *
 * @return [cm/s] East velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_hil_vehicle_get_vel_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  58);
}

/**
 * @brief Get field vel_d from hil_vehicle message
 *
 * @return [cm/s] Down velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_hil_vehicle_get_vel_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  60);
}

/**
 * @brief Get field vel_xb from hil_vehicle message
 *
 * @return [cm/s] Velocity in x-direction in body-fixed frame.
 */
static inline int16_t mavlink_msg_hil_vehicle_get_vel_xb(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  62);
}

/**
 * @brief Get field vel_yb from hil_vehicle message
 *
 * @return [cm/s] Velocity in y-direction in body-fixed frame.
 */
static inline int16_t mavlink_msg_hil_vehicle_get_vel_yb(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  64);
}

/**
 * @brief Get field vel_zb from hil_vehicle message
 *
 * @return [cm/s] Velocity in z-direction in body-fixed frame.
 */
static inline int16_t mavlink_msg_hil_vehicle_get_vel_zb(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  66);
}

/**
 * @brief Get field xacc from hil_vehicle message
 *
 * @return [mG] X acceleration in body frame
 */
static inline int16_t mavlink_msg_hil_vehicle_get_xacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  68);
}

/**
 * @brief Get field yacc from hil_vehicle message
 *
 * @return [mG] Y acceleration in body frame
 */
static inline int16_t mavlink_msg_hil_vehicle_get_yacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  70);
}

/**
 * @brief Get field zacc from hil_vehicle message
 *
 * @return [mG] Z acceleration in body frame
 */
static inline int16_t mavlink_msg_hil_vehicle_get_zacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  72);
}

/**
 * @brief Get field roll from hil_vehicle message
 *
 * @return [deg] roll
 */
static inline float mavlink_msg_hil_vehicle_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field pitch from hil_vehicle message
 *
 * @return [deg] pitch
 */
static inline float mavlink_msg_hil_vehicle_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field heading from hil_vehicle message
 *
 * @return [deg] heading
 */
static inline float mavlink_msg_hil_vehicle_get_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field rollspeed from hil_vehicle message
 *
 * @return [deg/s] Body frame roll / phi angular speed
 */
static inline float mavlink_msg_hil_vehicle_get_rollspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field pitchspeed from hil_vehicle message
 *
 * @return [deg/s] Body frame pitch / theta angular speed
 */
static inline float mavlink_msg_hil_vehicle_get_pitchspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field yawspeed from hil_vehicle message
 *
 * @return [deg/s] Body frame yaw / psi angular speed
 */
static inline float mavlink_msg_hil_vehicle_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field valid from hil_vehicle message
 *
 * @return  True if data is valid
 */
static inline uint8_t mavlink_msg_hil_vehicle_get_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  74);
}

/**
 * @brief Decode a hil_vehicle message into a struct
 *
 * @param msg The message to decode
 * @param hil_vehicle C-struct to decode the message contents into
 */
static inline void mavlink_msg_hil_vehicle_decode(const mavlink_message_t* msg, mavlink_hil_vehicle_t* hil_vehicle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hil_vehicle->time_usec = mavlink_msg_hil_vehicle_get_time_usec(msg);
    hil_vehicle->lat = mavlink_msg_hil_vehicle_get_lat(msg);
    hil_vehicle->lon = mavlink_msg_hil_vehicle_get_lon(msg);
    hil_vehicle->alt = mavlink_msg_hil_vehicle_get_alt(msg);
    hil_vehicle->pos_n = mavlink_msg_hil_vehicle_get_pos_n(msg);
    hil_vehicle->pos_e = mavlink_msg_hil_vehicle_get_pos_e(msg);
    hil_vehicle->pos_d = mavlink_msg_hil_vehicle_get_pos_d(msg);
    hil_vehicle->roll = mavlink_msg_hil_vehicle_get_roll(msg);
    hil_vehicle->pitch = mavlink_msg_hil_vehicle_get_pitch(msg);
    hil_vehicle->heading = mavlink_msg_hil_vehicle_get_heading(msg);
    hil_vehicle->rollspeed = mavlink_msg_hil_vehicle_get_rollspeed(msg);
    hil_vehicle->pitchspeed = mavlink_msg_hil_vehicle_get_pitchspeed(msg);
    hil_vehicle->yawspeed = mavlink_msg_hil_vehicle_get_yawspeed(msg);
    hil_vehicle->vel_n = mavlink_msg_hil_vehicle_get_vel_n(msg);
    hil_vehicle->vel_e = mavlink_msg_hil_vehicle_get_vel_e(msg);
    hil_vehicle->vel_d = mavlink_msg_hil_vehicle_get_vel_d(msg);
    hil_vehicle->vel_xb = mavlink_msg_hil_vehicle_get_vel_xb(msg);
    hil_vehicle->vel_yb = mavlink_msg_hil_vehicle_get_vel_yb(msg);
    hil_vehicle->vel_zb = mavlink_msg_hil_vehicle_get_vel_zb(msg);
    hil_vehicle->xacc = mavlink_msg_hil_vehicle_get_xacc(msg);
    hil_vehicle->yacc = mavlink_msg_hil_vehicle_get_yacc(msg);
    hil_vehicle->zacc = mavlink_msg_hil_vehicle_get_zacc(msg);
    hil_vehicle->valid = mavlink_msg_hil_vehicle_get_valid(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HIL_VEHICLE_LEN? msg->len : MAVLINK_MSG_ID_HIL_VEHICLE_LEN;
        memset(hil_vehicle, 0, MAVLINK_MSG_ID_HIL_VEHICLE_LEN);
    memcpy(hil_vehicle, _MAV_PAYLOAD(msg), len);
#endif
}
