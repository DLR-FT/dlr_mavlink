#pragma once
// MESSAGE WEPILOT_VEHICLESTATE PACKING

#define MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE 540


typedef struct __mavlink_wepilot_vehiclestate_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 int32_t lat; /*< [degE7] Latitude (WGS84)*/
 int32_t lon; /*< [degE7] Longitude (WGS84)*/
 int32_t alt; /*< [mm] Altitude (MSL). Positive for up.*/
 float roll; /*< [deg] roll*/
 float pitch; /*< [deg] pitch*/
 float heading; /*< [deg] heading*/
 float rollspeed; /*< [deg/s] Body frame roll / phi angular speed*/
 float pitchspeed; /*< [deg/s] Body frame pitch / theta angular speed*/
 float yawspeed; /*< [deg/s] Body frame yaw / psi angular speed*/
 int16_t pos_n; /*< [cm] North position in NED earth-fixed frame.*/
 int16_t pos_e; /*< [cm] East position in NED earth-fixed frame.*/
 int16_t pos_d; /*< [cm] Down position in NED earth-fixed frame.*/
 int16_t vel_n; /*< [cm/s] North velocity in NED earth-fixed frame.*/
 int16_t vel_e; /*< [cm/s] East velocity in NED earth-fixed frame.*/
 int16_t vel_d; /*< [cm/s] Down velocity in NED earth-fixed frame.*/
 uint8_t valid; /*<  True if data is valid*/
} mavlink_wepilot_vehiclestate_t;

#define MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN 57
#define MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN 57
#define MAVLINK_MSG_ID_540_LEN 57
#define MAVLINK_MSG_ID_540_MIN_LEN 57

#define MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC 173
#define MAVLINK_MSG_ID_540_CRC 173



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WEPILOT_VEHICLESTATE { \
    540, \
    "WEPILOT_VEHICLESTATE", \
    17, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_wepilot_vehiclestate_t, time_usec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_wepilot_vehiclestate_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_wepilot_vehiclestate_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_wepilot_vehiclestate_t, alt) }, \
         { "pos_n", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_wepilot_vehiclestate_t, pos_n) }, \
         { "pos_e", NULL, MAVLINK_TYPE_INT16_T, 0, 46, offsetof(mavlink_wepilot_vehiclestate_t, pos_e) }, \
         { "pos_d", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_wepilot_vehiclestate_t, pos_d) }, \
         { "vel_n", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_wepilot_vehiclestate_t, vel_n) }, \
         { "vel_e", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_wepilot_vehiclestate_t, vel_e) }, \
         { "vel_d", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_wepilot_vehiclestate_t, vel_d) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_wepilot_vehiclestate_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_wepilot_vehiclestate_t, pitch) }, \
         { "heading", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_wepilot_vehiclestate_t, heading) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_wepilot_vehiclestate_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_wepilot_vehiclestate_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_wepilot_vehiclestate_t, yawspeed) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_wepilot_vehiclestate_t, valid) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WEPILOT_VEHICLESTATE { \
    "WEPILOT_VEHICLESTATE", \
    17, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_wepilot_vehiclestate_t, time_usec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_wepilot_vehiclestate_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_wepilot_vehiclestate_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_wepilot_vehiclestate_t, alt) }, \
         { "pos_n", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_wepilot_vehiclestate_t, pos_n) }, \
         { "pos_e", NULL, MAVLINK_TYPE_INT16_T, 0, 46, offsetof(mavlink_wepilot_vehiclestate_t, pos_e) }, \
         { "pos_d", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_wepilot_vehiclestate_t, pos_d) }, \
         { "vel_n", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_wepilot_vehiclestate_t, vel_n) }, \
         { "vel_e", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_wepilot_vehiclestate_t, vel_e) }, \
         { "vel_d", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_wepilot_vehiclestate_t, vel_d) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_wepilot_vehiclestate_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_wepilot_vehiclestate_t, pitch) }, \
         { "heading", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_wepilot_vehiclestate_t, heading) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_wepilot_vehiclestate_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_wepilot_vehiclestate_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_wepilot_vehiclestate_t, yawspeed) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_wepilot_vehiclestate_t, valid) }, \
         } \
}
#endif

/**
 * @brief Pack a wepilot_vehiclestate message
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
 * @param roll [deg] roll
 * @param pitch [deg] pitch
 * @param heading [deg] heading
 * @param rollspeed [deg/s] Body frame roll / phi angular speed
 * @param pitchspeed [deg/s] Body frame pitch / theta angular speed
 * @param yawspeed [deg/s] Body frame yaw / psi angular speed
 * @param valid  True if data is valid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wepilot_vehiclestate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, int16_t pos_n, int16_t pos_e, int16_t pos_d, int16_t vel_n, int16_t vel_e, int16_t vel_d, float roll, float pitch, float heading, float rollspeed, float pitchspeed, float yawspeed, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, heading);
    _mav_put_float(buf, 32, rollspeed);
    _mav_put_float(buf, 36, pitchspeed);
    _mav_put_float(buf, 40, yawspeed);
    _mav_put_int16_t(buf, 44, pos_n);
    _mav_put_int16_t(buf, 46, pos_e);
    _mav_put_int16_t(buf, 48, pos_d);
    _mav_put_int16_t(buf, 50, vel_n);
    _mav_put_int16_t(buf, 52, vel_e);
    _mav_put_int16_t(buf, 54, vel_d);
    _mav_put_uint8_t(buf, 56, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN);
#else
    mavlink_wepilot_vehiclestate_t packet;
    packet.time_usec = time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.pos_n = pos_n;
    packet.pos_e = pos_e;
    packet.pos_d = pos_d;
    packet.vel_n = vel_n;
    packet.vel_e = vel_e;
    packet.vel_d = vel_d;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC);
}

/**
 * @brief Pack a wepilot_vehiclestate message
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
 * @param roll [deg] roll
 * @param pitch [deg] pitch
 * @param heading [deg] heading
 * @param rollspeed [deg/s] Body frame roll / phi angular speed
 * @param pitchspeed [deg/s] Body frame pitch / theta angular speed
 * @param yawspeed [deg/s] Body frame yaw / psi angular speed
 * @param valid  True if data is valid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wepilot_vehiclestate_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, int16_t pos_n, int16_t pos_e, int16_t pos_d, int16_t vel_n, int16_t vel_e, int16_t vel_d, float roll, float pitch, float heading, float rollspeed, float pitchspeed, float yawspeed, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, heading);
    _mav_put_float(buf, 32, rollspeed);
    _mav_put_float(buf, 36, pitchspeed);
    _mav_put_float(buf, 40, yawspeed);
    _mav_put_int16_t(buf, 44, pos_n);
    _mav_put_int16_t(buf, 46, pos_e);
    _mav_put_int16_t(buf, 48, pos_d);
    _mav_put_int16_t(buf, 50, vel_n);
    _mav_put_int16_t(buf, 52, vel_e);
    _mav_put_int16_t(buf, 54, vel_d);
    _mav_put_uint8_t(buf, 56, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN);
#else
    mavlink_wepilot_vehiclestate_t packet;
    packet.time_usec = time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.pos_n = pos_n;
    packet.pos_e = pos_e;
    packet.pos_d = pos_d;
    packet.vel_n = vel_n;
    packet.vel_e = vel_e;
    packet.vel_d = vel_d;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN);
#endif
}

/**
 * @brief Pack a wepilot_vehiclestate message on a channel
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
 * @param roll [deg] roll
 * @param pitch [deg] pitch
 * @param heading [deg] heading
 * @param rollspeed [deg/s] Body frame roll / phi angular speed
 * @param pitchspeed [deg/s] Body frame pitch / theta angular speed
 * @param yawspeed [deg/s] Body frame yaw / psi angular speed
 * @param valid  True if data is valid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wepilot_vehiclestate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,int32_t lat,int32_t lon,int32_t alt,int16_t pos_n,int16_t pos_e,int16_t pos_d,int16_t vel_n,int16_t vel_e,int16_t vel_d,float roll,float pitch,float heading,float rollspeed,float pitchspeed,float yawspeed,uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, heading);
    _mav_put_float(buf, 32, rollspeed);
    _mav_put_float(buf, 36, pitchspeed);
    _mav_put_float(buf, 40, yawspeed);
    _mav_put_int16_t(buf, 44, pos_n);
    _mav_put_int16_t(buf, 46, pos_e);
    _mav_put_int16_t(buf, 48, pos_d);
    _mav_put_int16_t(buf, 50, vel_n);
    _mav_put_int16_t(buf, 52, vel_e);
    _mav_put_int16_t(buf, 54, vel_d);
    _mav_put_uint8_t(buf, 56, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN);
#else
    mavlink_wepilot_vehiclestate_t packet;
    packet.time_usec = time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.pos_n = pos_n;
    packet.pos_e = pos_e;
    packet.pos_d = pos_d;
    packet.vel_n = vel_n;
    packet.vel_e = vel_e;
    packet.vel_d = vel_d;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC);
}

/**
 * @brief Encode a wepilot_vehiclestate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param wepilot_vehiclestate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wepilot_vehiclestate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_wepilot_vehiclestate_t* wepilot_vehiclestate)
{
    return mavlink_msg_wepilot_vehiclestate_pack(system_id, component_id, msg, wepilot_vehiclestate->time_usec, wepilot_vehiclestate->lat, wepilot_vehiclestate->lon, wepilot_vehiclestate->alt, wepilot_vehiclestate->pos_n, wepilot_vehiclestate->pos_e, wepilot_vehiclestate->pos_d, wepilot_vehiclestate->vel_n, wepilot_vehiclestate->vel_e, wepilot_vehiclestate->vel_d, wepilot_vehiclestate->roll, wepilot_vehiclestate->pitch, wepilot_vehiclestate->heading, wepilot_vehiclestate->rollspeed, wepilot_vehiclestate->pitchspeed, wepilot_vehiclestate->yawspeed, wepilot_vehiclestate->valid);
}

/**
 * @brief Encode a wepilot_vehiclestate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wepilot_vehiclestate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wepilot_vehiclestate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_wepilot_vehiclestate_t* wepilot_vehiclestate)
{
    return mavlink_msg_wepilot_vehiclestate_pack_chan(system_id, component_id, chan, msg, wepilot_vehiclestate->time_usec, wepilot_vehiclestate->lat, wepilot_vehiclestate->lon, wepilot_vehiclestate->alt, wepilot_vehiclestate->pos_n, wepilot_vehiclestate->pos_e, wepilot_vehiclestate->pos_d, wepilot_vehiclestate->vel_n, wepilot_vehiclestate->vel_e, wepilot_vehiclestate->vel_d, wepilot_vehiclestate->roll, wepilot_vehiclestate->pitch, wepilot_vehiclestate->heading, wepilot_vehiclestate->rollspeed, wepilot_vehiclestate->pitchspeed, wepilot_vehiclestate->yawspeed, wepilot_vehiclestate->valid);
}

/**
 * @brief Encode a wepilot_vehiclestate struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param wepilot_vehiclestate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wepilot_vehiclestate_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_wepilot_vehiclestate_t* wepilot_vehiclestate)
{
    return mavlink_msg_wepilot_vehiclestate_pack_status(system_id, component_id, _status, msg,  wepilot_vehiclestate->time_usec, wepilot_vehiclestate->lat, wepilot_vehiclestate->lon, wepilot_vehiclestate->alt, wepilot_vehiclestate->pos_n, wepilot_vehiclestate->pos_e, wepilot_vehiclestate->pos_d, wepilot_vehiclestate->vel_n, wepilot_vehiclestate->vel_e, wepilot_vehiclestate->vel_d, wepilot_vehiclestate->roll, wepilot_vehiclestate->pitch, wepilot_vehiclestate->heading, wepilot_vehiclestate->rollspeed, wepilot_vehiclestate->pitchspeed, wepilot_vehiclestate->yawspeed, wepilot_vehiclestate->valid);
}

/**
 * @brief Send a wepilot_vehiclestate message
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
 * @param roll [deg] roll
 * @param pitch [deg] pitch
 * @param heading [deg] heading
 * @param rollspeed [deg/s] Body frame roll / phi angular speed
 * @param pitchspeed [deg/s] Body frame pitch / theta angular speed
 * @param yawspeed [deg/s] Body frame yaw / psi angular speed
 * @param valid  True if data is valid
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_wepilot_vehiclestate_send(mavlink_channel_t chan, uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, int16_t pos_n, int16_t pos_e, int16_t pos_d, int16_t vel_n, int16_t vel_e, int16_t vel_d, float roll, float pitch, float heading, float rollspeed, float pitchspeed, float yawspeed, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, heading);
    _mav_put_float(buf, 32, rollspeed);
    _mav_put_float(buf, 36, pitchspeed);
    _mav_put_float(buf, 40, yawspeed);
    _mav_put_int16_t(buf, 44, pos_n);
    _mav_put_int16_t(buf, 46, pos_e);
    _mav_put_int16_t(buf, 48, pos_d);
    _mav_put_int16_t(buf, 50, vel_n);
    _mav_put_int16_t(buf, 52, vel_e);
    _mav_put_int16_t(buf, 54, vel_d);
    _mav_put_uint8_t(buf, 56, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE, buf, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC);
#else
    mavlink_wepilot_vehiclestate_t packet;
    packet.time_usec = time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.pos_n = pos_n;
    packet.pos_e = pos_e;
    packet.pos_d = pos_d;
    packet.vel_n = vel_n;
    packet.vel_e = vel_e;
    packet.vel_d = vel_d;
    packet.valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE, (const char *)&packet, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC);
#endif
}

/**
 * @brief Send a wepilot_vehiclestate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_wepilot_vehiclestate_send_struct(mavlink_channel_t chan, const mavlink_wepilot_vehiclestate_t* wepilot_vehiclestate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wepilot_vehiclestate_send(chan, wepilot_vehiclestate->time_usec, wepilot_vehiclestate->lat, wepilot_vehiclestate->lon, wepilot_vehiclestate->alt, wepilot_vehiclestate->pos_n, wepilot_vehiclestate->pos_e, wepilot_vehiclestate->pos_d, wepilot_vehiclestate->vel_n, wepilot_vehiclestate->vel_e, wepilot_vehiclestate->vel_d, wepilot_vehiclestate->roll, wepilot_vehiclestate->pitch, wepilot_vehiclestate->heading, wepilot_vehiclestate->rollspeed, wepilot_vehiclestate->pitchspeed, wepilot_vehiclestate->yawspeed, wepilot_vehiclestate->valid);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE, (const char *)wepilot_vehiclestate, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_wepilot_vehiclestate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int32_t lat, int32_t lon, int32_t alt, int16_t pos_n, int16_t pos_e, int16_t pos_d, int16_t vel_n, int16_t vel_e, int16_t vel_d, float roll, float pitch, float heading, float rollspeed, float pitchspeed, float yawspeed, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, heading);
    _mav_put_float(buf, 32, rollspeed);
    _mav_put_float(buf, 36, pitchspeed);
    _mav_put_float(buf, 40, yawspeed);
    _mav_put_int16_t(buf, 44, pos_n);
    _mav_put_int16_t(buf, 46, pos_e);
    _mav_put_int16_t(buf, 48, pos_d);
    _mav_put_int16_t(buf, 50, vel_n);
    _mav_put_int16_t(buf, 52, vel_e);
    _mav_put_int16_t(buf, 54, vel_d);
    _mav_put_uint8_t(buf, 56, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE, buf, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC);
#else
    mavlink_wepilot_vehiclestate_t *packet = (mavlink_wepilot_vehiclestate_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->heading = heading;
    packet->rollspeed = rollspeed;
    packet->pitchspeed = pitchspeed;
    packet->yawspeed = yawspeed;
    packet->pos_n = pos_n;
    packet->pos_e = pos_e;
    packet->pos_d = pos_d;
    packet->vel_n = vel_n;
    packet->vel_e = vel_e;
    packet->vel_d = vel_d;
    packet->valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE, (const char *)packet, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_CRC);
#endif
}
#endif

#endif

// MESSAGE WEPILOT_VEHICLESTATE UNPACKING


/**
 * @brief Get field time_usec from wepilot_vehiclestate message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_wepilot_vehiclestate_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field lat from wepilot_vehiclestate message
 *
 * @return [degE7] Latitude (WGS84)
 */
static inline int32_t mavlink_msg_wepilot_vehiclestate_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field lon from wepilot_vehiclestate message
 *
 * @return [degE7] Longitude (WGS84)
 */
static inline int32_t mavlink_msg_wepilot_vehiclestate_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field alt from wepilot_vehiclestate message
 *
 * @return [mm] Altitude (MSL). Positive for up.
 */
static inline int32_t mavlink_msg_wepilot_vehiclestate_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field pos_n from wepilot_vehiclestate message
 *
 * @return [cm] North position in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_wepilot_vehiclestate_get_pos_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  44);
}

/**
 * @brief Get field pos_e from wepilot_vehiclestate message
 *
 * @return [cm] East position in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_wepilot_vehiclestate_get_pos_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  46);
}

/**
 * @brief Get field pos_d from wepilot_vehiclestate message
 *
 * @return [cm] Down position in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_wepilot_vehiclestate_get_pos_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  48);
}

/**
 * @brief Get field vel_n from wepilot_vehiclestate message
 *
 * @return [cm/s] North velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_wepilot_vehiclestate_get_vel_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  50);
}

/**
 * @brief Get field vel_e from wepilot_vehiclestate message
 *
 * @return [cm/s] East velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_wepilot_vehiclestate_get_vel_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  52);
}

/**
 * @brief Get field vel_d from wepilot_vehiclestate message
 *
 * @return [cm/s] Down velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_wepilot_vehiclestate_get_vel_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  54);
}

/**
 * @brief Get field roll from wepilot_vehiclestate message
 *
 * @return [deg] roll
 */
static inline float mavlink_msg_wepilot_vehiclestate_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitch from wepilot_vehiclestate message
 *
 * @return [deg] pitch
 */
static inline float mavlink_msg_wepilot_vehiclestate_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field heading from wepilot_vehiclestate message
 *
 * @return [deg] heading
 */
static inline float mavlink_msg_wepilot_vehiclestate_get_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field rollspeed from wepilot_vehiclestate message
 *
 * @return [deg/s] Body frame roll / phi angular speed
 */
static inline float mavlink_msg_wepilot_vehiclestate_get_rollspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field pitchspeed from wepilot_vehiclestate message
 *
 * @return [deg/s] Body frame pitch / theta angular speed
 */
static inline float mavlink_msg_wepilot_vehiclestate_get_pitchspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field yawspeed from wepilot_vehiclestate message
 *
 * @return [deg/s] Body frame yaw / psi angular speed
 */
static inline float mavlink_msg_wepilot_vehiclestate_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field valid from wepilot_vehiclestate message
 *
 * @return  True if data is valid
 */
static inline uint8_t mavlink_msg_wepilot_vehiclestate_get_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  56);
}

/**
 * @brief Decode a wepilot_vehiclestate message into a struct
 *
 * @param msg The message to decode
 * @param wepilot_vehiclestate C-struct to decode the message contents into
 */
static inline void mavlink_msg_wepilot_vehiclestate_decode(const mavlink_message_t* msg, mavlink_wepilot_vehiclestate_t* wepilot_vehiclestate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    wepilot_vehiclestate->time_usec = mavlink_msg_wepilot_vehiclestate_get_time_usec(msg);
    wepilot_vehiclestate->lat = mavlink_msg_wepilot_vehiclestate_get_lat(msg);
    wepilot_vehiclestate->lon = mavlink_msg_wepilot_vehiclestate_get_lon(msg);
    wepilot_vehiclestate->alt = mavlink_msg_wepilot_vehiclestate_get_alt(msg);
    wepilot_vehiclestate->roll = mavlink_msg_wepilot_vehiclestate_get_roll(msg);
    wepilot_vehiclestate->pitch = mavlink_msg_wepilot_vehiclestate_get_pitch(msg);
    wepilot_vehiclestate->heading = mavlink_msg_wepilot_vehiclestate_get_heading(msg);
    wepilot_vehiclestate->rollspeed = mavlink_msg_wepilot_vehiclestate_get_rollspeed(msg);
    wepilot_vehiclestate->pitchspeed = mavlink_msg_wepilot_vehiclestate_get_pitchspeed(msg);
    wepilot_vehiclestate->yawspeed = mavlink_msg_wepilot_vehiclestate_get_yawspeed(msg);
    wepilot_vehiclestate->pos_n = mavlink_msg_wepilot_vehiclestate_get_pos_n(msg);
    wepilot_vehiclestate->pos_e = mavlink_msg_wepilot_vehiclestate_get_pos_e(msg);
    wepilot_vehiclestate->pos_d = mavlink_msg_wepilot_vehiclestate_get_pos_d(msg);
    wepilot_vehiclestate->vel_n = mavlink_msg_wepilot_vehiclestate_get_vel_n(msg);
    wepilot_vehiclestate->vel_e = mavlink_msg_wepilot_vehiclestate_get_vel_e(msg);
    wepilot_vehiclestate->vel_d = mavlink_msg_wepilot_vehiclestate_get_vel_d(msg);
    wepilot_vehiclestate->valid = mavlink_msg_wepilot_vehiclestate_get_valid(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN? msg->len : MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN;
        memset(wepilot_vehiclestate, 0, MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_LEN);
    memcpy(wepilot_vehiclestate, _MAV_PAYLOAD(msg), len);
#endif
}
