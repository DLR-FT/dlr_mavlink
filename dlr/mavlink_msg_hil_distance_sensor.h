#pragma once
// MESSAGE HIL_DISTANCE_SENSOR PACKING

#define MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR 538


typedef struct __mavlink_hil_distance_sensor_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 float quaternion[4]; /*<  Quaternion of the sensor orientation in vehicle body frame (w, x, y, z). Zero-rotation is along the vehicle body x-axis.*/
 int16_t min_distance; /*< [cm] Minimum distance the sensor can measure.*/
 int16_t max_distance; /*< [cm] Maximum distance the sensor can measure.*/
 int16_t current_distance; /*< [cm] Current distance the sensor is measuring.*/
 uint16_t signal_quality; /*<  Signal quality of the sensor. Calculated with the formula for TFmini. Ranges from 0 to 10000*/
 uint8_t orientation; /*<  Direction in which the sensor is oriented.*/
 uint8_t covariance; /*< [mm^2] Measurement variance.*/
} mavlink_hil_distance_sensor_t;

#define MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN 34
#define MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN 34
#define MAVLINK_MSG_ID_538_LEN 34
#define MAVLINK_MSG_ID_538_MIN_LEN 34

#define MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC 157
#define MAVLINK_MSG_ID_538_CRC 157

#define MAVLINK_MSG_HIL_DISTANCE_SENSOR_FIELD_QUATERNION_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HIL_DISTANCE_SENSOR { \
    538, \
    "HIL_DISTANCE_SENSOR", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_distance_sensor_t, time_usec) }, \
         { "min_distance", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_hil_distance_sensor_t, min_distance) }, \
         { "max_distance", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_hil_distance_sensor_t, max_distance) }, \
         { "current_distance", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_hil_distance_sensor_t, current_distance) }, \
         { "orientation", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_hil_distance_sensor_t, orientation) }, \
         { "covariance", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_hil_distance_sensor_t, covariance) }, \
         { "quaternion", NULL, MAVLINK_TYPE_FLOAT, 4, 8, offsetof(mavlink_hil_distance_sensor_t, quaternion) }, \
         { "signal_quality", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_hil_distance_sensor_t, signal_quality) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HIL_DISTANCE_SENSOR { \
    "HIL_DISTANCE_SENSOR", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hil_distance_sensor_t, time_usec) }, \
         { "min_distance", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_hil_distance_sensor_t, min_distance) }, \
         { "max_distance", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_hil_distance_sensor_t, max_distance) }, \
         { "current_distance", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_hil_distance_sensor_t, current_distance) }, \
         { "orientation", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_hil_distance_sensor_t, orientation) }, \
         { "covariance", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_hil_distance_sensor_t, covariance) }, \
         { "quaternion", NULL, MAVLINK_TYPE_FLOAT, 4, 8, offsetof(mavlink_hil_distance_sensor_t, quaternion) }, \
         { "signal_quality", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_hil_distance_sensor_t, signal_quality) }, \
         } \
}
#endif

/**
 * @brief Pack a hil_distance_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param min_distance [cm] Minimum distance the sensor can measure.
 * @param max_distance [cm] Maximum distance the sensor can measure.
 * @param current_distance [cm] Current distance the sensor is measuring.
 * @param orientation  Direction in which the sensor is oriented.
 * @param covariance [mm^2] Measurement variance.
 * @param quaternion  Quaternion of the sensor orientation in vehicle body frame (w, x, y, z). Zero-rotation is along the vehicle body x-axis.
 * @param signal_quality  Signal quality of the sensor. Calculated with the formula for TFmini. Ranges from 0 to 10000
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_distance_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, int16_t min_distance, int16_t max_distance, int16_t current_distance, uint8_t orientation, uint8_t covariance, const float *quaternion, uint16_t signal_quality)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 24, min_distance);
    _mav_put_int16_t(buf, 26, max_distance);
    _mav_put_int16_t(buf, 28, current_distance);
    _mav_put_uint16_t(buf, 30, signal_quality);
    _mav_put_uint8_t(buf, 32, orientation);
    _mav_put_uint8_t(buf, 33, covariance);
    _mav_put_float_array(buf, 8, quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN);
#else
    mavlink_hil_distance_sensor_t packet;
    packet.time_usec = time_usec;
    packet.min_distance = min_distance;
    packet.max_distance = max_distance;
    packet.current_distance = current_distance;
    packet.signal_quality = signal_quality;
    packet.orientation = orientation;
    packet.covariance = covariance;
    mav_array_assign_float(packet.quaternion, quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC);
}

/**
 * @brief Pack a hil_distance_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param min_distance [cm] Minimum distance the sensor can measure.
 * @param max_distance [cm] Maximum distance the sensor can measure.
 * @param current_distance [cm] Current distance the sensor is measuring.
 * @param orientation  Direction in which the sensor is oriented.
 * @param covariance [mm^2] Measurement variance.
 * @param quaternion  Quaternion of the sensor orientation in vehicle body frame (w, x, y, z). Zero-rotation is along the vehicle body x-axis.
 * @param signal_quality  Signal quality of the sensor. Calculated with the formula for TFmini. Ranges from 0 to 10000
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_distance_sensor_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, int16_t min_distance, int16_t max_distance, int16_t current_distance, uint8_t orientation, uint8_t covariance, const float *quaternion, uint16_t signal_quality)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 24, min_distance);
    _mav_put_int16_t(buf, 26, max_distance);
    _mav_put_int16_t(buf, 28, current_distance);
    _mav_put_uint16_t(buf, 30, signal_quality);
    _mav_put_uint8_t(buf, 32, orientation);
    _mav_put_uint8_t(buf, 33, covariance);
    _mav_put_float_array(buf, 8, quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN);
#else
    mavlink_hil_distance_sensor_t packet;
    packet.time_usec = time_usec;
    packet.min_distance = min_distance;
    packet.max_distance = max_distance;
    packet.current_distance = current_distance;
    packet.signal_quality = signal_quality;
    packet.orientation = orientation;
    packet.covariance = covariance;
    mav_array_memcpy(packet.quaternion, quaternion, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN);
#endif
}

/**
 * @brief Pack a hil_distance_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param min_distance [cm] Minimum distance the sensor can measure.
 * @param max_distance [cm] Maximum distance the sensor can measure.
 * @param current_distance [cm] Current distance the sensor is measuring.
 * @param orientation  Direction in which the sensor is oriented.
 * @param covariance [mm^2] Measurement variance.
 * @param quaternion  Quaternion of the sensor orientation in vehicle body frame (w, x, y, z). Zero-rotation is along the vehicle body x-axis.
 * @param signal_quality  Signal quality of the sensor. Calculated with the formula for TFmini. Ranges from 0 to 10000
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hil_distance_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,int16_t min_distance,int16_t max_distance,int16_t current_distance,uint8_t orientation,uint8_t covariance,const float *quaternion,uint16_t signal_quality)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 24, min_distance);
    _mav_put_int16_t(buf, 26, max_distance);
    _mav_put_int16_t(buf, 28, current_distance);
    _mav_put_uint16_t(buf, 30, signal_quality);
    _mav_put_uint8_t(buf, 32, orientation);
    _mav_put_uint8_t(buf, 33, covariance);
    _mav_put_float_array(buf, 8, quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN);
#else
    mavlink_hil_distance_sensor_t packet;
    packet.time_usec = time_usec;
    packet.min_distance = min_distance;
    packet.max_distance = max_distance;
    packet.current_distance = current_distance;
    packet.signal_quality = signal_quality;
    packet.orientation = orientation;
    packet.covariance = covariance;
    mav_array_assign_float(packet.quaternion, quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC);
}

/**
 * @brief Encode a hil_distance_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hil_distance_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_distance_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hil_distance_sensor_t* hil_distance_sensor)
{
    return mavlink_msg_hil_distance_sensor_pack(system_id, component_id, msg, hil_distance_sensor->time_usec, hil_distance_sensor->min_distance, hil_distance_sensor->max_distance, hil_distance_sensor->current_distance, hil_distance_sensor->orientation, hil_distance_sensor->covariance, hil_distance_sensor->quaternion, hil_distance_sensor->signal_quality);
}

/**
 * @brief Encode a hil_distance_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hil_distance_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_distance_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hil_distance_sensor_t* hil_distance_sensor)
{
    return mavlink_msg_hil_distance_sensor_pack_chan(system_id, component_id, chan, msg, hil_distance_sensor->time_usec, hil_distance_sensor->min_distance, hil_distance_sensor->max_distance, hil_distance_sensor->current_distance, hil_distance_sensor->orientation, hil_distance_sensor->covariance, hil_distance_sensor->quaternion, hil_distance_sensor->signal_quality);
}

/**
 * @brief Encode a hil_distance_sensor struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hil_distance_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hil_distance_sensor_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hil_distance_sensor_t* hil_distance_sensor)
{
    return mavlink_msg_hil_distance_sensor_pack_status(system_id, component_id, _status, msg,  hil_distance_sensor->time_usec, hil_distance_sensor->min_distance, hil_distance_sensor->max_distance, hil_distance_sensor->current_distance, hil_distance_sensor->orientation, hil_distance_sensor->covariance, hil_distance_sensor->quaternion, hil_distance_sensor->signal_quality);
}

/**
 * @brief Send a hil_distance_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param min_distance [cm] Minimum distance the sensor can measure.
 * @param max_distance [cm] Maximum distance the sensor can measure.
 * @param current_distance [cm] Current distance the sensor is measuring.
 * @param orientation  Direction in which the sensor is oriented.
 * @param covariance [mm^2] Measurement variance.
 * @param quaternion  Quaternion of the sensor orientation in vehicle body frame (w, x, y, z). Zero-rotation is along the vehicle body x-axis.
 * @param signal_quality  Signal quality of the sensor. Calculated with the formula for TFmini. Ranges from 0 to 10000
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hil_distance_sensor_send(mavlink_channel_t chan, uint64_t time_usec, int16_t min_distance, int16_t max_distance, int16_t current_distance, uint8_t orientation, uint8_t covariance, const float *quaternion, uint16_t signal_quality)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 24, min_distance);
    _mav_put_int16_t(buf, 26, max_distance);
    _mav_put_int16_t(buf, 28, current_distance);
    _mav_put_uint16_t(buf, 30, signal_quality);
    _mav_put_uint8_t(buf, 32, orientation);
    _mav_put_uint8_t(buf, 33, covariance);
    _mav_put_float_array(buf, 8, quaternion, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR, buf, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC);
#else
    mavlink_hil_distance_sensor_t packet;
    packet.time_usec = time_usec;
    packet.min_distance = min_distance;
    packet.max_distance = max_distance;
    packet.current_distance = current_distance;
    packet.signal_quality = signal_quality;
    packet.orientation = orientation;
    packet.covariance = covariance;
    mav_array_assign_float(packet.quaternion, quaternion, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC);
#endif
}

/**
 * @brief Send a hil_distance_sensor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hil_distance_sensor_send_struct(mavlink_channel_t chan, const mavlink_hil_distance_sensor_t* hil_distance_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hil_distance_sensor_send(chan, hil_distance_sensor->time_usec, hil_distance_sensor->min_distance, hil_distance_sensor->max_distance, hil_distance_sensor->current_distance, hil_distance_sensor->orientation, hil_distance_sensor->covariance, hil_distance_sensor->quaternion, hil_distance_sensor->signal_quality);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR, (const char *)hil_distance_sensor, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hil_distance_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int16_t min_distance, int16_t max_distance, int16_t current_distance, uint8_t orientation, uint8_t covariance, const float *quaternion, uint16_t signal_quality)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_int16_t(buf, 24, min_distance);
    _mav_put_int16_t(buf, 26, max_distance);
    _mav_put_int16_t(buf, 28, current_distance);
    _mav_put_uint16_t(buf, 30, signal_quality);
    _mav_put_uint8_t(buf, 32, orientation);
    _mav_put_uint8_t(buf, 33, covariance);
    _mav_put_float_array(buf, 8, quaternion, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR, buf, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC);
#else
    mavlink_hil_distance_sensor_t *packet = (mavlink_hil_distance_sensor_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->min_distance = min_distance;
    packet->max_distance = max_distance;
    packet->current_distance = current_distance;
    packet->signal_quality = signal_quality;
    packet->orientation = orientation;
    packet->covariance = covariance;
    mav_array_assign_float(packet->quaternion, quaternion, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR, (const char *)packet, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_CRC);
#endif
}
#endif

#endif

// MESSAGE HIL_DISTANCE_SENSOR UNPACKING


/**
 * @brief Get field time_usec from hil_distance_sensor message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_hil_distance_sensor_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field min_distance from hil_distance_sensor message
 *
 * @return [cm] Minimum distance the sensor can measure.
 */
static inline int16_t mavlink_msg_hil_distance_sensor_get_min_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field max_distance from hil_distance_sensor message
 *
 * @return [cm] Maximum distance the sensor can measure.
 */
static inline int16_t mavlink_msg_hil_distance_sensor_get_max_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field current_distance from hil_distance_sensor message
 *
 * @return [cm] Current distance the sensor is measuring.
 */
static inline int16_t mavlink_msg_hil_distance_sensor_get_current_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field orientation from hil_distance_sensor message
 *
 * @return  Direction in which the sensor is oriented.
 */
static inline uint8_t mavlink_msg_hil_distance_sensor_get_orientation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field covariance from hil_distance_sensor message
 *
 * @return [mm^2] Measurement variance.
 */
static inline uint8_t mavlink_msg_hil_distance_sensor_get_covariance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field quaternion from hil_distance_sensor message
 *
 * @return  Quaternion of the sensor orientation in vehicle body frame (w, x, y, z). Zero-rotation is along the vehicle body x-axis.
 */
static inline uint16_t mavlink_msg_hil_distance_sensor_get_quaternion(const mavlink_message_t* msg, float *quaternion)
{
    return _MAV_RETURN_float_array(msg, quaternion, 4,  8);
}

/**
 * @brief Get field signal_quality from hil_distance_sensor message
 *
 * @return  Signal quality of the sensor. Calculated with the formula for TFmini. Ranges from 0 to 10000
 */
static inline uint16_t mavlink_msg_hil_distance_sensor_get_signal_quality(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Decode a hil_distance_sensor message into a struct
 *
 * @param msg The message to decode
 * @param hil_distance_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_hil_distance_sensor_decode(const mavlink_message_t* msg, mavlink_hil_distance_sensor_t* hil_distance_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hil_distance_sensor->time_usec = mavlink_msg_hil_distance_sensor_get_time_usec(msg);
    mavlink_msg_hil_distance_sensor_get_quaternion(msg, hil_distance_sensor->quaternion);
    hil_distance_sensor->min_distance = mavlink_msg_hil_distance_sensor_get_min_distance(msg);
    hil_distance_sensor->max_distance = mavlink_msg_hil_distance_sensor_get_max_distance(msg);
    hil_distance_sensor->current_distance = mavlink_msg_hil_distance_sensor_get_current_distance(msg);
    hil_distance_sensor->signal_quality = mavlink_msg_hil_distance_sensor_get_signal_quality(msg);
    hil_distance_sensor->orientation = mavlink_msg_hil_distance_sensor_get_orientation(msg);
    hil_distance_sensor->covariance = mavlink_msg_hil_distance_sensor_get_covariance(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN? msg->len : MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN;
        memset(hil_distance_sensor, 0, MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_LEN);
    memcpy(hil_distance_sensor, _MAV_PAYLOAD(msg), len);
#endif
}
