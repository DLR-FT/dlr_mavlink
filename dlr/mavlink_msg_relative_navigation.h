#pragma once
// MESSAGE RELATIVE_NAVIGATION PACKING

#define MAVLINK_MSG_ID_RELATIVE_NAVIGATION 535


typedef struct __mavlink_relative_navigation_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 int16_t rel_pos_n; /*< [cm] Relative north position in NED earth-fixed frame.*/
 int16_t rel_pos_e; /*< [cm] Relative east position in NED earth-fixed frame.*/
 int16_t rel_pos_d; /*< [cm] Relative down position in NED earth-fixed frame.*/
 int16_t rel_vel_n; /*< [cm/s] Relative north velocity in NED earth-fixed frame.*/
 int16_t rel_vel_e; /*< [cm/s] Relative east velocity in NED earth-fixed frame.*/
 int16_t rel_vel_d; /*< [cm/s] Relative down velocity in NED earth-fixed frame.*/
 int16_t rel_acc_n; /*< [mm/s2] Relative north acceleration in NED earth-fixed frame.*/
 int16_t rel_acc_e; /*< [mm/s2] Relative east acceleration in NED earth-fixed frame.*/
 int16_t rel_acc_d; /*< [mm/s2] Relative down acceleration in NED earth-fixed frame.*/
 int16_t rel_pos_n_var; /*< [cm] Relative north position variance in NED earth-fixed frame.*/
 int16_t rel_pos_e_var; /*< [cm] Relative east position variance in NED earth-fixed frame.*/
 int16_t rel_pos_d_var; /*< [cm] Relative down position variance in NED earth-fixed frame.*/
 int16_t parallel; /*< [mrad] Angle between vehicle x,y-plane and coop x,y-plane to indicate attitude alignment.*/
 int16_t roll; /*< [mrad] Roll angle between vehicle x,y-plane and coop x,y-plane.*/
 int16_t pitch; /*< [mrad] Pitch angle between vehicle x,y-plane and coop x,y-plane.*/
 int16_t delta_hdg; /*< [mrad] Difference between the headings of vehicle and landing platform.*/
 uint8_t valid; /*<  Boolean indicating whether the fields contain valid information (valid: 1, invalid: 0). Default is 0 (invalid).*/
} mavlink_relative_navigation_t;

#define MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN 41
#define MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN 41
#define MAVLINK_MSG_ID_535_LEN 41
#define MAVLINK_MSG_ID_535_MIN_LEN 41

#define MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC 100
#define MAVLINK_MSG_ID_535_CRC 100



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RELATIVE_NAVIGATION { \
    535, \
    "RELATIVE_NAVIGATION", \
    18, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_relative_navigation_t, time_usec) }, \
         { "rel_pos_n", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_relative_navigation_t, rel_pos_n) }, \
         { "rel_pos_e", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_relative_navigation_t, rel_pos_e) }, \
         { "rel_pos_d", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_relative_navigation_t, rel_pos_d) }, \
         { "rel_vel_n", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_relative_navigation_t, rel_vel_n) }, \
         { "rel_vel_e", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_relative_navigation_t, rel_vel_e) }, \
         { "rel_vel_d", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_relative_navigation_t, rel_vel_d) }, \
         { "rel_acc_n", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_relative_navigation_t, rel_acc_n) }, \
         { "rel_acc_e", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_relative_navigation_t, rel_acc_e) }, \
         { "rel_acc_d", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_relative_navigation_t, rel_acc_d) }, \
         { "rel_pos_n_var", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_relative_navigation_t, rel_pos_n_var) }, \
         { "rel_pos_e_var", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_relative_navigation_t, rel_pos_e_var) }, \
         { "rel_pos_d_var", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_relative_navigation_t, rel_pos_d_var) }, \
         { "parallel", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_relative_navigation_t, parallel) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_relative_navigation_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_relative_navigation_t, pitch) }, \
         { "delta_hdg", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_relative_navigation_t, delta_hdg) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_relative_navigation_t, valid) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RELATIVE_NAVIGATION { \
    "RELATIVE_NAVIGATION", \
    18, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_relative_navigation_t, time_usec) }, \
         { "rel_pos_n", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_relative_navigation_t, rel_pos_n) }, \
         { "rel_pos_e", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_relative_navigation_t, rel_pos_e) }, \
         { "rel_pos_d", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_relative_navigation_t, rel_pos_d) }, \
         { "rel_vel_n", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_relative_navigation_t, rel_vel_n) }, \
         { "rel_vel_e", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_relative_navigation_t, rel_vel_e) }, \
         { "rel_vel_d", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_relative_navigation_t, rel_vel_d) }, \
         { "rel_acc_n", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_relative_navigation_t, rel_acc_n) }, \
         { "rel_acc_e", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_relative_navigation_t, rel_acc_e) }, \
         { "rel_acc_d", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_relative_navigation_t, rel_acc_d) }, \
         { "rel_pos_n_var", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_relative_navigation_t, rel_pos_n_var) }, \
         { "rel_pos_e_var", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_relative_navigation_t, rel_pos_e_var) }, \
         { "rel_pos_d_var", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_relative_navigation_t, rel_pos_d_var) }, \
         { "parallel", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_relative_navigation_t, parallel) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_relative_navigation_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_relative_navigation_t, pitch) }, \
         { "delta_hdg", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_relative_navigation_t, delta_hdg) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_relative_navigation_t, valid) }, \
         } \
}
#endif

/**
 * @brief Pack a relative_navigation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param rel_pos_n [cm] Relative north position in NED earth-fixed frame.
 * @param rel_pos_e [cm] Relative east position in NED earth-fixed frame.
 * @param rel_pos_d [cm] Relative down position in NED earth-fixed frame.
 * @param rel_vel_n [cm/s] Relative north velocity in NED earth-fixed frame.
 * @param rel_vel_e [cm/s] Relative east velocity in NED earth-fixed frame.
 * @param rel_vel_d [cm/s] Relative down velocity in NED earth-fixed frame.
 * @param rel_acc_n [mm/s2] Relative north acceleration in NED earth-fixed frame.
 * @param rel_acc_e [mm/s2] Relative east acceleration in NED earth-fixed frame.
 * @param rel_acc_d [mm/s2] Relative down acceleration in NED earth-fixed frame.
 * @param rel_pos_n_var [cm] Relative north position variance in NED earth-fixed frame.
 * @param rel_pos_e_var [cm] Relative east position variance in NED earth-fixed frame.
 * @param rel_pos_d_var [cm] Relative down position variance in NED earth-fixed frame.
 * @param parallel [mrad] Angle between vehicle x,y-plane and coop x,y-plane to indicate attitude alignment.
 * @param roll [mrad] Roll angle between vehicle x,y-plane and coop x,y-plane.
 * @param pitch [mrad] Pitch angle between vehicle x,y-plane and coop x,y-plane.
 * @param delta_hdg [mrad] Difference between the headings of vehicle and landing platform.
 * @param valid  Boolean indicating whether the fields contain valid information (valid: 1, invalid: 0). Default is 0 (invalid).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_relative_navigation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, int16_t rel_pos_n, int16_t rel_pos_e, int16_t rel_pos_d, int16_t rel_vel_n, int16_t rel_vel_e, int16_t rel_vel_d, int16_t rel_acc_n, int16_t rel_acc_e, int16_t rel_acc_d, int16_t rel_pos_n_var, int16_t rel_pos_e_var, int16_t rel_pos_d_var, int16_t parallel, int16_t roll, int16_t pitch, int16_t delta_hdg, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 8, rel_pos_n);
    _mav_put_int16_t(buf, 10, rel_pos_e);
    _mav_put_int16_t(buf, 12, rel_pos_d);
    _mav_put_int16_t(buf, 14, rel_vel_n);
    _mav_put_int16_t(buf, 16, rel_vel_e);
    _mav_put_int16_t(buf, 18, rel_vel_d);
    _mav_put_int16_t(buf, 20, rel_acc_n);
    _mav_put_int16_t(buf, 22, rel_acc_e);
    _mav_put_int16_t(buf, 24, rel_acc_d);
    _mav_put_int16_t(buf, 26, rel_pos_n_var);
    _mav_put_int16_t(buf, 28, rel_pos_e_var);
    _mav_put_int16_t(buf, 30, rel_pos_d_var);
    _mav_put_int16_t(buf, 32, parallel);
    _mav_put_int16_t(buf, 34, roll);
    _mav_put_int16_t(buf, 36, pitch);
    _mav_put_int16_t(buf, 38, delta_hdg);
    _mav_put_uint8_t(buf, 40, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN);
#else
    mavlink_relative_navigation_t packet;
    packet.time_usec = time_usec;
    packet.rel_pos_n = rel_pos_n;
    packet.rel_pos_e = rel_pos_e;
    packet.rel_pos_d = rel_pos_d;
    packet.rel_vel_n = rel_vel_n;
    packet.rel_vel_e = rel_vel_e;
    packet.rel_vel_d = rel_vel_d;
    packet.rel_acc_n = rel_acc_n;
    packet.rel_acc_e = rel_acc_e;
    packet.rel_acc_d = rel_acc_d;
    packet.rel_pos_n_var = rel_pos_n_var;
    packet.rel_pos_e_var = rel_pos_e_var;
    packet.rel_pos_d_var = rel_pos_d_var;
    packet.parallel = parallel;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.delta_hdg = delta_hdg;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RELATIVE_NAVIGATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC);
}

/**
 * @brief Pack a relative_navigation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param rel_pos_n [cm] Relative north position in NED earth-fixed frame.
 * @param rel_pos_e [cm] Relative east position in NED earth-fixed frame.
 * @param rel_pos_d [cm] Relative down position in NED earth-fixed frame.
 * @param rel_vel_n [cm/s] Relative north velocity in NED earth-fixed frame.
 * @param rel_vel_e [cm/s] Relative east velocity in NED earth-fixed frame.
 * @param rel_vel_d [cm/s] Relative down velocity in NED earth-fixed frame.
 * @param rel_acc_n [mm/s2] Relative north acceleration in NED earth-fixed frame.
 * @param rel_acc_e [mm/s2] Relative east acceleration in NED earth-fixed frame.
 * @param rel_acc_d [mm/s2] Relative down acceleration in NED earth-fixed frame.
 * @param rel_pos_n_var [cm] Relative north position variance in NED earth-fixed frame.
 * @param rel_pos_e_var [cm] Relative east position variance in NED earth-fixed frame.
 * @param rel_pos_d_var [cm] Relative down position variance in NED earth-fixed frame.
 * @param parallel [mrad] Angle between vehicle x,y-plane and coop x,y-plane to indicate attitude alignment.
 * @param roll [mrad] Roll angle between vehicle x,y-plane and coop x,y-plane.
 * @param pitch [mrad] Pitch angle between vehicle x,y-plane and coop x,y-plane.
 * @param delta_hdg [mrad] Difference between the headings of vehicle and landing platform.
 * @param valid  Boolean indicating whether the fields contain valid information (valid: 1, invalid: 0). Default is 0 (invalid).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_relative_navigation_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, int16_t rel_pos_n, int16_t rel_pos_e, int16_t rel_pos_d, int16_t rel_vel_n, int16_t rel_vel_e, int16_t rel_vel_d, int16_t rel_acc_n, int16_t rel_acc_e, int16_t rel_acc_d, int16_t rel_pos_n_var, int16_t rel_pos_e_var, int16_t rel_pos_d_var, int16_t parallel, int16_t roll, int16_t pitch, int16_t delta_hdg, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 8, rel_pos_n);
    _mav_put_int16_t(buf, 10, rel_pos_e);
    _mav_put_int16_t(buf, 12, rel_pos_d);
    _mav_put_int16_t(buf, 14, rel_vel_n);
    _mav_put_int16_t(buf, 16, rel_vel_e);
    _mav_put_int16_t(buf, 18, rel_vel_d);
    _mav_put_int16_t(buf, 20, rel_acc_n);
    _mav_put_int16_t(buf, 22, rel_acc_e);
    _mav_put_int16_t(buf, 24, rel_acc_d);
    _mav_put_int16_t(buf, 26, rel_pos_n_var);
    _mav_put_int16_t(buf, 28, rel_pos_e_var);
    _mav_put_int16_t(buf, 30, rel_pos_d_var);
    _mav_put_int16_t(buf, 32, parallel);
    _mav_put_int16_t(buf, 34, roll);
    _mav_put_int16_t(buf, 36, pitch);
    _mav_put_int16_t(buf, 38, delta_hdg);
    _mav_put_uint8_t(buf, 40, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN);
#else
    mavlink_relative_navigation_t packet;
    packet.time_usec = time_usec;
    packet.rel_pos_n = rel_pos_n;
    packet.rel_pos_e = rel_pos_e;
    packet.rel_pos_d = rel_pos_d;
    packet.rel_vel_n = rel_vel_n;
    packet.rel_vel_e = rel_vel_e;
    packet.rel_vel_d = rel_vel_d;
    packet.rel_acc_n = rel_acc_n;
    packet.rel_acc_e = rel_acc_e;
    packet.rel_acc_d = rel_acc_d;
    packet.rel_pos_n_var = rel_pos_n_var;
    packet.rel_pos_e_var = rel_pos_e_var;
    packet.rel_pos_d_var = rel_pos_d_var;
    packet.parallel = parallel;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.delta_hdg = delta_hdg;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RELATIVE_NAVIGATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN);
#endif
}

/**
 * @brief Pack a relative_navigation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param rel_pos_n [cm] Relative north position in NED earth-fixed frame.
 * @param rel_pos_e [cm] Relative east position in NED earth-fixed frame.
 * @param rel_pos_d [cm] Relative down position in NED earth-fixed frame.
 * @param rel_vel_n [cm/s] Relative north velocity in NED earth-fixed frame.
 * @param rel_vel_e [cm/s] Relative east velocity in NED earth-fixed frame.
 * @param rel_vel_d [cm/s] Relative down velocity in NED earth-fixed frame.
 * @param rel_acc_n [mm/s2] Relative north acceleration in NED earth-fixed frame.
 * @param rel_acc_e [mm/s2] Relative east acceleration in NED earth-fixed frame.
 * @param rel_acc_d [mm/s2] Relative down acceleration in NED earth-fixed frame.
 * @param rel_pos_n_var [cm] Relative north position variance in NED earth-fixed frame.
 * @param rel_pos_e_var [cm] Relative east position variance in NED earth-fixed frame.
 * @param rel_pos_d_var [cm] Relative down position variance in NED earth-fixed frame.
 * @param parallel [mrad] Angle between vehicle x,y-plane and coop x,y-plane to indicate attitude alignment.
 * @param roll [mrad] Roll angle between vehicle x,y-plane and coop x,y-plane.
 * @param pitch [mrad] Pitch angle between vehicle x,y-plane and coop x,y-plane.
 * @param delta_hdg [mrad] Difference between the headings of vehicle and landing platform.
 * @param valid  Boolean indicating whether the fields contain valid information (valid: 1, invalid: 0). Default is 0 (invalid).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_relative_navigation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,int16_t rel_pos_n,int16_t rel_pos_e,int16_t rel_pos_d,int16_t rel_vel_n,int16_t rel_vel_e,int16_t rel_vel_d,int16_t rel_acc_n,int16_t rel_acc_e,int16_t rel_acc_d,int16_t rel_pos_n_var,int16_t rel_pos_e_var,int16_t rel_pos_d_var,int16_t parallel,int16_t roll,int16_t pitch,int16_t delta_hdg,uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 8, rel_pos_n);
    _mav_put_int16_t(buf, 10, rel_pos_e);
    _mav_put_int16_t(buf, 12, rel_pos_d);
    _mav_put_int16_t(buf, 14, rel_vel_n);
    _mav_put_int16_t(buf, 16, rel_vel_e);
    _mav_put_int16_t(buf, 18, rel_vel_d);
    _mav_put_int16_t(buf, 20, rel_acc_n);
    _mav_put_int16_t(buf, 22, rel_acc_e);
    _mav_put_int16_t(buf, 24, rel_acc_d);
    _mav_put_int16_t(buf, 26, rel_pos_n_var);
    _mav_put_int16_t(buf, 28, rel_pos_e_var);
    _mav_put_int16_t(buf, 30, rel_pos_d_var);
    _mav_put_int16_t(buf, 32, parallel);
    _mav_put_int16_t(buf, 34, roll);
    _mav_put_int16_t(buf, 36, pitch);
    _mav_put_int16_t(buf, 38, delta_hdg);
    _mav_put_uint8_t(buf, 40, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN);
#else
    mavlink_relative_navigation_t packet;
    packet.time_usec = time_usec;
    packet.rel_pos_n = rel_pos_n;
    packet.rel_pos_e = rel_pos_e;
    packet.rel_pos_d = rel_pos_d;
    packet.rel_vel_n = rel_vel_n;
    packet.rel_vel_e = rel_vel_e;
    packet.rel_vel_d = rel_vel_d;
    packet.rel_acc_n = rel_acc_n;
    packet.rel_acc_e = rel_acc_e;
    packet.rel_acc_d = rel_acc_d;
    packet.rel_pos_n_var = rel_pos_n_var;
    packet.rel_pos_e_var = rel_pos_e_var;
    packet.rel_pos_d_var = rel_pos_d_var;
    packet.parallel = parallel;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.delta_hdg = delta_hdg;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RELATIVE_NAVIGATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC);
}

/**
 * @brief Encode a relative_navigation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param relative_navigation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_relative_navigation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_relative_navigation_t* relative_navigation)
{
    return mavlink_msg_relative_navigation_pack(system_id, component_id, msg, relative_navigation->time_usec, relative_navigation->rel_pos_n, relative_navigation->rel_pos_e, relative_navigation->rel_pos_d, relative_navigation->rel_vel_n, relative_navigation->rel_vel_e, relative_navigation->rel_vel_d, relative_navigation->rel_acc_n, relative_navigation->rel_acc_e, relative_navigation->rel_acc_d, relative_navigation->rel_pos_n_var, relative_navigation->rel_pos_e_var, relative_navigation->rel_pos_d_var, relative_navigation->parallel, relative_navigation->roll, relative_navigation->pitch, relative_navigation->delta_hdg, relative_navigation->valid);
}

/**
 * @brief Encode a relative_navigation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param relative_navigation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_relative_navigation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_relative_navigation_t* relative_navigation)
{
    return mavlink_msg_relative_navigation_pack_chan(system_id, component_id, chan, msg, relative_navigation->time_usec, relative_navigation->rel_pos_n, relative_navigation->rel_pos_e, relative_navigation->rel_pos_d, relative_navigation->rel_vel_n, relative_navigation->rel_vel_e, relative_navigation->rel_vel_d, relative_navigation->rel_acc_n, relative_navigation->rel_acc_e, relative_navigation->rel_acc_d, relative_navigation->rel_pos_n_var, relative_navigation->rel_pos_e_var, relative_navigation->rel_pos_d_var, relative_navigation->parallel, relative_navigation->roll, relative_navigation->pitch, relative_navigation->delta_hdg, relative_navigation->valid);
}

/**
 * @brief Encode a relative_navigation struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param relative_navigation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_relative_navigation_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_relative_navigation_t* relative_navigation)
{
    return mavlink_msg_relative_navigation_pack_status(system_id, component_id, _status, msg,  relative_navigation->time_usec, relative_navigation->rel_pos_n, relative_navigation->rel_pos_e, relative_navigation->rel_pos_d, relative_navigation->rel_vel_n, relative_navigation->rel_vel_e, relative_navigation->rel_vel_d, relative_navigation->rel_acc_n, relative_navigation->rel_acc_e, relative_navigation->rel_acc_d, relative_navigation->rel_pos_n_var, relative_navigation->rel_pos_e_var, relative_navigation->rel_pos_d_var, relative_navigation->parallel, relative_navigation->roll, relative_navigation->pitch, relative_navigation->delta_hdg, relative_navigation->valid);
}

/**
 * @brief Send a relative_navigation message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param rel_pos_n [cm] Relative north position in NED earth-fixed frame.
 * @param rel_pos_e [cm] Relative east position in NED earth-fixed frame.
 * @param rel_pos_d [cm] Relative down position in NED earth-fixed frame.
 * @param rel_vel_n [cm/s] Relative north velocity in NED earth-fixed frame.
 * @param rel_vel_e [cm/s] Relative east velocity in NED earth-fixed frame.
 * @param rel_vel_d [cm/s] Relative down velocity in NED earth-fixed frame.
 * @param rel_acc_n [mm/s2] Relative north acceleration in NED earth-fixed frame.
 * @param rel_acc_e [mm/s2] Relative east acceleration in NED earth-fixed frame.
 * @param rel_acc_d [mm/s2] Relative down acceleration in NED earth-fixed frame.
 * @param rel_pos_n_var [cm] Relative north position variance in NED earth-fixed frame.
 * @param rel_pos_e_var [cm] Relative east position variance in NED earth-fixed frame.
 * @param rel_pos_d_var [cm] Relative down position variance in NED earth-fixed frame.
 * @param parallel [mrad] Angle between vehicle x,y-plane and coop x,y-plane to indicate attitude alignment.
 * @param roll [mrad] Roll angle between vehicle x,y-plane and coop x,y-plane.
 * @param pitch [mrad] Pitch angle between vehicle x,y-plane and coop x,y-plane.
 * @param delta_hdg [mrad] Difference between the headings of vehicle and landing platform.
 * @param valid  Boolean indicating whether the fields contain valid information (valid: 1, invalid: 0). Default is 0 (invalid).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_relative_navigation_send(mavlink_channel_t chan, uint64_t time_usec, int16_t rel_pos_n, int16_t rel_pos_e, int16_t rel_pos_d, int16_t rel_vel_n, int16_t rel_vel_e, int16_t rel_vel_d, int16_t rel_acc_n, int16_t rel_acc_e, int16_t rel_acc_d, int16_t rel_pos_n_var, int16_t rel_pos_e_var, int16_t rel_pos_d_var, int16_t parallel, int16_t roll, int16_t pitch, int16_t delta_hdg, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 8, rel_pos_n);
    _mav_put_int16_t(buf, 10, rel_pos_e);
    _mav_put_int16_t(buf, 12, rel_pos_d);
    _mav_put_int16_t(buf, 14, rel_vel_n);
    _mav_put_int16_t(buf, 16, rel_vel_e);
    _mav_put_int16_t(buf, 18, rel_vel_d);
    _mav_put_int16_t(buf, 20, rel_acc_n);
    _mav_put_int16_t(buf, 22, rel_acc_e);
    _mav_put_int16_t(buf, 24, rel_acc_d);
    _mav_put_int16_t(buf, 26, rel_pos_n_var);
    _mav_put_int16_t(buf, 28, rel_pos_e_var);
    _mav_put_int16_t(buf, 30, rel_pos_d_var);
    _mav_put_int16_t(buf, 32, parallel);
    _mav_put_int16_t(buf, 34, roll);
    _mav_put_int16_t(buf, 36, pitch);
    _mav_put_int16_t(buf, 38, delta_hdg);
    _mav_put_uint8_t(buf, 40, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RELATIVE_NAVIGATION, buf, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC);
#else
    mavlink_relative_navigation_t packet;
    packet.time_usec = time_usec;
    packet.rel_pos_n = rel_pos_n;
    packet.rel_pos_e = rel_pos_e;
    packet.rel_pos_d = rel_pos_d;
    packet.rel_vel_n = rel_vel_n;
    packet.rel_vel_e = rel_vel_e;
    packet.rel_vel_d = rel_vel_d;
    packet.rel_acc_n = rel_acc_n;
    packet.rel_acc_e = rel_acc_e;
    packet.rel_acc_d = rel_acc_d;
    packet.rel_pos_n_var = rel_pos_n_var;
    packet.rel_pos_e_var = rel_pos_e_var;
    packet.rel_pos_d_var = rel_pos_d_var;
    packet.parallel = parallel;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.delta_hdg = delta_hdg;
    packet.valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RELATIVE_NAVIGATION, (const char *)&packet, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC);
#endif
}

/**
 * @brief Send a relative_navigation message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_relative_navigation_send_struct(mavlink_channel_t chan, const mavlink_relative_navigation_t* relative_navigation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_relative_navigation_send(chan, relative_navigation->time_usec, relative_navigation->rel_pos_n, relative_navigation->rel_pos_e, relative_navigation->rel_pos_d, relative_navigation->rel_vel_n, relative_navigation->rel_vel_e, relative_navigation->rel_vel_d, relative_navigation->rel_acc_n, relative_navigation->rel_acc_e, relative_navigation->rel_acc_d, relative_navigation->rel_pos_n_var, relative_navigation->rel_pos_e_var, relative_navigation->rel_pos_d_var, relative_navigation->parallel, relative_navigation->roll, relative_navigation->pitch, relative_navigation->delta_hdg, relative_navigation->valid);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RELATIVE_NAVIGATION, (const char *)relative_navigation, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_relative_navigation_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int16_t rel_pos_n, int16_t rel_pos_e, int16_t rel_pos_d, int16_t rel_vel_n, int16_t rel_vel_e, int16_t rel_vel_d, int16_t rel_acc_n, int16_t rel_acc_e, int16_t rel_acc_d, int16_t rel_pos_n_var, int16_t rel_pos_e_var, int16_t rel_pos_d_var, int16_t parallel, int16_t roll, int16_t pitch, int16_t delta_hdg, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 8, rel_pos_n);
    _mav_put_int16_t(buf, 10, rel_pos_e);
    _mav_put_int16_t(buf, 12, rel_pos_d);
    _mav_put_int16_t(buf, 14, rel_vel_n);
    _mav_put_int16_t(buf, 16, rel_vel_e);
    _mav_put_int16_t(buf, 18, rel_vel_d);
    _mav_put_int16_t(buf, 20, rel_acc_n);
    _mav_put_int16_t(buf, 22, rel_acc_e);
    _mav_put_int16_t(buf, 24, rel_acc_d);
    _mav_put_int16_t(buf, 26, rel_pos_n_var);
    _mav_put_int16_t(buf, 28, rel_pos_e_var);
    _mav_put_int16_t(buf, 30, rel_pos_d_var);
    _mav_put_int16_t(buf, 32, parallel);
    _mav_put_int16_t(buf, 34, roll);
    _mav_put_int16_t(buf, 36, pitch);
    _mav_put_int16_t(buf, 38, delta_hdg);
    _mav_put_uint8_t(buf, 40, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RELATIVE_NAVIGATION, buf, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC);
#else
    mavlink_relative_navigation_t *packet = (mavlink_relative_navigation_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->rel_pos_n = rel_pos_n;
    packet->rel_pos_e = rel_pos_e;
    packet->rel_pos_d = rel_pos_d;
    packet->rel_vel_n = rel_vel_n;
    packet->rel_vel_e = rel_vel_e;
    packet->rel_vel_d = rel_vel_d;
    packet->rel_acc_n = rel_acc_n;
    packet->rel_acc_e = rel_acc_e;
    packet->rel_acc_d = rel_acc_d;
    packet->rel_pos_n_var = rel_pos_n_var;
    packet->rel_pos_e_var = rel_pos_e_var;
    packet->rel_pos_d_var = rel_pos_d_var;
    packet->parallel = parallel;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->delta_hdg = delta_hdg;
    packet->valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RELATIVE_NAVIGATION, (const char *)packet, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_CRC);
#endif
}
#endif

#endif

// MESSAGE RELATIVE_NAVIGATION UNPACKING


/**
 * @brief Get field time_usec from relative_navigation message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_relative_navigation_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field rel_pos_n from relative_navigation message
 *
 * @return [cm] Relative north position in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_pos_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field rel_pos_e from relative_navigation message
 *
 * @return [cm] Relative east position in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_pos_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field rel_pos_d from relative_navigation message
 *
 * @return [cm] Relative down position in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_pos_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field rel_vel_n from relative_navigation message
 *
 * @return [cm/s] Relative north velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_vel_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field rel_vel_e from relative_navigation message
 *
 * @return [cm/s] Relative east velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_vel_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field rel_vel_d from relative_navigation message
 *
 * @return [cm/s] Relative down velocity in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_vel_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field rel_acc_n from relative_navigation message
 *
 * @return [mm/s2] Relative north acceleration in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_acc_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field rel_acc_e from relative_navigation message
 *
 * @return [mm/s2] Relative east acceleration in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_acc_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field rel_acc_d from relative_navigation message
 *
 * @return [mm/s2] Relative down acceleration in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_acc_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field rel_pos_n_var from relative_navigation message
 *
 * @return [cm] Relative north position variance in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_pos_n_var(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field rel_pos_e_var from relative_navigation message
 *
 * @return [cm] Relative east position variance in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_pos_e_var(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field rel_pos_d_var from relative_navigation message
 *
 * @return [cm] Relative down position variance in NED earth-fixed frame.
 */
static inline int16_t mavlink_msg_relative_navigation_get_rel_pos_d_var(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field parallel from relative_navigation message
 *
 * @return [mrad] Angle between vehicle x,y-plane and coop x,y-plane to indicate attitude alignment.
 */
static inline int16_t mavlink_msg_relative_navigation_get_parallel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field roll from relative_navigation message
 *
 * @return [mrad] Roll angle between vehicle x,y-plane and coop x,y-plane.
 */
static inline int16_t mavlink_msg_relative_navigation_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field pitch from relative_navigation message
 *
 * @return [mrad] Pitch angle between vehicle x,y-plane and coop x,y-plane.
 */
static inline int16_t mavlink_msg_relative_navigation_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field delta_hdg from relative_navigation message
 *
 * @return [mrad] Difference between the headings of vehicle and landing platform.
 */
static inline int16_t mavlink_msg_relative_navigation_get_delta_hdg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field valid from relative_navigation message
 *
 * @return  Boolean indicating whether the fields contain valid information (valid: 1, invalid: 0). Default is 0 (invalid).
 */
static inline uint8_t mavlink_msg_relative_navigation_get_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Decode a relative_navigation message into a struct
 *
 * @param msg The message to decode
 * @param relative_navigation C-struct to decode the message contents into
 */
static inline void mavlink_msg_relative_navigation_decode(const mavlink_message_t* msg, mavlink_relative_navigation_t* relative_navigation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    relative_navigation->time_usec = mavlink_msg_relative_navigation_get_time_usec(msg);
    relative_navigation->rel_pos_n = mavlink_msg_relative_navigation_get_rel_pos_n(msg);
    relative_navigation->rel_pos_e = mavlink_msg_relative_navigation_get_rel_pos_e(msg);
    relative_navigation->rel_pos_d = mavlink_msg_relative_navigation_get_rel_pos_d(msg);
    relative_navigation->rel_vel_n = mavlink_msg_relative_navigation_get_rel_vel_n(msg);
    relative_navigation->rel_vel_e = mavlink_msg_relative_navigation_get_rel_vel_e(msg);
    relative_navigation->rel_vel_d = mavlink_msg_relative_navigation_get_rel_vel_d(msg);
    relative_navigation->rel_acc_n = mavlink_msg_relative_navigation_get_rel_acc_n(msg);
    relative_navigation->rel_acc_e = mavlink_msg_relative_navigation_get_rel_acc_e(msg);
    relative_navigation->rel_acc_d = mavlink_msg_relative_navigation_get_rel_acc_d(msg);
    relative_navigation->rel_pos_n_var = mavlink_msg_relative_navigation_get_rel_pos_n_var(msg);
    relative_navigation->rel_pos_e_var = mavlink_msg_relative_navigation_get_rel_pos_e_var(msg);
    relative_navigation->rel_pos_d_var = mavlink_msg_relative_navigation_get_rel_pos_d_var(msg);
    relative_navigation->parallel = mavlink_msg_relative_navigation_get_parallel(msg);
    relative_navigation->roll = mavlink_msg_relative_navigation_get_roll(msg);
    relative_navigation->pitch = mavlink_msg_relative_navigation_get_pitch(msg);
    relative_navigation->delta_hdg = mavlink_msg_relative_navigation_get_delta_hdg(msg);
    relative_navigation->valid = mavlink_msg_relative_navigation_get_valid(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN? msg->len : MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN;
        memset(relative_navigation, 0, MAVLINK_MSG_ID_RELATIVE_NAVIGATION_LEN);
    memcpy(relative_navigation, _MAV_PAYLOAD(msg), len);
#endif
}
