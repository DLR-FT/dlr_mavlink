#pragma once
// MESSAGE GNSS_STANDARD_EPHEMERIS PACKING

#define MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS 511


typedef struct __mavlink_gnss_standard_ephemeris_t {
 double A; /*<  Semi-Major Axis*/
 double e; /*<  Eccentricity*/
 double i0; /*<  Inclination Angle at Reference Time*/
 double OMG0; /*<  Longitude of Ascending Node of Orbit Plane at Weekly Epoch*/
 double omg; /*<  Argument of Perigee*/
 double M0; /*<  Mean Anomaly at Reference Time*/
 double deln; /*<  Mean Motion Difference From Computed Value*/
 double OMGd; /*<  Rate of Right Ascension*/
 double idot; /*<  Rate of Inclination Angle*/
 double crc; /*<  Amplitude of the Cosine Harmonic Correction Term to the Orbit Radius*/
 double crs; /*<  Amplitude of the Sine Harmonic Correction Term to the Orbit Radius*/
 double cuc; /*<  Amplitude of the Cosine Harmonic Correction Term to the Argument of Latitude*/
 double cus; /*<  Amplitude of the Sine Harmonic Correction Term to the Argument of Latitude*/
 double cic; /*<  Amplitude of the Cosine Harmonic Correction Term to the Angle of Inclination*/
 double cis; /*<  Amplitude of the Sine Harmonic Correction Term to the Angle of Inclination*/
 double fit; /*< [h] fit interval (h)*/
 double f0; /*<  SV clock parameter af0*/
 double f1; /*<  SV clock parameter af1*/
 double f2; /*<  SV clock parameter af2*/
 double tgd[4]; /*<  Group delay parameters, GPS/QZS:tgd[0]=TGD, GAL:tgd[0]=BGD E5a/E1,tgd[1]=BGD E5b/E1, CMP:tgd[0]=BGD1,tgd[1]=BGD2 */
 double Adot; /*<  Change rate in semi-major axis */
 double ndot; /*<  Rate of mean motiondifference from computed value*/
 uint32_t toe; /*< [s] Time of Ephemeris*/
 uint32_t toc; /*< [s] Clock Data Reference Time of Week*/
 uint32_t ttr; /*< [s] Transmission Time*/
 uint16_t iode; /*<  Issue of Data (Ephemeris)*/
 uint16_t iodc; /*<  Issue of Data (Satellite)*/
 uint16_t sva; /*< [m] SV accuracy (URA index)*/
 uint16_t week; /*<  Number of GPS-Week/Galileo-Week*/
 uint8_t sat; /*<  GNSS-System Crossover Unique SAT-Number*/
 uint8_t svh; /*<  SV health (0:ok)*/
 uint8_t code; /*<  GPS/QZS: code on L2, GAL/CMP: data sources*/
 uint8_t flag; /*<  GPS/QZS: L2 P data flag, CMP: nav type*/
} mavlink_gnss_standard_ephemeris_t;

#define MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN 224
#define MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN 224
#define MAVLINK_MSG_ID_511_LEN 224
#define MAVLINK_MSG_ID_511_MIN_LEN 224

#define MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC 83
#define MAVLINK_MSG_ID_511_CRC 83

#define MAVLINK_MSG_GNSS_STANDARD_EPHEMERIS_FIELD_TGD_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GNSS_STANDARD_EPHEMERIS { \
    511, \
    "GNSS_STANDARD_EPHEMERIS", \
    33, \
    {  { "sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 220, offsetof(mavlink_gnss_standard_ephemeris_t, sat) }, \
         { "iode", NULL, MAVLINK_TYPE_UINT16_T, 0, 212, offsetof(mavlink_gnss_standard_ephemeris_t, iode) }, \
         { "iodc", NULL, MAVLINK_TYPE_UINT16_T, 0, 214, offsetof(mavlink_gnss_standard_ephemeris_t, iodc) }, \
         { "sva", NULL, MAVLINK_TYPE_UINT16_T, 0, 216, offsetof(mavlink_gnss_standard_ephemeris_t, sva) }, \
         { "svh", NULL, MAVLINK_TYPE_UINT8_T, 0, 221, offsetof(mavlink_gnss_standard_ephemeris_t, svh) }, \
         { "week", NULL, MAVLINK_TYPE_UINT16_T, 0, 218, offsetof(mavlink_gnss_standard_ephemeris_t, week) }, \
         { "code", NULL, MAVLINK_TYPE_UINT8_T, 0, 222, offsetof(mavlink_gnss_standard_ephemeris_t, code) }, \
         { "flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 223, offsetof(mavlink_gnss_standard_ephemeris_t, flag) }, \
         { "toe", NULL, MAVLINK_TYPE_UINT32_T, 0, 200, offsetof(mavlink_gnss_standard_ephemeris_t, toe) }, \
         { "toc", NULL, MAVLINK_TYPE_UINT32_T, 0, 204, offsetof(mavlink_gnss_standard_ephemeris_t, toc) }, \
         { "ttr", NULL, MAVLINK_TYPE_UINT32_T, 0, 208, offsetof(mavlink_gnss_standard_ephemeris_t, ttr) }, \
         { "A", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_gnss_standard_ephemeris_t, A) }, \
         { "e", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_gnss_standard_ephemeris_t, e) }, \
         { "i0", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_gnss_standard_ephemeris_t, i0) }, \
         { "OMG0", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_gnss_standard_ephemeris_t, OMG0) }, \
         { "omg", NULL, MAVLINK_TYPE_DOUBLE, 0, 32, offsetof(mavlink_gnss_standard_ephemeris_t, omg) }, \
         { "M0", NULL, MAVLINK_TYPE_DOUBLE, 0, 40, offsetof(mavlink_gnss_standard_ephemeris_t, M0) }, \
         { "deln", NULL, MAVLINK_TYPE_DOUBLE, 0, 48, offsetof(mavlink_gnss_standard_ephemeris_t, deln) }, \
         { "OMGd", NULL, MAVLINK_TYPE_DOUBLE, 0, 56, offsetof(mavlink_gnss_standard_ephemeris_t, OMGd) }, \
         { "idot", NULL, MAVLINK_TYPE_DOUBLE, 0, 64, offsetof(mavlink_gnss_standard_ephemeris_t, idot) }, \
         { "crc", NULL, MAVLINK_TYPE_DOUBLE, 0, 72, offsetof(mavlink_gnss_standard_ephemeris_t, crc) }, \
         { "crs", NULL, MAVLINK_TYPE_DOUBLE, 0, 80, offsetof(mavlink_gnss_standard_ephemeris_t, crs) }, \
         { "cuc", NULL, MAVLINK_TYPE_DOUBLE, 0, 88, offsetof(mavlink_gnss_standard_ephemeris_t, cuc) }, \
         { "cus", NULL, MAVLINK_TYPE_DOUBLE, 0, 96, offsetof(mavlink_gnss_standard_ephemeris_t, cus) }, \
         { "cic", NULL, MAVLINK_TYPE_DOUBLE, 0, 104, offsetof(mavlink_gnss_standard_ephemeris_t, cic) }, \
         { "cis", NULL, MAVLINK_TYPE_DOUBLE, 0, 112, offsetof(mavlink_gnss_standard_ephemeris_t, cis) }, \
         { "fit", NULL, MAVLINK_TYPE_DOUBLE, 0, 120, offsetof(mavlink_gnss_standard_ephemeris_t, fit) }, \
         { "f0", NULL, MAVLINK_TYPE_DOUBLE, 0, 128, offsetof(mavlink_gnss_standard_ephemeris_t, f0) }, \
         { "f1", NULL, MAVLINK_TYPE_DOUBLE, 0, 136, offsetof(mavlink_gnss_standard_ephemeris_t, f1) }, \
         { "f2", NULL, MAVLINK_TYPE_DOUBLE, 0, 144, offsetof(mavlink_gnss_standard_ephemeris_t, f2) }, \
         { "tgd", NULL, MAVLINK_TYPE_DOUBLE, 4, 152, offsetof(mavlink_gnss_standard_ephemeris_t, tgd) }, \
         { "Adot", NULL, MAVLINK_TYPE_DOUBLE, 0, 184, offsetof(mavlink_gnss_standard_ephemeris_t, Adot) }, \
         { "ndot", NULL, MAVLINK_TYPE_DOUBLE, 0, 192, offsetof(mavlink_gnss_standard_ephemeris_t, ndot) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GNSS_STANDARD_EPHEMERIS { \
    "GNSS_STANDARD_EPHEMERIS", \
    33, \
    {  { "sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 220, offsetof(mavlink_gnss_standard_ephemeris_t, sat) }, \
         { "iode", NULL, MAVLINK_TYPE_UINT16_T, 0, 212, offsetof(mavlink_gnss_standard_ephemeris_t, iode) }, \
         { "iodc", NULL, MAVLINK_TYPE_UINT16_T, 0, 214, offsetof(mavlink_gnss_standard_ephemeris_t, iodc) }, \
         { "sva", NULL, MAVLINK_TYPE_UINT16_T, 0, 216, offsetof(mavlink_gnss_standard_ephemeris_t, sva) }, \
         { "svh", NULL, MAVLINK_TYPE_UINT8_T, 0, 221, offsetof(mavlink_gnss_standard_ephemeris_t, svh) }, \
         { "week", NULL, MAVLINK_TYPE_UINT16_T, 0, 218, offsetof(mavlink_gnss_standard_ephemeris_t, week) }, \
         { "code", NULL, MAVLINK_TYPE_UINT8_T, 0, 222, offsetof(mavlink_gnss_standard_ephemeris_t, code) }, \
         { "flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 223, offsetof(mavlink_gnss_standard_ephemeris_t, flag) }, \
         { "toe", NULL, MAVLINK_TYPE_UINT32_T, 0, 200, offsetof(mavlink_gnss_standard_ephemeris_t, toe) }, \
         { "toc", NULL, MAVLINK_TYPE_UINT32_T, 0, 204, offsetof(mavlink_gnss_standard_ephemeris_t, toc) }, \
         { "ttr", NULL, MAVLINK_TYPE_UINT32_T, 0, 208, offsetof(mavlink_gnss_standard_ephemeris_t, ttr) }, \
         { "A", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_gnss_standard_ephemeris_t, A) }, \
         { "e", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_gnss_standard_ephemeris_t, e) }, \
         { "i0", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_gnss_standard_ephemeris_t, i0) }, \
         { "OMG0", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_gnss_standard_ephemeris_t, OMG0) }, \
         { "omg", NULL, MAVLINK_TYPE_DOUBLE, 0, 32, offsetof(mavlink_gnss_standard_ephemeris_t, omg) }, \
         { "M0", NULL, MAVLINK_TYPE_DOUBLE, 0, 40, offsetof(mavlink_gnss_standard_ephemeris_t, M0) }, \
         { "deln", NULL, MAVLINK_TYPE_DOUBLE, 0, 48, offsetof(mavlink_gnss_standard_ephemeris_t, deln) }, \
         { "OMGd", NULL, MAVLINK_TYPE_DOUBLE, 0, 56, offsetof(mavlink_gnss_standard_ephemeris_t, OMGd) }, \
         { "idot", NULL, MAVLINK_TYPE_DOUBLE, 0, 64, offsetof(mavlink_gnss_standard_ephemeris_t, idot) }, \
         { "crc", NULL, MAVLINK_TYPE_DOUBLE, 0, 72, offsetof(mavlink_gnss_standard_ephemeris_t, crc) }, \
         { "crs", NULL, MAVLINK_TYPE_DOUBLE, 0, 80, offsetof(mavlink_gnss_standard_ephemeris_t, crs) }, \
         { "cuc", NULL, MAVLINK_TYPE_DOUBLE, 0, 88, offsetof(mavlink_gnss_standard_ephemeris_t, cuc) }, \
         { "cus", NULL, MAVLINK_TYPE_DOUBLE, 0, 96, offsetof(mavlink_gnss_standard_ephemeris_t, cus) }, \
         { "cic", NULL, MAVLINK_TYPE_DOUBLE, 0, 104, offsetof(mavlink_gnss_standard_ephemeris_t, cic) }, \
         { "cis", NULL, MAVLINK_TYPE_DOUBLE, 0, 112, offsetof(mavlink_gnss_standard_ephemeris_t, cis) }, \
         { "fit", NULL, MAVLINK_TYPE_DOUBLE, 0, 120, offsetof(mavlink_gnss_standard_ephemeris_t, fit) }, \
         { "f0", NULL, MAVLINK_TYPE_DOUBLE, 0, 128, offsetof(mavlink_gnss_standard_ephemeris_t, f0) }, \
         { "f1", NULL, MAVLINK_TYPE_DOUBLE, 0, 136, offsetof(mavlink_gnss_standard_ephemeris_t, f1) }, \
         { "f2", NULL, MAVLINK_TYPE_DOUBLE, 0, 144, offsetof(mavlink_gnss_standard_ephemeris_t, f2) }, \
         { "tgd", NULL, MAVLINK_TYPE_DOUBLE, 4, 152, offsetof(mavlink_gnss_standard_ephemeris_t, tgd) }, \
         { "Adot", NULL, MAVLINK_TYPE_DOUBLE, 0, 184, offsetof(mavlink_gnss_standard_ephemeris_t, Adot) }, \
         { "ndot", NULL, MAVLINK_TYPE_DOUBLE, 0, 192, offsetof(mavlink_gnss_standard_ephemeris_t, ndot) }, \
         } \
}
#endif

/**
 * @brief Pack a gnss_standard_ephemeris message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param iode  Issue of Data (Ephemeris)
 * @param iodc  Issue of Data (Satellite)
 * @param sva [m] SV accuracy (URA index)
 * @param svh  SV health (0:ok)
 * @param week  Number of GPS-Week/Galileo-Week
 * @param code  GPS/QZS: code on L2, GAL/CMP: data sources
 * @param flag  GPS/QZS: L2 P data flag, CMP: nav type
 * @param toe [s] Time of Ephemeris
 * @param toc [s] Clock Data Reference Time of Week
 * @param ttr [s] Transmission Time
 * @param A  Semi-Major Axis
 * @param e  Eccentricity
 * @param i0  Inclination Angle at Reference Time
 * @param OMG0  Longitude of Ascending Node of Orbit Plane at Weekly Epoch
 * @param omg  Argument of Perigee
 * @param M0  Mean Anomaly at Reference Time
 * @param deln  Mean Motion Difference From Computed Value
 * @param OMGd  Rate of Right Ascension
 * @param idot  Rate of Inclination Angle
 * @param crc  Amplitude of the Cosine Harmonic Correction Term to the Orbit Radius
 * @param crs  Amplitude of the Sine Harmonic Correction Term to the Orbit Radius
 * @param cuc  Amplitude of the Cosine Harmonic Correction Term to the Argument of Latitude
 * @param cus  Amplitude of the Sine Harmonic Correction Term to the Argument of Latitude
 * @param cic  Amplitude of the Cosine Harmonic Correction Term to the Angle of Inclination
 * @param cis  Amplitude of the Sine Harmonic Correction Term to the Angle of Inclination
 * @param fit [h] fit interval (h)
 * @param f0  SV clock parameter af0
 * @param f1  SV clock parameter af1
 * @param f2  SV clock parameter af2
 * @param tgd  Group delay parameters, GPS/QZS:tgd[0]=TGD, GAL:tgd[0]=BGD E5a/E1,tgd[1]=BGD E5b/E1, CMP:tgd[0]=BGD1,tgd[1]=BGD2 
 * @param Adot  Change rate in semi-major axis 
 * @param ndot  Rate of mean motiondifference from computed value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t sat, uint16_t iode, uint16_t iodc, uint16_t sva, uint8_t svh, uint16_t week, uint8_t code, uint8_t flag, uint32_t toe, uint32_t toc, uint32_t ttr, double A, double e, double i0, double OMG0, double omg, double M0, double deln, double OMGd, double idot, double crc, double crs, double cuc, double cus, double cic, double cis, double fit, double f0, double f1, double f2, const double *tgd, double Adot, double ndot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN];
    _mav_put_double(buf, 0, A);
    _mav_put_double(buf, 8, e);
    _mav_put_double(buf, 16, i0);
    _mav_put_double(buf, 24, OMG0);
    _mav_put_double(buf, 32, omg);
    _mav_put_double(buf, 40, M0);
    _mav_put_double(buf, 48, deln);
    _mav_put_double(buf, 56, OMGd);
    _mav_put_double(buf, 64, idot);
    _mav_put_double(buf, 72, crc);
    _mav_put_double(buf, 80, crs);
    _mav_put_double(buf, 88, cuc);
    _mav_put_double(buf, 96, cus);
    _mav_put_double(buf, 104, cic);
    _mav_put_double(buf, 112, cis);
    _mav_put_double(buf, 120, fit);
    _mav_put_double(buf, 128, f0);
    _mav_put_double(buf, 136, f1);
    _mav_put_double(buf, 144, f2);
    _mav_put_double(buf, 184, Adot);
    _mav_put_double(buf, 192, ndot);
    _mav_put_uint32_t(buf, 200, toe);
    _mav_put_uint32_t(buf, 204, toc);
    _mav_put_uint32_t(buf, 208, ttr);
    _mav_put_uint16_t(buf, 212, iode);
    _mav_put_uint16_t(buf, 214, iodc);
    _mav_put_uint16_t(buf, 216, sva);
    _mav_put_uint16_t(buf, 218, week);
    _mav_put_uint8_t(buf, 220, sat);
    _mav_put_uint8_t(buf, 221, svh);
    _mav_put_uint8_t(buf, 222, code);
    _mav_put_uint8_t(buf, 223, flag);
    _mav_put_double_array(buf, 152, tgd, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN);
#else
    mavlink_gnss_standard_ephemeris_t packet;
    packet.A = A;
    packet.e = e;
    packet.i0 = i0;
    packet.OMG0 = OMG0;
    packet.omg = omg;
    packet.M0 = M0;
    packet.deln = deln;
    packet.OMGd = OMGd;
    packet.idot = idot;
    packet.crc = crc;
    packet.crs = crs;
    packet.cuc = cuc;
    packet.cus = cus;
    packet.cic = cic;
    packet.cis = cis;
    packet.fit = fit;
    packet.f0 = f0;
    packet.f1 = f1;
    packet.f2 = f2;
    packet.Adot = Adot;
    packet.ndot = ndot;
    packet.toe = toe;
    packet.toc = toc;
    packet.ttr = ttr;
    packet.iode = iode;
    packet.iodc = iodc;
    packet.sva = sva;
    packet.week = week;
    packet.sat = sat;
    packet.svh = svh;
    packet.code = code;
    packet.flag = flag;
    mav_array_assign_double(packet.tgd, tgd, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC);
}

/**
 * @brief Pack a gnss_standard_ephemeris message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param iode  Issue of Data (Ephemeris)
 * @param iodc  Issue of Data (Satellite)
 * @param sva [m] SV accuracy (URA index)
 * @param svh  SV health (0:ok)
 * @param week  Number of GPS-Week/Galileo-Week
 * @param code  GPS/QZS: code on L2, GAL/CMP: data sources
 * @param flag  GPS/QZS: L2 P data flag, CMP: nav type
 * @param toe [s] Time of Ephemeris
 * @param toc [s] Clock Data Reference Time of Week
 * @param ttr [s] Transmission Time
 * @param A  Semi-Major Axis
 * @param e  Eccentricity
 * @param i0  Inclination Angle at Reference Time
 * @param OMG0  Longitude of Ascending Node of Orbit Plane at Weekly Epoch
 * @param omg  Argument of Perigee
 * @param M0  Mean Anomaly at Reference Time
 * @param deln  Mean Motion Difference From Computed Value
 * @param OMGd  Rate of Right Ascension
 * @param idot  Rate of Inclination Angle
 * @param crc  Amplitude of the Cosine Harmonic Correction Term to the Orbit Radius
 * @param crs  Amplitude of the Sine Harmonic Correction Term to the Orbit Radius
 * @param cuc  Amplitude of the Cosine Harmonic Correction Term to the Argument of Latitude
 * @param cus  Amplitude of the Sine Harmonic Correction Term to the Argument of Latitude
 * @param cic  Amplitude of the Cosine Harmonic Correction Term to the Angle of Inclination
 * @param cis  Amplitude of the Sine Harmonic Correction Term to the Angle of Inclination
 * @param fit [h] fit interval (h)
 * @param f0  SV clock parameter af0
 * @param f1  SV clock parameter af1
 * @param f2  SV clock parameter af2
 * @param tgd  Group delay parameters, GPS/QZS:tgd[0]=TGD, GAL:tgd[0]=BGD E5a/E1,tgd[1]=BGD E5b/E1, CMP:tgd[0]=BGD1,tgd[1]=BGD2 
 * @param Adot  Change rate in semi-major axis 
 * @param ndot  Rate of mean motiondifference from computed value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t sat, uint16_t iode, uint16_t iodc, uint16_t sva, uint8_t svh, uint16_t week, uint8_t code, uint8_t flag, uint32_t toe, uint32_t toc, uint32_t ttr, double A, double e, double i0, double OMG0, double omg, double M0, double deln, double OMGd, double idot, double crc, double crs, double cuc, double cus, double cic, double cis, double fit, double f0, double f1, double f2, const double *tgd, double Adot, double ndot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN];
    _mav_put_double(buf, 0, A);
    _mav_put_double(buf, 8, e);
    _mav_put_double(buf, 16, i0);
    _mav_put_double(buf, 24, OMG0);
    _mav_put_double(buf, 32, omg);
    _mav_put_double(buf, 40, M0);
    _mav_put_double(buf, 48, deln);
    _mav_put_double(buf, 56, OMGd);
    _mav_put_double(buf, 64, idot);
    _mav_put_double(buf, 72, crc);
    _mav_put_double(buf, 80, crs);
    _mav_put_double(buf, 88, cuc);
    _mav_put_double(buf, 96, cus);
    _mav_put_double(buf, 104, cic);
    _mav_put_double(buf, 112, cis);
    _mav_put_double(buf, 120, fit);
    _mav_put_double(buf, 128, f0);
    _mav_put_double(buf, 136, f1);
    _mav_put_double(buf, 144, f2);
    _mav_put_double(buf, 184, Adot);
    _mav_put_double(buf, 192, ndot);
    _mav_put_uint32_t(buf, 200, toe);
    _mav_put_uint32_t(buf, 204, toc);
    _mav_put_uint32_t(buf, 208, ttr);
    _mav_put_uint16_t(buf, 212, iode);
    _mav_put_uint16_t(buf, 214, iodc);
    _mav_put_uint16_t(buf, 216, sva);
    _mav_put_uint16_t(buf, 218, week);
    _mav_put_uint8_t(buf, 220, sat);
    _mav_put_uint8_t(buf, 221, svh);
    _mav_put_uint8_t(buf, 222, code);
    _mav_put_uint8_t(buf, 223, flag);
    _mav_put_double_array(buf, 152, tgd, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN);
#else
    mavlink_gnss_standard_ephemeris_t packet;
    packet.A = A;
    packet.e = e;
    packet.i0 = i0;
    packet.OMG0 = OMG0;
    packet.omg = omg;
    packet.M0 = M0;
    packet.deln = deln;
    packet.OMGd = OMGd;
    packet.idot = idot;
    packet.crc = crc;
    packet.crs = crs;
    packet.cuc = cuc;
    packet.cus = cus;
    packet.cic = cic;
    packet.cis = cis;
    packet.fit = fit;
    packet.f0 = f0;
    packet.f1 = f1;
    packet.f2 = f2;
    packet.Adot = Adot;
    packet.ndot = ndot;
    packet.toe = toe;
    packet.toc = toc;
    packet.ttr = ttr;
    packet.iode = iode;
    packet.iodc = iodc;
    packet.sva = sva;
    packet.week = week;
    packet.sat = sat;
    packet.svh = svh;
    packet.code = code;
    packet.flag = flag;
    mav_array_memcpy(packet.tgd, tgd, sizeof(double)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN);
#endif
}

/**
 * @brief Pack a gnss_standard_ephemeris message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param iode  Issue of Data (Ephemeris)
 * @param iodc  Issue of Data (Satellite)
 * @param sva [m] SV accuracy (URA index)
 * @param svh  SV health (0:ok)
 * @param week  Number of GPS-Week/Galileo-Week
 * @param code  GPS/QZS: code on L2, GAL/CMP: data sources
 * @param flag  GPS/QZS: L2 P data flag, CMP: nav type
 * @param toe [s] Time of Ephemeris
 * @param toc [s] Clock Data Reference Time of Week
 * @param ttr [s] Transmission Time
 * @param A  Semi-Major Axis
 * @param e  Eccentricity
 * @param i0  Inclination Angle at Reference Time
 * @param OMG0  Longitude of Ascending Node of Orbit Plane at Weekly Epoch
 * @param omg  Argument of Perigee
 * @param M0  Mean Anomaly at Reference Time
 * @param deln  Mean Motion Difference From Computed Value
 * @param OMGd  Rate of Right Ascension
 * @param idot  Rate of Inclination Angle
 * @param crc  Amplitude of the Cosine Harmonic Correction Term to the Orbit Radius
 * @param crs  Amplitude of the Sine Harmonic Correction Term to the Orbit Radius
 * @param cuc  Amplitude of the Cosine Harmonic Correction Term to the Argument of Latitude
 * @param cus  Amplitude of the Sine Harmonic Correction Term to the Argument of Latitude
 * @param cic  Amplitude of the Cosine Harmonic Correction Term to the Angle of Inclination
 * @param cis  Amplitude of the Sine Harmonic Correction Term to the Angle of Inclination
 * @param fit [h] fit interval (h)
 * @param f0  SV clock parameter af0
 * @param f1  SV clock parameter af1
 * @param f2  SV clock parameter af2
 * @param tgd  Group delay parameters, GPS/QZS:tgd[0]=TGD, GAL:tgd[0]=BGD E5a/E1,tgd[1]=BGD E5b/E1, CMP:tgd[0]=BGD1,tgd[1]=BGD2 
 * @param Adot  Change rate in semi-major axis 
 * @param ndot  Rate of mean motiondifference from computed value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t sat,uint16_t iode,uint16_t iodc,uint16_t sva,uint8_t svh,uint16_t week,uint8_t code,uint8_t flag,uint32_t toe,uint32_t toc,uint32_t ttr,double A,double e,double i0,double OMG0,double omg,double M0,double deln,double OMGd,double idot,double crc,double crs,double cuc,double cus,double cic,double cis,double fit,double f0,double f1,double f2,const double *tgd,double Adot,double ndot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN];
    _mav_put_double(buf, 0, A);
    _mav_put_double(buf, 8, e);
    _mav_put_double(buf, 16, i0);
    _mav_put_double(buf, 24, OMG0);
    _mav_put_double(buf, 32, omg);
    _mav_put_double(buf, 40, M0);
    _mav_put_double(buf, 48, deln);
    _mav_put_double(buf, 56, OMGd);
    _mav_put_double(buf, 64, idot);
    _mav_put_double(buf, 72, crc);
    _mav_put_double(buf, 80, crs);
    _mav_put_double(buf, 88, cuc);
    _mav_put_double(buf, 96, cus);
    _mav_put_double(buf, 104, cic);
    _mav_put_double(buf, 112, cis);
    _mav_put_double(buf, 120, fit);
    _mav_put_double(buf, 128, f0);
    _mav_put_double(buf, 136, f1);
    _mav_put_double(buf, 144, f2);
    _mav_put_double(buf, 184, Adot);
    _mav_put_double(buf, 192, ndot);
    _mav_put_uint32_t(buf, 200, toe);
    _mav_put_uint32_t(buf, 204, toc);
    _mav_put_uint32_t(buf, 208, ttr);
    _mav_put_uint16_t(buf, 212, iode);
    _mav_put_uint16_t(buf, 214, iodc);
    _mav_put_uint16_t(buf, 216, sva);
    _mav_put_uint16_t(buf, 218, week);
    _mav_put_uint8_t(buf, 220, sat);
    _mav_put_uint8_t(buf, 221, svh);
    _mav_put_uint8_t(buf, 222, code);
    _mav_put_uint8_t(buf, 223, flag);
    _mav_put_double_array(buf, 152, tgd, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN);
#else
    mavlink_gnss_standard_ephemeris_t packet;
    packet.A = A;
    packet.e = e;
    packet.i0 = i0;
    packet.OMG0 = OMG0;
    packet.omg = omg;
    packet.M0 = M0;
    packet.deln = deln;
    packet.OMGd = OMGd;
    packet.idot = idot;
    packet.crc = crc;
    packet.crs = crs;
    packet.cuc = cuc;
    packet.cus = cus;
    packet.cic = cic;
    packet.cis = cis;
    packet.fit = fit;
    packet.f0 = f0;
    packet.f1 = f1;
    packet.f2 = f2;
    packet.Adot = Adot;
    packet.ndot = ndot;
    packet.toe = toe;
    packet.toc = toc;
    packet.ttr = ttr;
    packet.iode = iode;
    packet.iodc = iodc;
    packet.sva = sva;
    packet.week = week;
    packet.sat = sat;
    packet.svh = svh;
    packet.code = code;
    packet.flag = flag;
    mav_array_assign_double(packet.tgd, tgd, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC);
}

/**
 * @brief Encode a gnss_standard_ephemeris struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gnss_standard_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gnss_standard_ephemeris_t* gnss_standard_ephemeris)
{
    return mavlink_msg_gnss_standard_ephemeris_pack(system_id, component_id, msg, gnss_standard_ephemeris->sat, gnss_standard_ephemeris->iode, gnss_standard_ephemeris->iodc, gnss_standard_ephemeris->sva, gnss_standard_ephemeris->svh, gnss_standard_ephemeris->week, gnss_standard_ephemeris->code, gnss_standard_ephemeris->flag, gnss_standard_ephemeris->toe, gnss_standard_ephemeris->toc, gnss_standard_ephemeris->ttr, gnss_standard_ephemeris->A, gnss_standard_ephemeris->e, gnss_standard_ephemeris->i0, gnss_standard_ephemeris->OMG0, gnss_standard_ephemeris->omg, gnss_standard_ephemeris->M0, gnss_standard_ephemeris->deln, gnss_standard_ephemeris->OMGd, gnss_standard_ephemeris->idot, gnss_standard_ephemeris->crc, gnss_standard_ephemeris->crs, gnss_standard_ephemeris->cuc, gnss_standard_ephemeris->cus, gnss_standard_ephemeris->cic, gnss_standard_ephemeris->cis, gnss_standard_ephemeris->fit, gnss_standard_ephemeris->f0, gnss_standard_ephemeris->f1, gnss_standard_ephemeris->f2, gnss_standard_ephemeris->tgd, gnss_standard_ephemeris->Adot, gnss_standard_ephemeris->ndot);
}

/**
 * @brief Encode a gnss_standard_ephemeris struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gnss_standard_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gnss_standard_ephemeris_t* gnss_standard_ephemeris)
{
    return mavlink_msg_gnss_standard_ephemeris_pack_chan(system_id, component_id, chan, msg, gnss_standard_ephemeris->sat, gnss_standard_ephemeris->iode, gnss_standard_ephemeris->iodc, gnss_standard_ephemeris->sva, gnss_standard_ephemeris->svh, gnss_standard_ephemeris->week, gnss_standard_ephemeris->code, gnss_standard_ephemeris->flag, gnss_standard_ephemeris->toe, gnss_standard_ephemeris->toc, gnss_standard_ephemeris->ttr, gnss_standard_ephemeris->A, gnss_standard_ephemeris->e, gnss_standard_ephemeris->i0, gnss_standard_ephemeris->OMG0, gnss_standard_ephemeris->omg, gnss_standard_ephemeris->M0, gnss_standard_ephemeris->deln, gnss_standard_ephemeris->OMGd, gnss_standard_ephemeris->idot, gnss_standard_ephemeris->crc, gnss_standard_ephemeris->crs, gnss_standard_ephemeris->cuc, gnss_standard_ephemeris->cus, gnss_standard_ephemeris->cic, gnss_standard_ephemeris->cis, gnss_standard_ephemeris->fit, gnss_standard_ephemeris->f0, gnss_standard_ephemeris->f1, gnss_standard_ephemeris->f2, gnss_standard_ephemeris->tgd, gnss_standard_ephemeris->Adot, gnss_standard_ephemeris->ndot);
}

/**
 * @brief Encode a gnss_standard_ephemeris struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gnss_standard_ephemeris C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gnss_standard_ephemeris_t* gnss_standard_ephemeris)
{
    return mavlink_msg_gnss_standard_ephemeris_pack_status(system_id, component_id, _status, msg,  gnss_standard_ephemeris->sat, gnss_standard_ephemeris->iode, gnss_standard_ephemeris->iodc, gnss_standard_ephemeris->sva, gnss_standard_ephemeris->svh, gnss_standard_ephemeris->week, gnss_standard_ephemeris->code, gnss_standard_ephemeris->flag, gnss_standard_ephemeris->toe, gnss_standard_ephemeris->toc, gnss_standard_ephemeris->ttr, gnss_standard_ephemeris->A, gnss_standard_ephemeris->e, gnss_standard_ephemeris->i0, gnss_standard_ephemeris->OMG0, gnss_standard_ephemeris->omg, gnss_standard_ephemeris->M0, gnss_standard_ephemeris->deln, gnss_standard_ephemeris->OMGd, gnss_standard_ephemeris->idot, gnss_standard_ephemeris->crc, gnss_standard_ephemeris->crs, gnss_standard_ephemeris->cuc, gnss_standard_ephemeris->cus, gnss_standard_ephemeris->cic, gnss_standard_ephemeris->cis, gnss_standard_ephemeris->fit, gnss_standard_ephemeris->f0, gnss_standard_ephemeris->f1, gnss_standard_ephemeris->f2, gnss_standard_ephemeris->tgd, gnss_standard_ephemeris->Adot, gnss_standard_ephemeris->ndot);
}

/**
 * @brief Send a gnss_standard_ephemeris message
 * @param chan MAVLink channel to send the message
 *
 * @param sat  GNSS-System Crossover Unique SAT-Number
 * @param iode  Issue of Data (Ephemeris)
 * @param iodc  Issue of Data (Satellite)
 * @param sva [m] SV accuracy (URA index)
 * @param svh  SV health (0:ok)
 * @param week  Number of GPS-Week/Galileo-Week
 * @param code  GPS/QZS: code on L2, GAL/CMP: data sources
 * @param flag  GPS/QZS: L2 P data flag, CMP: nav type
 * @param toe [s] Time of Ephemeris
 * @param toc [s] Clock Data Reference Time of Week
 * @param ttr [s] Transmission Time
 * @param A  Semi-Major Axis
 * @param e  Eccentricity
 * @param i0  Inclination Angle at Reference Time
 * @param OMG0  Longitude of Ascending Node of Orbit Plane at Weekly Epoch
 * @param omg  Argument of Perigee
 * @param M0  Mean Anomaly at Reference Time
 * @param deln  Mean Motion Difference From Computed Value
 * @param OMGd  Rate of Right Ascension
 * @param idot  Rate of Inclination Angle
 * @param crc  Amplitude of the Cosine Harmonic Correction Term to the Orbit Radius
 * @param crs  Amplitude of the Sine Harmonic Correction Term to the Orbit Radius
 * @param cuc  Amplitude of the Cosine Harmonic Correction Term to the Argument of Latitude
 * @param cus  Amplitude of the Sine Harmonic Correction Term to the Argument of Latitude
 * @param cic  Amplitude of the Cosine Harmonic Correction Term to the Angle of Inclination
 * @param cis  Amplitude of the Sine Harmonic Correction Term to the Angle of Inclination
 * @param fit [h] fit interval (h)
 * @param f0  SV clock parameter af0
 * @param f1  SV clock parameter af1
 * @param f2  SV clock parameter af2
 * @param tgd  Group delay parameters, GPS/QZS:tgd[0]=TGD, GAL:tgd[0]=BGD E5a/E1,tgd[1]=BGD E5b/E1, CMP:tgd[0]=BGD1,tgd[1]=BGD2 
 * @param Adot  Change rate in semi-major axis 
 * @param ndot  Rate of mean motiondifference from computed value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gnss_standard_ephemeris_send(mavlink_channel_t chan, uint8_t sat, uint16_t iode, uint16_t iodc, uint16_t sva, uint8_t svh, uint16_t week, uint8_t code, uint8_t flag, uint32_t toe, uint32_t toc, uint32_t ttr, double A, double e, double i0, double OMG0, double omg, double M0, double deln, double OMGd, double idot, double crc, double crs, double cuc, double cus, double cic, double cis, double fit, double f0, double f1, double f2, const double *tgd, double Adot, double ndot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN];
    _mav_put_double(buf, 0, A);
    _mav_put_double(buf, 8, e);
    _mav_put_double(buf, 16, i0);
    _mav_put_double(buf, 24, OMG0);
    _mav_put_double(buf, 32, omg);
    _mav_put_double(buf, 40, M0);
    _mav_put_double(buf, 48, deln);
    _mav_put_double(buf, 56, OMGd);
    _mav_put_double(buf, 64, idot);
    _mav_put_double(buf, 72, crc);
    _mav_put_double(buf, 80, crs);
    _mav_put_double(buf, 88, cuc);
    _mav_put_double(buf, 96, cus);
    _mav_put_double(buf, 104, cic);
    _mav_put_double(buf, 112, cis);
    _mav_put_double(buf, 120, fit);
    _mav_put_double(buf, 128, f0);
    _mav_put_double(buf, 136, f1);
    _mav_put_double(buf, 144, f2);
    _mav_put_double(buf, 184, Adot);
    _mav_put_double(buf, 192, ndot);
    _mav_put_uint32_t(buf, 200, toe);
    _mav_put_uint32_t(buf, 204, toc);
    _mav_put_uint32_t(buf, 208, ttr);
    _mav_put_uint16_t(buf, 212, iode);
    _mav_put_uint16_t(buf, 214, iodc);
    _mav_put_uint16_t(buf, 216, sva);
    _mav_put_uint16_t(buf, 218, week);
    _mav_put_uint8_t(buf, 220, sat);
    _mav_put_uint8_t(buf, 221, svh);
    _mav_put_uint8_t(buf, 222, code);
    _mav_put_uint8_t(buf, 223, flag);
    _mav_put_double_array(buf, 152, tgd, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS, buf, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC);
#else
    mavlink_gnss_standard_ephemeris_t packet;
    packet.A = A;
    packet.e = e;
    packet.i0 = i0;
    packet.OMG0 = OMG0;
    packet.omg = omg;
    packet.M0 = M0;
    packet.deln = deln;
    packet.OMGd = OMGd;
    packet.idot = idot;
    packet.crc = crc;
    packet.crs = crs;
    packet.cuc = cuc;
    packet.cus = cus;
    packet.cic = cic;
    packet.cis = cis;
    packet.fit = fit;
    packet.f0 = f0;
    packet.f1 = f1;
    packet.f2 = f2;
    packet.Adot = Adot;
    packet.ndot = ndot;
    packet.toe = toe;
    packet.toc = toc;
    packet.ttr = ttr;
    packet.iode = iode;
    packet.iodc = iodc;
    packet.sva = sva;
    packet.week = week;
    packet.sat = sat;
    packet.svh = svh;
    packet.code = code;
    packet.flag = flag;
    mav_array_assign_double(packet.tgd, tgd, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS, (const char *)&packet, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC);
#endif
}

/**
 * @brief Send a gnss_standard_ephemeris message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gnss_standard_ephemeris_send_struct(mavlink_channel_t chan, const mavlink_gnss_standard_ephemeris_t* gnss_standard_ephemeris)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_standard_ephemeris_send(chan, gnss_standard_ephemeris->sat, gnss_standard_ephemeris->iode, gnss_standard_ephemeris->iodc, gnss_standard_ephemeris->sva, gnss_standard_ephemeris->svh, gnss_standard_ephemeris->week, gnss_standard_ephemeris->code, gnss_standard_ephemeris->flag, gnss_standard_ephemeris->toe, gnss_standard_ephemeris->toc, gnss_standard_ephemeris->ttr, gnss_standard_ephemeris->A, gnss_standard_ephemeris->e, gnss_standard_ephemeris->i0, gnss_standard_ephemeris->OMG0, gnss_standard_ephemeris->omg, gnss_standard_ephemeris->M0, gnss_standard_ephemeris->deln, gnss_standard_ephemeris->OMGd, gnss_standard_ephemeris->idot, gnss_standard_ephemeris->crc, gnss_standard_ephemeris->crs, gnss_standard_ephemeris->cuc, gnss_standard_ephemeris->cus, gnss_standard_ephemeris->cic, gnss_standard_ephemeris->cis, gnss_standard_ephemeris->fit, gnss_standard_ephemeris->f0, gnss_standard_ephemeris->f1, gnss_standard_ephemeris->f2, gnss_standard_ephemeris->tgd, gnss_standard_ephemeris->Adot, gnss_standard_ephemeris->ndot);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS, (const char *)gnss_standard_ephemeris, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gnss_standard_ephemeris_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t sat, uint16_t iode, uint16_t iodc, uint16_t sva, uint8_t svh, uint16_t week, uint8_t code, uint8_t flag, uint32_t toe, uint32_t toc, uint32_t ttr, double A, double e, double i0, double OMG0, double omg, double M0, double deln, double OMGd, double idot, double crc, double crs, double cuc, double cus, double cic, double cis, double fit, double f0, double f1, double f2, const double *tgd, double Adot, double ndot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_double(buf, 0, A);
    _mav_put_double(buf, 8, e);
    _mav_put_double(buf, 16, i0);
    _mav_put_double(buf, 24, OMG0);
    _mav_put_double(buf, 32, omg);
    _mav_put_double(buf, 40, M0);
    _mav_put_double(buf, 48, deln);
    _mav_put_double(buf, 56, OMGd);
    _mav_put_double(buf, 64, idot);
    _mav_put_double(buf, 72, crc);
    _mav_put_double(buf, 80, crs);
    _mav_put_double(buf, 88, cuc);
    _mav_put_double(buf, 96, cus);
    _mav_put_double(buf, 104, cic);
    _mav_put_double(buf, 112, cis);
    _mav_put_double(buf, 120, fit);
    _mav_put_double(buf, 128, f0);
    _mav_put_double(buf, 136, f1);
    _mav_put_double(buf, 144, f2);
    _mav_put_double(buf, 184, Adot);
    _mav_put_double(buf, 192, ndot);
    _mav_put_uint32_t(buf, 200, toe);
    _mav_put_uint32_t(buf, 204, toc);
    _mav_put_uint32_t(buf, 208, ttr);
    _mav_put_uint16_t(buf, 212, iode);
    _mav_put_uint16_t(buf, 214, iodc);
    _mav_put_uint16_t(buf, 216, sva);
    _mav_put_uint16_t(buf, 218, week);
    _mav_put_uint8_t(buf, 220, sat);
    _mav_put_uint8_t(buf, 221, svh);
    _mav_put_uint8_t(buf, 222, code);
    _mav_put_uint8_t(buf, 223, flag);
    _mav_put_double_array(buf, 152, tgd, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS, buf, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC);
#else
    mavlink_gnss_standard_ephemeris_t *packet = (mavlink_gnss_standard_ephemeris_t *)msgbuf;
    packet->A = A;
    packet->e = e;
    packet->i0 = i0;
    packet->OMG0 = OMG0;
    packet->omg = omg;
    packet->M0 = M0;
    packet->deln = deln;
    packet->OMGd = OMGd;
    packet->idot = idot;
    packet->crc = crc;
    packet->crs = crs;
    packet->cuc = cuc;
    packet->cus = cus;
    packet->cic = cic;
    packet->cis = cis;
    packet->fit = fit;
    packet->f0 = f0;
    packet->f1 = f1;
    packet->f2 = f2;
    packet->Adot = Adot;
    packet->ndot = ndot;
    packet->toe = toe;
    packet->toc = toc;
    packet->ttr = ttr;
    packet->iode = iode;
    packet->iodc = iodc;
    packet->sva = sva;
    packet->week = week;
    packet->sat = sat;
    packet->svh = svh;
    packet->code = code;
    packet->flag = flag;
    mav_array_assign_double(packet->tgd, tgd, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS, (const char *)packet, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_CRC);
#endif
}
#endif

#endif

// MESSAGE GNSS_STANDARD_EPHEMERIS UNPACKING


/**
 * @brief Get field sat from gnss_standard_ephemeris message
 *
 * @return  GNSS-System Crossover Unique SAT-Number
 */
static inline uint8_t mavlink_msg_gnss_standard_ephemeris_get_sat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  220);
}

/**
 * @brief Get field iode from gnss_standard_ephemeris message
 *
 * @return  Issue of Data (Ephemeris)
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_get_iode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  212);
}

/**
 * @brief Get field iodc from gnss_standard_ephemeris message
 *
 * @return  Issue of Data (Satellite)
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_get_iodc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  214);
}

/**
 * @brief Get field sva from gnss_standard_ephemeris message
 *
 * @return [m] SV accuracy (URA index)
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_get_sva(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  216);
}

/**
 * @brief Get field svh from gnss_standard_ephemeris message
 *
 * @return  SV health (0:ok)
 */
static inline uint8_t mavlink_msg_gnss_standard_ephemeris_get_svh(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  221);
}

/**
 * @brief Get field week from gnss_standard_ephemeris message
 *
 * @return  Number of GPS-Week/Galileo-Week
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_get_week(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  218);
}

/**
 * @brief Get field code from gnss_standard_ephemeris message
 *
 * @return  GPS/QZS: code on L2, GAL/CMP: data sources
 */
static inline uint8_t mavlink_msg_gnss_standard_ephemeris_get_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  222);
}

/**
 * @brief Get field flag from gnss_standard_ephemeris message
 *
 * @return  GPS/QZS: L2 P data flag, CMP: nav type
 */
static inline uint8_t mavlink_msg_gnss_standard_ephemeris_get_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  223);
}

/**
 * @brief Get field toe from gnss_standard_ephemeris message
 *
 * @return [s] Time of Ephemeris
 */
static inline uint32_t mavlink_msg_gnss_standard_ephemeris_get_toe(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  200);
}

/**
 * @brief Get field toc from gnss_standard_ephemeris message
 *
 * @return [s] Clock Data Reference Time of Week
 */
static inline uint32_t mavlink_msg_gnss_standard_ephemeris_get_toc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  204);
}

/**
 * @brief Get field ttr from gnss_standard_ephemeris message
 *
 * @return [s] Transmission Time
 */
static inline uint32_t mavlink_msg_gnss_standard_ephemeris_get_ttr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  208);
}

/**
 * @brief Get field A from gnss_standard_ephemeris message
 *
 * @return  Semi-Major Axis
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_A(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  0);
}

/**
 * @brief Get field e from gnss_standard_ephemeris message
 *
 * @return  Eccentricity
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field i0 from gnss_standard_ephemeris message
 *
 * @return  Inclination Angle at Reference Time
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_i0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field OMG0 from gnss_standard_ephemeris message
 *
 * @return  Longitude of Ascending Node of Orbit Plane at Weekly Epoch
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_OMG0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  24);
}

/**
 * @brief Get field omg from gnss_standard_ephemeris message
 *
 * @return  Argument of Perigee
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_omg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  32);
}

/**
 * @brief Get field M0 from gnss_standard_ephemeris message
 *
 * @return  Mean Anomaly at Reference Time
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_M0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  40);
}

/**
 * @brief Get field deln from gnss_standard_ephemeris message
 *
 * @return  Mean Motion Difference From Computed Value
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_deln(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  48);
}

/**
 * @brief Get field OMGd from gnss_standard_ephemeris message
 *
 * @return  Rate of Right Ascension
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_OMGd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  56);
}

/**
 * @brief Get field idot from gnss_standard_ephemeris message
 *
 * @return  Rate of Inclination Angle
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_idot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  64);
}

/**
 * @brief Get field crc from gnss_standard_ephemeris message
 *
 * @return  Amplitude of the Cosine Harmonic Correction Term to the Orbit Radius
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_crc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  72);
}

/**
 * @brief Get field crs from gnss_standard_ephemeris message
 *
 * @return  Amplitude of the Sine Harmonic Correction Term to the Orbit Radius
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_crs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  80);
}

/**
 * @brief Get field cuc from gnss_standard_ephemeris message
 *
 * @return  Amplitude of the Cosine Harmonic Correction Term to the Argument of Latitude
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_cuc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  88);
}

/**
 * @brief Get field cus from gnss_standard_ephemeris message
 *
 * @return  Amplitude of the Sine Harmonic Correction Term to the Argument of Latitude
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_cus(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  96);
}

/**
 * @brief Get field cic from gnss_standard_ephemeris message
 *
 * @return  Amplitude of the Cosine Harmonic Correction Term to the Angle of Inclination
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_cic(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  104);
}

/**
 * @brief Get field cis from gnss_standard_ephemeris message
 *
 * @return  Amplitude of the Sine Harmonic Correction Term to the Angle of Inclination
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_cis(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  112);
}

/**
 * @brief Get field fit from gnss_standard_ephemeris message
 *
 * @return [h] fit interval (h)
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_fit(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  120);
}

/**
 * @brief Get field f0 from gnss_standard_ephemeris message
 *
 * @return  SV clock parameter af0
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_f0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  128);
}

/**
 * @brief Get field f1 from gnss_standard_ephemeris message
 *
 * @return  SV clock parameter af1
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_f1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  136);
}

/**
 * @brief Get field f2 from gnss_standard_ephemeris message
 *
 * @return  SV clock parameter af2
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_f2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  144);
}

/**
 * @brief Get field tgd from gnss_standard_ephemeris message
 *
 * @return  Group delay parameters, GPS/QZS:tgd[0]=TGD, GAL:tgd[0]=BGD E5a/E1,tgd[1]=BGD E5b/E1, CMP:tgd[0]=BGD1,tgd[1]=BGD2 
 */
static inline uint16_t mavlink_msg_gnss_standard_ephemeris_get_tgd(const mavlink_message_t* msg, double *tgd)
{
    return _MAV_RETURN_double_array(msg, tgd, 4,  152);
}

/**
 * @brief Get field Adot from gnss_standard_ephemeris message
 *
 * @return  Change rate in semi-major axis 
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_Adot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  184);
}

/**
 * @brief Get field ndot from gnss_standard_ephemeris message
 *
 * @return  Rate of mean motiondifference from computed value
 */
static inline double mavlink_msg_gnss_standard_ephemeris_get_ndot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  192);
}

/**
 * @brief Decode a gnss_standard_ephemeris message into a struct
 *
 * @param msg The message to decode
 * @param gnss_standard_ephemeris C-struct to decode the message contents into
 */
static inline void mavlink_msg_gnss_standard_ephemeris_decode(const mavlink_message_t* msg, mavlink_gnss_standard_ephemeris_t* gnss_standard_ephemeris)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gnss_standard_ephemeris->A = mavlink_msg_gnss_standard_ephemeris_get_A(msg);
    gnss_standard_ephemeris->e = mavlink_msg_gnss_standard_ephemeris_get_e(msg);
    gnss_standard_ephemeris->i0 = mavlink_msg_gnss_standard_ephemeris_get_i0(msg);
    gnss_standard_ephemeris->OMG0 = mavlink_msg_gnss_standard_ephemeris_get_OMG0(msg);
    gnss_standard_ephemeris->omg = mavlink_msg_gnss_standard_ephemeris_get_omg(msg);
    gnss_standard_ephemeris->M0 = mavlink_msg_gnss_standard_ephemeris_get_M0(msg);
    gnss_standard_ephemeris->deln = mavlink_msg_gnss_standard_ephemeris_get_deln(msg);
    gnss_standard_ephemeris->OMGd = mavlink_msg_gnss_standard_ephemeris_get_OMGd(msg);
    gnss_standard_ephemeris->idot = mavlink_msg_gnss_standard_ephemeris_get_idot(msg);
    gnss_standard_ephemeris->crc = mavlink_msg_gnss_standard_ephemeris_get_crc(msg);
    gnss_standard_ephemeris->crs = mavlink_msg_gnss_standard_ephemeris_get_crs(msg);
    gnss_standard_ephemeris->cuc = mavlink_msg_gnss_standard_ephemeris_get_cuc(msg);
    gnss_standard_ephemeris->cus = mavlink_msg_gnss_standard_ephemeris_get_cus(msg);
    gnss_standard_ephemeris->cic = mavlink_msg_gnss_standard_ephemeris_get_cic(msg);
    gnss_standard_ephemeris->cis = mavlink_msg_gnss_standard_ephemeris_get_cis(msg);
    gnss_standard_ephemeris->fit = mavlink_msg_gnss_standard_ephemeris_get_fit(msg);
    gnss_standard_ephemeris->f0 = mavlink_msg_gnss_standard_ephemeris_get_f0(msg);
    gnss_standard_ephemeris->f1 = mavlink_msg_gnss_standard_ephemeris_get_f1(msg);
    gnss_standard_ephemeris->f2 = mavlink_msg_gnss_standard_ephemeris_get_f2(msg);
    mavlink_msg_gnss_standard_ephemeris_get_tgd(msg, gnss_standard_ephemeris->tgd);
    gnss_standard_ephemeris->Adot = mavlink_msg_gnss_standard_ephemeris_get_Adot(msg);
    gnss_standard_ephemeris->ndot = mavlink_msg_gnss_standard_ephemeris_get_ndot(msg);
    gnss_standard_ephemeris->toe = mavlink_msg_gnss_standard_ephemeris_get_toe(msg);
    gnss_standard_ephemeris->toc = mavlink_msg_gnss_standard_ephemeris_get_toc(msg);
    gnss_standard_ephemeris->ttr = mavlink_msg_gnss_standard_ephemeris_get_ttr(msg);
    gnss_standard_ephemeris->iode = mavlink_msg_gnss_standard_ephemeris_get_iode(msg);
    gnss_standard_ephemeris->iodc = mavlink_msg_gnss_standard_ephemeris_get_iodc(msg);
    gnss_standard_ephemeris->sva = mavlink_msg_gnss_standard_ephemeris_get_sva(msg);
    gnss_standard_ephemeris->week = mavlink_msg_gnss_standard_ephemeris_get_week(msg);
    gnss_standard_ephemeris->sat = mavlink_msg_gnss_standard_ephemeris_get_sat(msg);
    gnss_standard_ephemeris->svh = mavlink_msg_gnss_standard_ephemeris_get_svh(msg);
    gnss_standard_ephemeris->code = mavlink_msg_gnss_standard_ephemeris_get_code(msg);
    gnss_standard_ephemeris->flag = mavlink_msg_gnss_standard_ephemeris_get_flag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN? msg->len : MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN;
        memset(gnss_standard_ephemeris, 0, MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_LEN);
    memcpy(gnss_standard_ephemeris, _MAV_PAYLOAD(msg), len);
#endif
}
