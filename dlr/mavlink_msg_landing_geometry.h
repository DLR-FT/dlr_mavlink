#pragma once
// MESSAGE LANDING_GEOMETRY PACKING

#define MAVLINK_MSG_ID_LANDING_GEOMETRY 534


typedef struct __mavlink_landing_geometry_t {
 float heading_offset; /*< [rad] Orientation of longitudinal axis of landing pad with respect to true north. If installed on vehicle: Offset of longitudinal axis to vehicle's long. axis.*/
 uint16_t fore; /*< [cm] Clearance of landing pad in forward longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most forward point.*/
 uint16_t aft; /*< [cm] Clearance of landing pad in aft longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most aft point.*/
 uint16_t port; /*< [cm] Clearance of landing pad in lateral left direction. If installed on vehicle: Width of vehicle from CoP to most leftward point.*/
 uint16_t starboard; /*< [cm] Clearance of landing pad in lateral right direction. If installed on vehicle: Width of vehicle from CoP to most rightward point.*/
 uint16_t top; /*< [cm] Height of landing pad relative to surroundings. If installed on vehicle: Height of vehicle from CoP to highest point.*/
 uint16_t bottom; /*< [cm] Zero for landing pad installed on the ground. If installed on vehicle: Height of vehicle from CoP to lowest point.*/
 uint16_t dvalue; /*< [cm] D-Value of landing pad if present. Set to 0 if not present.*/
 uint16_t length; /*< [cm] Length of landing pad in longitudinal direction.*/
 uint16_t width; /*< [cm] Width of landing pad in lateral direction.*/
 int16_t pos_ref_x; /*< [cm] Longitudinal offset of position reference point (e.g. GNSS Antenna) to CoP.*/
 int16_t pos_ref_y; /*< [cm] Lateral offset of position reference point (e.g. GNSS Antenna) to CoP.*/
 int16_t pos_ref_z; /*< [cm] Height offset (down is positive) of position reference point (e.g. GNSS Antenna) to CoP.*/
} mavlink_landing_geometry_t;

#define MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN 28
#define MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN 28
#define MAVLINK_MSG_ID_534_LEN 28
#define MAVLINK_MSG_ID_534_MIN_LEN 28

#define MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC 31
#define MAVLINK_MSG_ID_534_CRC 31



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LANDING_GEOMETRY { \
    534, \
    "LANDING_GEOMETRY", \
    13, \
    {  { "fore", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_landing_geometry_t, fore) }, \
         { "aft", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_landing_geometry_t, aft) }, \
         { "port", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_landing_geometry_t, port) }, \
         { "starboard", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_landing_geometry_t, starboard) }, \
         { "top", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_landing_geometry_t, top) }, \
         { "bottom", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_landing_geometry_t, bottom) }, \
         { "dvalue", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_landing_geometry_t, dvalue) }, \
         { "length", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_landing_geometry_t, length) }, \
         { "width", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_landing_geometry_t, width) }, \
         { "pos_ref_x", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_landing_geometry_t, pos_ref_x) }, \
         { "pos_ref_y", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_landing_geometry_t, pos_ref_y) }, \
         { "pos_ref_z", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_landing_geometry_t, pos_ref_z) }, \
         { "heading_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_landing_geometry_t, heading_offset) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LANDING_GEOMETRY { \
    "LANDING_GEOMETRY", \
    13, \
    {  { "fore", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_landing_geometry_t, fore) }, \
         { "aft", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_landing_geometry_t, aft) }, \
         { "port", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_landing_geometry_t, port) }, \
         { "starboard", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_landing_geometry_t, starboard) }, \
         { "top", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_landing_geometry_t, top) }, \
         { "bottom", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_landing_geometry_t, bottom) }, \
         { "dvalue", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_landing_geometry_t, dvalue) }, \
         { "length", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_landing_geometry_t, length) }, \
         { "width", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_landing_geometry_t, width) }, \
         { "pos_ref_x", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_landing_geometry_t, pos_ref_x) }, \
         { "pos_ref_y", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_landing_geometry_t, pos_ref_y) }, \
         { "pos_ref_z", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_landing_geometry_t, pos_ref_z) }, \
         { "heading_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_landing_geometry_t, heading_offset) }, \
         } \
}
#endif

/**
 * @brief Pack a landing_geometry message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param fore [cm] Clearance of landing pad in forward longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most forward point.
 * @param aft [cm] Clearance of landing pad in aft longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most aft point.
 * @param port [cm] Clearance of landing pad in lateral left direction. If installed on vehicle: Width of vehicle from CoP to most leftward point.
 * @param starboard [cm] Clearance of landing pad in lateral right direction. If installed on vehicle: Width of vehicle from CoP to most rightward point.
 * @param top [cm] Height of landing pad relative to surroundings. If installed on vehicle: Height of vehicle from CoP to highest point.
 * @param bottom [cm] Zero for landing pad installed on the ground. If installed on vehicle: Height of vehicle from CoP to lowest point.
 * @param dvalue [cm] D-Value of landing pad if present. Set to 0 if not present.
 * @param length [cm] Length of landing pad in longitudinal direction.
 * @param width [cm] Width of landing pad in lateral direction.
 * @param pos_ref_x [cm] Longitudinal offset of position reference point (e.g. GNSS Antenna) to CoP.
 * @param pos_ref_y [cm] Lateral offset of position reference point (e.g. GNSS Antenna) to CoP.
 * @param pos_ref_z [cm] Height offset (down is positive) of position reference point (e.g. GNSS Antenna) to CoP.
 * @param heading_offset [rad] Orientation of longitudinal axis of landing pad with respect to true north. If installed on vehicle: Offset of longitudinal axis to vehicle's long. axis.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_landing_geometry_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t fore, uint16_t aft, uint16_t port, uint16_t starboard, uint16_t top, uint16_t bottom, uint16_t dvalue, uint16_t length, uint16_t width, int16_t pos_ref_x, int16_t pos_ref_y, int16_t pos_ref_z, float heading_offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN];
    _mav_put_float(buf, 0, heading_offset);
    _mav_put_uint16_t(buf, 4, fore);
    _mav_put_uint16_t(buf, 6, aft);
    _mav_put_uint16_t(buf, 8, port);
    _mav_put_uint16_t(buf, 10, starboard);
    _mav_put_uint16_t(buf, 12, top);
    _mav_put_uint16_t(buf, 14, bottom);
    _mav_put_uint16_t(buf, 16, dvalue);
    _mav_put_uint16_t(buf, 18, length);
    _mav_put_uint16_t(buf, 20, width);
    _mav_put_int16_t(buf, 22, pos_ref_x);
    _mav_put_int16_t(buf, 24, pos_ref_y);
    _mav_put_int16_t(buf, 26, pos_ref_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN);
#else
    mavlink_landing_geometry_t packet;
    packet.heading_offset = heading_offset;
    packet.fore = fore;
    packet.aft = aft;
    packet.port = port;
    packet.starboard = starboard;
    packet.top = top;
    packet.bottom = bottom;
    packet.dvalue = dvalue;
    packet.length = length;
    packet.width = width;
    packet.pos_ref_x = pos_ref_x;
    packet.pos_ref_y = pos_ref_y;
    packet.pos_ref_z = pos_ref_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LANDING_GEOMETRY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC);
}

/**
 * @brief Pack a landing_geometry message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param fore [cm] Clearance of landing pad in forward longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most forward point.
 * @param aft [cm] Clearance of landing pad in aft longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most aft point.
 * @param port [cm] Clearance of landing pad in lateral left direction. If installed on vehicle: Width of vehicle from CoP to most leftward point.
 * @param starboard [cm] Clearance of landing pad in lateral right direction. If installed on vehicle: Width of vehicle from CoP to most rightward point.
 * @param top [cm] Height of landing pad relative to surroundings. If installed on vehicle: Height of vehicle from CoP to highest point.
 * @param bottom [cm] Zero for landing pad installed on the ground. If installed on vehicle: Height of vehicle from CoP to lowest point.
 * @param dvalue [cm] D-Value of landing pad if present. Set to 0 if not present.
 * @param length [cm] Length of landing pad in longitudinal direction.
 * @param width [cm] Width of landing pad in lateral direction.
 * @param pos_ref_x [cm] Longitudinal offset of position reference point (e.g. GNSS Antenna) to CoP.
 * @param pos_ref_y [cm] Lateral offset of position reference point (e.g. GNSS Antenna) to CoP.
 * @param pos_ref_z [cm] Height offset (down is positive) of position reference point (e.g. GNSS Antenna) to CoP.
 * @param heading_offset [rad] Orientation of longitudinal axis of landing pad with respect to true north. If installed on vehicle: Offset of longitudinal axis to vehicle's long. axis.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_landing_geometry_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t fore, uint16_t aft, uint16_t port, uint16_t starboard, uint16_t top, uint16_t bottom, uint16_t dvalue, uint16_t length, uint16_t width, int16_t pos_ref_x, int16_t pos_ref_y, int16_t pos_ref_z, float heading_offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN];
    _mav_put_float(buf, 0, heading_offset);
    _mav_put_uint16_t(buf, 4, fore);
    _mav_put_uint16_t(buf, 6, aft);
    _mav_put_uint16_t(buf, 8, port);
    _mav_put_uint16_t(buf, 10, starboard);
    _mav_put_uint16_t(buf, 12, top);
    _mav_put_uint16_t(buf, 14, bottom);
    _mav_put_uint16_t(buf, 16, dvalue);
    _mav_put_uint16_t(buf, 18, length);
    _mav_put_uint16_t(buf, 20, width);
    _mav_put_int16_t(buf, 22, pos_ref_x);
    _mav_put_int16_t(buf, 24, pos_ref_y);
    _mav_put_int16_t(buf, 26, pos_ref_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN);
#else
    mavlink_landing_geometry_t packet;
    packet.heading_offset = heading_offset;
    packet.fore = fore;
    packet.aft = aft;
    packet.port = port;
    packet.starboard = starboard;
    packet.top = top;
    packet.bottom = bottom;
    packet.dvalue = dvalue;
    packet.length = length;
    packet.width = width;
    packet.pos_ref_x = pos_ref_x;
    packet.pos_ref_y = pos_ref_y;
    packet.pos_ref_z = pos_ref_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LANDING_GEOMETRY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN);
#endif
}

/**
 * @brief Pack a landing_geometry message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fore [cm] Clearance of landing pad in forward longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most forward point.
 * @param aft [cm] Clearance of landing pad in aft longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most aft point.
 * @param port [cm] Clearance of landing pad in lateral left direction. If installed on vehicle: Width of vehicle from CoP to most leftward point.
 * @param starboard [cm] Clearance of landing pad in lateral right direction. If installed on vehicle: Width of vehicle from CoP to most rightward point.
 * @param top [cm] Height of landing pad relative to surroundings. If installed on vehicle: Height of vehicle from CoP to highest point.
 * @param bottom [cm] Zero for landing pad installed on the ground. If installed on vehicle: Height of vehicle from CoP to lowest point.
 * @param dvalue [cm] D-Value of landing pad if present. Set to 0 if not present.
 * @param length [cm] Length of landing pad in longitudinal direction.
 * @param width [cm] Width of landing pad in lateral direction.
 * @param pos_ref_x [cm] Longitudinal offset of position reference point (e.g. GNSS Antenna) to CoP.
 * @param pos_ref_y [cm] Lateral offset of position reference point (e.g. GNSS Antenna) to CoP.
 * @param pos_ref_z [cm] Height offset (down is positive) of position reference point (e.g. GNSS Antenna) to CoP.
 * @param heading_offset [rad] Orientation of longitudinal axis of landing pad with respect to true north. If installed on vehicle: Offset of longitudinal axis to vehicle's long. axis.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_landing_geometry_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t fore,uint16_t aft,uint16_t port,uint16_t starboard,uint16_t top,uint16_t bottom,uint16_t dvalue,uint16_t length,uint16_t width,int16_t pos_ref_x,int16_t pos_ref_y,int16_t pos_ref_z,float heading_offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN];
    _mav_put_float(buf, 0, heading_offset);
    _mav_put_uint16_t(buf, 4, fore);
    _mav_put_uint16_t(buf, 6, aft);
    _mav_put_uint16_t(buf, 8, port);
    _mav_put_uint16_t(buf, 10, starboard);
    _mav_put_uint16_t(buf, 12, top);
    _mav_put_uint16_t(buf, 14, bottom);
    _mav_put_uint16_t(buf, 16, dvalue);
    _mav_put_uint16_t(buf, 18, length);
    _mav_put_uint16_t(buf, 20, width);
    _mav_put_int16_t(buf, 22, pos_ref_x);
    _mav_put_int16_t(buf, 24, pos_ref_y);
    _mav_put_int16_t(buf, 26, pos_ref_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN);
#else
    mavlink_landing_geometry_t packet;
    packet.heading_offset = heading_offset;
    packet.fore = fore;
    packet.aft = aft;
    packet.port = port;
    packet.starboard = starboard;
    packet.top = top;
    packet.bottom = bottom;
    packet.dvalue = dvalue;
    packet.length = length;
    packet.width = width;
    packet.pos_ref_x = pos_ref_x;
    packet.pos_ref_y = pos_ref_y;
    packet.pos_ref_z = pos_ref_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LANDING_GEOMETRY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC);
}

/**
 * @brief Encode a landing_geometry struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param landing_geometry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_landing_geometry_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_landing_geometry_t* landing_geometry)
{
    return mavlink_msg_landing_geometry_pack(system_id, component_id, msg, landing_geometry->fore, landing_geometry->aft, landing_geometry->port, landing_geometry->starboard, landing_geometry->top, landing_geometry->bottom, landing_geometry->dvalue, landing_geometry->length, landing_geometry->width, landing_geometry->pos_ref_x, landing_geometry->pos_ref_y, landing_geometry->pos_ref_z, landing_geometry->heading_offset);
}

/**
 * @brief Encode a landing_geometry struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param landing_geometry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_landing_geometry_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_landing_geometry_t* landing_geometry)
{
    return mavlink_msg_landing_geometry_pack_chan(system_id, component_id, chan, msg, landing_geometry->fore, landing_geometry->aft, landing_geometry->port, landing_geometry->starboard, landing_geometry->top, landing_geometry->bottom, landing_geometry->dvalue, landing_geometry->length, landing_geometry->width, landing_geometry->pos_ref_x, landing_geometry->pos_ref_y, landing_geometry->pos_ref_z, landing_geometry->heading_offset);
}

/**
 * @brief Encode a landing_geometry struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param landing_geometry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_landing_geometry_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_landing_geometry_t* landing_geometry)
{
    return mavlink_msg_landing_geometry_pack_status(system_id, component_id, _status, msg,  landing_geometry->fore, landing_geometry->aft, landing_geometry->port, landing_geometry->starboard, landing_geometry->top, landing_geometry->bottom, landing_geometry->dvalue, landing_geometry->length, landing_geometry->width, landing_geometry->pos_ref_x, landing_geometry->pos_ref_y, landing_geometry->pos_ref_z, landing_geometry->heading_offset);
}

/**
 * @brief Send a landing_geometry message
 * @param chan MAVLink channel to send the message
 *
 * @param fore [cm] Clearance of landing pad in forward longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most forward point.
 * @param aft [cm] Clearance of landing pad in aft longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most aft point.
 * @param port [cm] Clearance of landing pad in lateral left direction. If installed on vehicle: Width of vehicle from CoP to most leftward point.
 * @param starboard [cm] Clearance of landing pad in lateral right direction. If installed on vehicle: Width of vehicle from CoP to most rightward point.
 * @param top [cm] Height of landing pad relative to surroundings. If installed on vehicle: Height of vehicle from CoP to highest point.
 * @param bottom [cm] Zero for landing pad installed on the ground. If installed on vehicle: Height of vehicle from CoP to lowest point.
 * @param dvalue [cm] D-Value of landing pad if present. Set to 0 if not present.
 * @param length [cm] Length of landing pad in longitudinal direction.
 * @param width [cm] Width of landing pad in lateral direction.
 * @param pos_ref_x [cm] Longitudinal offset of position reference point (e.g. GNSS Antenna) to CoP.
 * @param pos_ref_y [cm] Lateral offset of position reference point (e.g. GNSS Antenna) to CoP.
 * @param pos_ref_z [cm] Height offset (down is positive) of position reference point (e.g. GNSS Antenna) to CoP.
 * @param heading_offset [rad] Orientation of longitudinal axis of landing pad with respect to true north. If installed on vehicle: Offset of longitudinal axis to vehicle's long. axis.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_landing_geometry_send(mavlink_channel_t chan, uint16_t fore, uint16_t aft, uint16_t port, uint16_t starboard, uint16_t top, uint16_t bottom, uint16_t dvalue, uint16_t length, uint16_t width, int16_t pos_ref_x, int16_t pos_ref_y, int16_t pos_ref_z, float heading_offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN];
    _mav_put_float(buf, 0, heading_offset);
    _mav_put_uint16_t(buf, 4, fore);
    _mav_put_uint16_t(buf, 6, aft);
    _mav_put_uint16_t(buf, 8, port);
    _mav_put_uint16_t(buf, 10, starboard);
    _mav_put_uint16_t(buf, 12, top);
    _mav_put_uint16_t(buf, 14, bottom);
    _mav_put_uint16_t(buf, 16, dvalue);
    _mav_put_uint16_t(buf, 18, length);
    _mav_put_uint16_t(buf, 20, width);
    _mav_put_int16_t(buf, 22, pos_ref_x);
    _mav_put_int16_t(buf, 24, pos_ref_y);
    _mav_put_int16_t(buf, 26, pos_ref_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LANDING_GEOMETRY, buf, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC);
#else
    mavlink_landing_geometry_t packet;
    packet.heading_offset = heading_offset;
    packet.fore = fore;
    packet.aft = aft;
    packet.port = port;
    packet.starboard = starboard;
    packet.top = top;
    packet.bottom = bottom;
    packet.dvalue = dvalue;
    packet.length = length;
    packet.width = width;
    packet.pos_ref_x = pos_ref_x;
    packet.pos_ref_y = pos_ref_y;
    packet.pos_ref_z = pos_ref_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LANDING_GEOMETRY, (const char *)&packet, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC);
#endif
}

/**
 * @brief Send a landing_geometry message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_landing_geometry_send_struct(mavlink_channel_t chan, const mavlink_landing_geometry_t* landing_geometry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_landing_geometry_send(chan, landing_geometry->fore, landing_geometry->aft, landing_geometry->port, landing_geometry->starboard, landing_geometry->top, landing_geometry->bottom, landing_geometry->dvalue, landing_geometry->length, landing_geometry->width, landing_geometry->pos_ref_x, landing_geometry->pos_ref_y, landing_geometry->pos_ref_z, landing_geometry->heading_offset);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LANDING_GEOMETRY, (const char *)landing_geometry, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC);
#endif
}

#if MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_landing_geometry_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t fore, uint16_t aft, uint16_t port, uint16_t starboard, uint16_t top, uint16_t bottom, uint16_t dvalue, uint16_t length, uint16_t width, int16_t pos_ref_x, int16_t pos_ref_y, int16_t pos_ref_z, float heading_offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, heading_offset);
    _mav_put_uint16_t(buf, 4, fore);
    _mav_put_uint16_t(buf, 6, aft);
    _mav_put_uint16_t(buf, 8, port);
    _mav_put_uint16_t(buf, 10, starboard);
    _mav_put_uint16_t(buf, 12, top);
    _mav_put_uint16_t(buf, 14, bottom);
    _mav_put_uint16_t(buf, 16, dvalue);
    _mav_put_uint16_t(buf, 18, length);
    _mav_put_uint16_t(buf, 20, width);
    _mav_put_int16_t(buf, 22, pos_ref_x);
    _mav_put_int16_t(buf, 24, pos_ref_y);
    _mav_put_int16_t(buf, 26, pos_ref_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LANDING_GEOMETRY, buf, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC);
#else
    mavlink_landing_geometry_t *packet = (mavlink_landing_geometry_t *)msgbuf;
    packet->heading_offset = heading_offset;
    packet->fore = fore;
    packet->aft = aft;
    packet->port = port;
    packet->starboard = starboard;
    packet->top = top;
    packet->bottom = bottom;
    packet->dvalue = dvalue;
    packet->length = length;
    packet->width = width;
    packet->pos_ref_x = pos_ref_x;
    packet->pos_ref_y = pos_ref_y;
    packet->pos_ref_z = pos_ref_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LANDING_GEOMETRY, (const char *)packet, MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN, MAVLINK_MSG_ID_LANDING_GEOMETRY_CRC);
#endif
}
#endif

#endif

// MESSAGE LANDING_GEOMETRY UNPACKING


/**
 * @brief Get field fore from landing_geometry message
 *
 * @return [cm] Clearance of landing pad in forward longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most forward point.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_fore(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field aft from landing_geometry message
 *
 * @return [cm] Clearance of landing pad in aft longitudinal direction. If installed on vehicle: Length of vehicle from CoP to most aft point.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_aft(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field port from landing_geometry message
 *
 * @return [cm] Clearance of landing pad in lateral left direction. If installed on vehicle: Width of vehicle from CoP to most leftward point.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_port(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field starboard from landing_geometry message
 *
 * @return [cm] Clearance of landing pad in lateral right direction. If installed on vehicle: Width of vehicle from CoP to most rightward point.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_starboard(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field top from landing_geometry message
 *
 * @return [cm] Height of landing pad relative to surroundings. If installed on vehicle: Height of vehicle from CoP to highest point.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_top(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field bottom from landing_geometry message
 *
 * @return [cm] Zero for landing pad installed on the ground. If installed on vehicle: Height of vehicle from CoP to lowest point.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_bottom(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field dvalue from landing_geometry message
 *
 * @return [cm] D-Value of landing pad if present. Set to 0 if not present.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_dvalue(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field length from landing_geometry message
 *
 * @return [cm] Length of landing pad in longitudinal direction.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field width from landing_geometry message
 *
 * @return [cm] Width of landing pad in lateral direction.
 */
static inline uint16_t mavlink_msg_landing_geometry_get_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field pos_ref_x from landing_geometry message
 *
 * @return [cm] Longitudinal offset of position reference point (e.g. GNSS Antenna) to CoP.
 */
static inline int16_t mavlink_msg_landing_geometry_get_pos_ref_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field pos_ref_y from landing_geometry message
 *
 * @return [cm] Lateral offset of position reference point (e.g. GNSS Antenna) to CoP.
 */
static inline int16_t mavlink_msg_landing_geometry_get_pos_ref_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field pos_ref_z from landing_geometry message
 *
 * @return [cm] Height offset (down is positive) of position reference point (e.g. GNSS Antenna) to CoP.
 */
static inline int16_t mavlink_msg_landing_geometry_get_pos_ref_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field heading_offset from landing_geometry message
 *
 * @return [rad] Orientation of longitudinal axis of landing pad with respect to true north. If installed on vehicle: Offset of longitudinal axis to vehicle's long. axis.
 */
static inline float mavlink_msg_landing_geometry_get_heading_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a landing_geometry message into a struct
 *
 * @param msg The message to decode
 * @param landing_geometry C-struct to decode the message contents into
 */
static inline void mavlink_msg_landing_geometry_decode(const mavlink_message_t* msg, mavlink_landing_geometry_t* landing_geometry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    landing_geometry->heading_offset = mavlink_msg_landing_geometry_get_heading_offset(msg);
    landing_geometry->fore = mavlink_msg_landing_geometry_get_fore(msg);
    landing_geometry->aft = mavlink_msg_landing_geometry_get_aft(msg);
    landing_geometry->port = mavlink_msg_landing_geometry_get_port(msg);
    landing_geometry->starboard = mavlink_msg_landing_geometry_get_starboard(msg);
    landing_geometry->top = mavlink_msg_landing_geometry_get_top(msg);
    landing_geometry->bottom = mavlink_msg_landing_geometry_get_bottom(msg);
    landing_geometry->dvalue = mavlink_msg_landing_geometry_get_dvalue(msg);
    landing_geometry->length = mavlink_msg_landing_geometry_get_length(msg);
    landing_geometry->width = mavlink_msg_landing_geometry_get_width(msg);
    landing_geometry->pos_ref_x = mavlink_msg_landing_geometry_get_pos_ref_x(msg);
    landing_geometry->pos_ref_y = mavlink_msg_landing_geometry_get_pos_ref_y(msg);
    landing_geometry->pos_ref_z = mavlink_msg_landing_geometry_get_pos_ref_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN? msg->len : MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN;
        memset(landing_geometry, 0, MAVLINK_MSG_ID_LANDING_GEOMETRY_LEN);
    memcpy(landing_geometry, _MAV_PAYLOAD(msg), len);
#endif
}
