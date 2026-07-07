#pragma once
// MESSAGE GNSS_GLNOASS_EPHEMERIS PACKING

#define MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS 512


typedef struct __mavlink_gnss_glnoass_ephemeris_t {
 double pos[3]; /*< [m] Satellite position (ecef) (m)*/
 double vel[3]; /*< [m/s] Satellite velocity (ecef) (m/s)*/
 double acc[3]; /*< [m/s^2] Satellite acceleration (ecef) (m/s^2)*/
 double taun; /*< [s] SV clock bias (s)*/
 double gamn; /*<  relative freq bias*/
 double dtaun; /*< [s] delay between L1 and L2 (s)*/
 uint32_t toe; /*< [s] Epoch of Ephemeris*/
 uint32_t tof; /*< [s] Message frame time*/
 uint16_t iode; /*<  Issue of Data (Ephemeris)*/
 uint16_t frq; /*<  Satellite frequency number*/
 uint16_t sva; /*< [m] SV accuracy (URA index)*/
 uint16_t age; /*<  Age of Operation*/
 uint8_t sat; /*<  GNSS-System Crossover Unique SAT-Number*/
 uint8_t svh; /*<  SV health (0:ok)*/
} mavlink_gnss_glnoass_ephemeris_t;

#define MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN 114
#define MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN 114
#define MAVLINK_MSG_ID_512_LEN 114
#define MAVLINK_MSG_ID_512_MIN_LEN 114

#define MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC 195
#define MAVLINK_MSG_ID_512_CRC 195

#define MAVLINK_MSG_GNSS_GLNOASS_EPHEMERIS_FIELD_POS_LEN 3
#define MAVLINK_MSG_GNSS_GLNOASS_EPHEMERIS_FIELD_VEL_LEN 3
#define MAVLINK_MSG_GNSS_GLNOASS_EPHEMERIS_FIELD_ACC_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GNSS_GLNOASS_EPHEMERIS { \
    512, \
    "GNSS_GLNOASS_EPHEMERIS", \
    14, \
    {  { "sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 112, offsetof(mavlink_gnss_glnoass_ephemeris_t, sat) }, \
         { "iode", NULL, MAVLINK_TYPE_UINT16_T, 0, 104, offsetof(mavlink_gnss_glnoass_ephemeris_t, iode) }, \
         { "frq", NULL, MAVLINK_TYPE_UINT16_T, 0, 106, offsetof(mavlink_gnss_glnoass_ephemeris_t, frq) }, \
         { "sva", NULL, MAVLINK_TYPE_UINT16_T, 0, 108, offsetof(mavlink_gnss_glnoass_ephemeris_t, sva) }, \
         { "svh", NULL, MAVLINK_TYPE_UINT8_T, 0, 113, offsetof(mavlink_gnss_glnoass_ephemeris_t, svh) }, \
         { "age", NULL, MAVLINK_TYPE_UINT16_T, 0, 110, offsetof(mavlink_gnss_glnoass_ephemeris_t, age) }, \
         { "toe", NULL, MAVLINK_TYPE_UINT32_T, 0, 96, offsetof(mavlink_gnss_glnoass_ephemeris_t, toe) }, \
         { "tof", NULL, MAVLINK_TYPE_UINT32_T, 0, 100, offsetof(mavlink_gnss_glnoass_ephemeris_t, tof) }, \
         { "pos", NULL, MAVLINK_TYPE_DOUBLE, 3, 0, offsetof(mavlink_gnss_glnoass_ephemeris_t, pos) }, \
         { "vel", NULL, MAVLINK_TYPE_DOUBLE, 3, 24, offsetof(mavlink_gnss_glnoass_ephemeris_t, vel) }, \
         { "acc", NULL, MAVLINK_TYPE_DOUBLE, 3, 48, offsetof(mavlink_gnss_glnoass_ephemeris_t, acc) }, \
         { "taun", NULL, MAVLINK_TYPE_DOUBLE, 0, 72, offsetof(mavlink_gnss_glnoass_ephemeris_t, taun) }, \
         { "gamn", NULL, MAVLINK_TYPE_DOUBLE, 0, 80, offsetof(mavlink_gnss_glnoass_ephemeris_t, gamn) }, \
         { "dtaun", NULL, MAVLINK_TYPE_DOUBLE, 0, 88, offsetof(mavlink_gnss_glnoass_ephemeris_t, dtaun) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GNSS_GLNOASS_EPHEMERIS { \
    "GNSS_GLNOASS_EPHEMERIS", \
    14, \
    {  { "sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 112, offsetof(mavlink_gnss_glnoass_ephemeris_t, sat) }, \
         { "iode", NULL, MAVLINK_TYPE_UINT16_T, 0, 104, offsetof(mavlink_gnss_glnoass_ephemeris_t, iode) }, \
         { "frq", NULL, MAVLINK_TYPE_UINT16_T, 0, 106, offsetof(mavlink_gnss_glnoass_ephemeris_t, frq) }, \
         { "sva", NULL, MAVLINK_TYPE_UINT16_T, 0, 108, offsetof(mavlink_gnss_glnoass_ephemeris_t, sva) }, \
         { "svh", NULL, MAVLINK_TYPE_UINT8_T, 0, 113, offsetof(mavlink_gnss_glnoass_ephemeris_t, svh) }, \
         { "age", NULL, MAVLINK_TYPE_UINT16_T, 0, 110, offsetof(mavlink_gnss_glnoass_ephemeris_t, age) }, \
         { "toe", NULL, MAVLINK_TYPE_UINT32_T, 0, 96, offsetof(mavlink_gnss_glnoass_ephemeris_t, toe) }, \
         { "tof", NULL, MAVLINK_TYPE_UINT32_T, 0, 100, offsetof(mavlink_gnss_glnoass_ephemeris_t, tof) }, \
         { "pos", NULL, MAVLINK_TYPE_DOUBLE, 3, 0, offsetof(mavlink_gnss_glnoass_ephemeris_t, pos) }, \
         { "vel", NULL, MAVLINK_TYPE_DOUBLE, 3, 24, offsetof(mavlink_gnss_glnoass_ephemeris_t, vel) }, \
         { "acc", NULL, MAVLINK_TYPE_DOUBLE, 3, 48, offsetof(mavlink_gnss_glnoass_ephemeris_t, acc) }, \
         { "taun", NULL, MAVLINK_TYPE_DOUBLE, 0, 72, offsetof(mavlink_gnss_glnoass_ephemeris_t, taun) }, \
         { "gamn", NULL, MAVLINK_TYPE_DOUBLE, 0, 80, offsetof(mavlink_gnss_glnoass_ephemeris_t, gamn) }, \
         { "dtaun", NULL, MAVLINK_TYPE_DOUBLE, 0, 88, offsetof(mavlink_gnss_glnoass_ephemeris_t, dtaun) }, \
         } \
}
#endif

/**
 * @brief Pack a gnss_glnoass_ephemeris message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param iode  Issue of Data (Ephemeris)
 * @param frq  Satellite frequency number
 * @param sva [m] SV accuracy (URA index)
 * @param svh  SV health (0:ok)
 * @param age  Age of Operation
 * @param toe [s] Epoch of Ephemeris
 * @param tof [s] Message frame time
 * @param pos [m] Satellite position (ecef) (m)
 * @param vel [m/s] Satellite velocity (ecef) (m/s)
 * @param acc [m/s^2] Satellite acceleration (ecef) (m/s^2)
 * @param taun [s] SV clock bias (s)
 * @param gamn  relative freq bias
 * @param dtaun [s] delay between L1 and L2 (s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t sat, uint16_t iode, uint16_t frq, uint16_t sva, uint8_t svh, uint16_t age, uint32_t toe, uint32_t tof, const double *pos, const double *vel, const double *acc, double taun, double gamn, double dtaun)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN];
    _mav_put_double(buf, 72, taun);
    _mav_put_double(buf, 80, gamn);
    _mav_put_double(buf, 88, dtaun);
    _mav_put_uint32_t(buf, 96, toe);
    _mav_put_uint32_t(buf, 100, tof);
    _mav_put_uint16_t(buf, 104, iode);
    _mav_put_uint16_t(buf, 106, frq);
    _mav_put_uint16_t(buf, 108, sva);
    _mav_put_uint16_t(buf, 110, age);
    _mav_put_uint8_t(buf, 112, sat);
    _mav_put_uint8_t(buf, 113, svh);
    _mav_put_double_array(buf, 0, pos, 3);
    _mav_put_double_array(buf, 24, vel, 3);
    _mav_put_double_array(buf, 48, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN);
#else
    mavlink_gnss_glnoass_ephemeris_t packet;
    packet.taun = taun;
    packet.gamn = gamn;
    packet.dtaun = dtaun;
    packet.toe = toe;
    packet.tof = tof;
    packet.iode = iode;
    packet.frq = frq;
    packet.sva = sva;
    packet.age = age;
    packet.sat = sat;
    packet.svh = svh;
    mav_array_assign_double(packet.pos, pos, 3);
    mav_array_assign_double(packet.vel, vel, 3);
    mav_array_assign_double(packet.acc, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC);
}

/**
 * @brief Pack a gnss_glnoass_ephemeris message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param iode  Issue of Data (Ephemeris)
 * @param frq  Satellite frequency number
 * @param sva [m] SV accuracy (URA index)
 * @param svh  SV health (0:ok)
 * @param age  Age of Operation
 * @param toe [s] Epoch of Ephemeris
 * @param tof [s] Message frame time
 * @param pos [m] Satellite position (ecef) (m)
 * @param vel [m/s] Satellite velocity (ecef) (m/s)
 * @param acc [m/s^2] Satellite acceleration (ecef) (m/s^2)
 * @param taun [s] SV clock bias (s)
 * @param gamn  relative freq bias
 * @param dtaun [s] delay between L1 and L2 (s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t sat, uint16_t iode, uint16_t frq, uint16_t sva, uint8_t svh, uint16_t age, uint32_t toe, uint32_t tof, const double *pos, const double *vel, const double *acc, double taun, double gamn, double dtaun)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN];
    _mav_put_double(buf, 72, taun);
    _mav_put_double(buf, 80, gamn);
    _mav_put_double(buf, 88, dtaun);
    _mav_put_uint32_t(buf, 96, toe);
    _mav_put_uint32_t(buf, 100, tof);
    _mav_put_uint16_t(buf, 104, iode);
    _mav_put_uint16_t(buf, 106, frq);
    _mav_put_uint16_t(buf, 108, sva);
    _mav_put_uint16_t(buf, 110, age);
    _mav_put_uint8_t(buf, 112, sat);
    _mav_put_uint8_t(buf, 113, svh);
    _mav_put_double_array(buf, 0, pos, 3);
    _mav_put_double_array(buf, 24, vel, 3);
    _mav_put_double_array(buf, 48, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN);
#else
    mavlink_gnss_glnoass_ephemeris_t packet;
    packet.taun = taun;
    packet.gamn = gamn;
    packet.dtaun = dtaun;
    packet.toe = toe;
    packet.tof = tof;
    packet.iode = iode;
    packet.frq = frq;
    packet.sva = sva;
    packet.age = age;
    packet.sat = sat;
    packet.svh = svh;
    mav_array_memcpy(packet.pos, pos, sizeof(double)*3);
    mav_array_memcpy(packet.vel, vel, sizeof(double)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(double)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN);
#endif
}

/**
 * @brief Pack a gnss_glnoass_ephemeris message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param iode  Issue of Data (Ephemeris)
 * @param frq  Satellite frequency number
 * @param sva [m] SV accuracy (URA index)
 * @param svh  SV health (0:ok)
 * @param age  Age of Operation
 * @param toe [s] Epoch of Ephemeris
 * @param tof [s] Message frame time
 * @param pos [m] Satellite position (ecef) (m)
 * @param vel [m/s] Satellite velocity (ecef) (m/s)
 * @param acc [m/s^2] Satellite acceleration (ecef) (m/s^2)
 * @param taun [s] SV clock bias (s)
 * @param gamn  relative freq bias
 * @param dtaun [s] delay between L1 and L2 (s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t sat,uint16_t iode,uint16_t frq,uint16_t sva,uint8_t svh,uint16_t age,uint32_t toe,uint32_t tof,const double *pos,const double *vel,const double *acc,double taun,double gamn,double dtaun)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN];
    _mav_put_double(buf, 72, taun);
    _mav_put_double(buf, 80, gamn);
    _mav_put_double(buf, 88, dtaun);
    _mav_put_uint32_t(buf, 96, toe);
    _mav_put_uint32_t(buf, 100, tof);
    _mav_put_uint16_t(buf, 104, iode);
    _mav_put_uint16_t(buf, 106, frq);
    _mav_put_uint16_t(buf, 108, sva);
    _mav_put_uint16_t(buf, 110, age);
    _mav_put_uint8_t(buf, 112, sat);
    _mav_put_uint8_t(buf, 113, svh);
    _mav_put_double_array(buf, 0, pos, 3);
    _mav_put_double_array(buf, 24, vel, 3);
    _mav_put_double_array(buf, 48, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN);
#else
    mavlink_gnss_glnoass_ephemeris_t packet;
    packet.taun = taun;
    packet.gamn = gamn;
    packet.dtaun = dtaun;
    packet.toe = toe;
    packet.tof = tof;
    packet.iode = iode;
    packet.frq = frq;
    packet.sva = sva;
    packet.age = age;
    packet.sat = sat;
    packet.svh = svh;
    mav_array_assign_double(packet.pos, pos, 3);
    mav_array_assign_double(packet.vel, vel, 3);
    mav_array_assign_double(packet.acc, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC);
}

/**
 * @brief Encode a gnss_glnoass_ephemeris struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gnss_glnoass_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gnss_glnoass_ephemeris_t* gnss_glnoass_ephemeris)
{
    return mavlink_msg_gnss_glnoass_ephemeris_pack(system_id, component_id, msg, gnss_glnoass_ephemeris->sat, gnss_glnoass_ephemeris->iode, gnss_glnoass_ephemeris->frq, gnss_glnoass_ephemeris->sva, gnss_glnoass_ephemeris->svh, gnss_glnoass_ephemeris->age, gnss_glnoass_ephemeris->toe, gnss_glnoass_ephemeris->tof, gnss_glnoass_ephemeris->pos, gnss_glnoass_ephemeris->vel, gnss_glnoass_ephemeris->acc, gnss_glnoass_ephemeris->taun, gnss_glnoass_ephemeris->gamn, gnss_glnoass_ephemeris->dtaun);
}

/**
 * @brief Encode a gnss_glnoass_ephemeris struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gnss_glnoass_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gnss_glnoass_ephemeris_t* gnss_glnoass_ephemeris)
{
    return mavlink_msg_gnss_glnoass_ephemeris_pack_chan(system_id, component_id, chan, msg, gnss_glnoass_ephemeris->sat, gnss_glnoass_ephemeris->iode, gnss_glnoass_ephemeris->frq, gnss_glnoass_ephemeris->sva, gnss_glnoass_ephemeris->svh, gnss_glnoass_ephemeris->age, gnss_glnoass_ephemeris->toe, gnss_glnoass_ephemeris->tof, gnss_glnoass_ephemeris->pos, gnss_glnoass_ephemeris->vel, gnss_glnoass_ephemeris->acc, gnss_glnoass_ephemeris->taun, gnss_glnoass_ephemeris->gamn, gnss_glnoass_ephemeris->dtaun);
}

/**
 * @brief Encode a gnss_glnoass_ephemeris struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gnss_glnoass_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gnss_glnoass_ephemeris_t* gnss_glnoass_ephemeris)
{
    return mavlink_msg_gnss_glnoass_ephemeris_pack_status(system_id, component_id, _status, msg,  gnss_glnoass_ephemeris->sat, gnss_glnoass_ephemeris->iode, gnss_glnoass_ephemeris->frq, gnss_glnoass_ephemeris->sva, gnss_glnoass_ephemeris->svh, gnss_glnoass_ephemeris->age, gnss_glnoass_ephemeris->toe, gnss_glnoass_ephemeris->tof, gnss_glnoass_ephemeris->pos, gnss_glnoass_ephemeris->vel, gnss_glnoass_ephemeris->acc, gnss_glnoass_ephemeris->taun, gnss_glnoass_ephemeris->gamn, gnss_glnoass_ephemeris->dtaun);
}

/**
 * @brief Send a gnss_glnoass_ephemeris message
 * @param chan MAVLink channel to send the message
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param iode  Issue of Data (Ephemeris)
 * @param frq  Satellite frequency number
 * @param sva [m] SV accuracy (URA index)
 * @param svh  SV health (0:ok)
 * @param age  Age of Operation
 * @param toe [s] Epoch of Ephemeris
 * @param tof [s] Message frame time
 * @param pos [m] Satellite position (ecef) (m)
 * @param vel [m/s] Satellite velocity (ecef) (m/s)
 * @param acc [m/s^2] Satellite acceleration (ecef) (m/s^2)
 * @param taun [s] SV clock bias (s)
 * @param gamn  relative freq bias
 * @param dtaun [s] delay between L1 and L2 (s)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gnss_glnoass_ephemeris_send(mavlink_channel_t chan, uint8_t sat, uint16_t iode, uint16_t frq, uint16_t sva, uint8_t svh, uint16_t age, uint32_t toe, uint32_t tof, const double *pos, const double *vel, const double *acc, double taun, double gamn, double dtaun)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN];
    _mav_put_double(buf, 72, taun);
    _mav_put_double(buf, 80, gamn);
    _mav_put_double(buf, 88, dtaun);
    _mav_put_uint32_t(buf, 96, toe);
    _mav_put_uint32_t(buf, 100, tof);
    _mav_put_uint16_t(buf, 104, iode);
    _mav_put_uint16_t(buf, 106, frq);
    _mav_put_uint16_t(buf, 108, sva);
    _mav_put_uint16_t(buf, 110, age);
    _mav_put_uint8_t(buf, 112, sat);
    _mav_put_uint8_t(buf, 113, svh);
    _mav_put_double_array(buf, 0, pos, 3);
    _mav_put_double_array(buf, 24, vel, 3);
    _mav_put_double_array(buf, 48, acc, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS, buf, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC);
#else
    mavlink_gnss_glnoass_ephemeris_t packet;
    packet.taun = taun;
    packet.gamn = gamn;
    packet.dtaun = dtaun;
    packet.toe = toe;
    packet.tof = tof;
    packet.iode = iode;
    packet.frq = frq;
    packet.sva = sva;
    packet.age = age;
    packet.sat = sat;
    packet.svh = svh;
    mav_array_assign_double(packet.pos, pos, 3);
    mav_array_assign_double(packet.vel, vel, 3);
    mav_array_assign_double(packet.acc, acc, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS, (const char *)&packet, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC);
#endif
}

/**
 * @brief Send a gnss_glnoass_ephemeris message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gnss_glnoass_ephemeris_send_struct(mavlink_channel_t chan, const mavlink_gnss_glnoass_ephemeris_t* gnss_glnoass_ephemeris)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_glnoass_ephemeris_send(chan, gnss_glnoass_ephemeris->sat, gnss_glnoass_ephemeris->iode, gnss_glnoass_ephemeris->frq, gnss_glnoass_ephemeris->sva, gnss_glnoass_ephemeris->svh, gnss_glnoass_ephemeris->age, gnss_glnoass_ephemeris->toe, gnss_glnoass_ephemeris->tof, gnss_glnoass_ephemeris->pos, gnss_glnoass_ephemeris->vel, gnss_glnoass_ephemeris->acc, gnss_glnoass_ephemeris->taun, gnss_glnoass_ephemeris->gamn, gnss_glnoass_ephemeris->dtaun);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS, (const char *)gnss_glnoass_ephemeris, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gnss_glnoass_ephemeris_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t sat, uint16_t iode, uint16_t frq, uint16_t sva, uint8_t svh, uint16_t age, uint32_t toe, uint32_t tof, const double *pos, const double *vel, const double *acc, double taun, double gamn, double dtaun)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_double(buf, 72, taun);
    _mav_put_double(buf, 80, gamn);
    _mav_put_double(buf, 88, dtaun);
    _mav_put_uint32_t(buf, 96, toe);
    _mav_put_uint32_t(buf, 100, tof);
    _mav_put_uint16_t(buf, 104, iode);
    _mav_put_uint16_t(buf, 106, frq);
    _mav_put_uint16_t(buf, 108, sva);
    _mav_put_uint16_t(buf, 110, age);
    _mav_put_uint8_t(buf, 112, sat);
    _mav_put_uint8_t(buf, 113, svh);
    _mav_put_double_array(buf, 0, pos, 3);
    _mav_put_double_array(buf, 24, vel, 3);
    _mav_put_double_array(buf, 48, acc, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS, buf, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC);
#else
    mavlink_gnss_glnoass_ephemeris_t *packet = (mavlink_gnss_glnoass_ephemeris_t *)msgbuf;
    packet->taun = taun;
    packet->gamn = gamn;
    packet->dtaun = dtaun;
    packet->toe = toe;
    packet->tof = tof;
    packet->iode = iode;
    packet->frq = frq;
    packet->sva = sva;
    packet->age = age;
    packet->sat = sat;
    packet->svh = svh;
    mav_array_assign_double(packet->pos, pos, 3);
    mav_array_assign_double(packet->vel, vel, 3);
    mav_array_assign_double(packet->acc, acc, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS, (const char *)packet, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_CRC);
#endif
}
#endif

#endif

// MESSAGE GNSS_GLNOASS_EPHEMERIS UNPACKING


/**
 * @brief Get field sat from gnss_glnoass_ephemeris message
 *
 * @return  GNSS-System Crossover Unique SAT-Number
 */
static inline uint8_t mavlink_msg_gnss_glnoass_ephemeris_get_sat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  112);
}

/**
 * @brief Get field iode from gnss_glnoass_ephemeris message
 *
 * @return  Issue of Data (Ephemeris)
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_get_iode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  104);
}

/**
 * @brief Get field frq from gnss_glnoass_ephemeris message
 *
 * @return  Satellite frequency number
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_get_frq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  106);
}

/**
 * @brief Get field sva from gnss_glnoass_ephemeris message
 *
 * @return [m] SV accuracy (URA index)
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_get_sva(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  108);
}

/**
 * @brief Get field svh from gnss_glnoass_ephemeris message
 *
 * @return  SV health (0:ok)
 */
static inline uint8_t mavlink_msg_gnss_glnoass_ephemeris_get_svh(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  113);
}

/**
 * @brief Get field age from gnss_glnoass_ephemeris message
 *
 * @return  Age of Operation
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_get_age(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  110);
}

/**
 * @brief Get field toe from gnss_glnoass_ephemeris message
 *
 * @return [s] Epoch of Ephemeris
 */
static inline uint32_t mavlink_msg_gnss_glnoass_ephemeris_get_toe(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  96);
}

/**
 * @brief Get field tof from gnss_glnoass_ephemeris message
 *
 * @return [s] Message frame time
 */
static inline uint32_t mavlink_msg_gnss_glnoass_ephemeris_get_tof(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  100);
}

/**
 * @brief Get field pos from gnss_glnoass_ephemeris message
 *
 * @return [m] Satellite position (ecef) (m)
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_get_pos(const mavlink_message_t* msg, double *pos)
{
    return _MAV_RETURN_double_array(msg, pos, 3,  0);
}

/**
 * @brief Get field vel from gnss_glnoass_ephemeris message
 *
 * @return [m/s] Satellite velocity (ecef) (m/s)
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_get_vel(const mavlink_message_t* msg, double *vel)
{
    return _MAV_RETURN_double_array(msg, vel, 3,  24);
}

/**
 * @brief Get field acc from gnss_glnoass_ephemeris message
 *
 * @return [m/s^2] Satellite acceleration (ecef) (m/s^2)
 */
static inline uint16_t mavlink_msg_gnss_glnoass_ephemeris_get_acc(const mavlink_message_t* msg, double *acc)
{
    return _MAV_RETURN_double_array(msg, acc, 3,  48);
}

/**
 * @brief Get field taun from gnss_glnoass_ephemeris message
 *
 * @return [s] SV clock bias (s)
 */
static inline double mavlink_msg_gnss_glnoass_ephemeris_get_taun(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  72);
}

/**
 * @brief Get field gamn from gnss_glnoass_ephemeris message
 *
 * @return  relative freq bias
 */
static inline double mavlink_msg_gnss_glnoass_ephemeris_get_gamn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  80);
}

/**
 * @brief Get field dtaun from gnss_glnoass_ephemeris message
 *
 * @return [s] delay between L1 and L2 (s)
 */
static inline double mavlink_msg_gnss_glnoass_ephemeris_get_dtaun(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  88);
}

/**
 * @brief Decode a gnss_glnoass_ephemeris message into a struct
 *
 * @param msg The message to decode
 * @param gnss_glnoass_ephemeris C-struct to decode the message contents into
 */
static inline void mavlink_msg_gnss_glnoass_ephemeris_decode(const mavlink_message_t* msg, mavlink_gnss_glnoass_ephemeris_t* gnss_glnoass_ephemeris)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_glnoass_ephemeris_get_pos(msg, gnss_glnoass_ephemeris->pos);
    mavlink_msg_gnss_glnoass_ephemeris_get_vel(msg, gnss_glnoass_ephemeris->vel);
    mavlink_msg_gnss_glnoass_ephemeris_get_acc(msg, gnss_glnoass_ephemeris->acc);
    gnss_glnoass_ephemeris->taun = mavlink_msg_gnss_glnoass_ephemeris_get_taun(msg);
    gnss_glnoass_ephemeris->gamn = mavlink_msg_gnss_glnoass_ephemeris_get_gamn(msg);
    gnss_glnoass_ephemeris->dtaun = mavlink_msg_gnss_glnoass_ephemeris_get_dtaun(msg);
    gnss_glnoass_ephemeris->toe = mavlink_msg_gnss_glnoass_ephemeris_get_toe(msg);
    gnss_glnoass_ephemeris->tof = mavlink_msg_gnss_glnoass_ephemeris_get_tof(msg);
    gnss_glnoass_ephemeris->iode = mavlink_msg_gnss_glnoass_ephemeris_get_iode(msg);
    gnss_glnoass_ephemeris->frq = mavlink_msg_gnss_glnoass_ephemeris_get_frq(msg);
    gnss_glnoass_ephemeris->sva = mavlink_msg_gnss_glnoass_ephemeris_get_sva(msg);
    gnss_glnoass_ephemeris->age = mavlink_msg_gnss_glnoass_ephemeris_get_age(msg);
    gnss_glnoass_ephemeris->sat = mavlink_msg_gnss_glnoass_ephemeris_get_sat(msg);
    gnss_glnoass_ephemeris->svh = mavlink_msg_gnss_glnoass_ephemeris_get_svh(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN? msg->len : MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN;
        memset(gnss_glnoass_ephemeris, 0, MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_LEN);
    memcpy(gnss_glnoass_ephemeris, _MAV_PAYLOAD(msg), len);
#endif
}
