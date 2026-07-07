#pragma once
// MESSAGE CONTROLLER_STATE PACKING

#define MAVLINK_MSG_ID_CONTROLLER_STATE 502


typedef struct __mavlink_controller_state_t {
 uint64_t time_usec; /*<  Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 float throttle_in; /*<  Normalized throttle input value in range [-1,1]*/
 float roll_in; /*<  Normalized roll input value in range [-1,1]*/
 float pitch_in; /*<  Normalized pitch input value in range [-1,1]*/
 float yaw_in; /*<  Normalized yaw input value in range [-1,1]*/
 float throttle_out; /*<  Normalized throttle input value in range [-1,1]*/
 float roll_out; /*<  Normalized roll input value in range [-1,1]*/
 float pitch_out; /*<  Normalized pitch input value in range [-1,1]*/
 float yaw_out; /*<  Normalized yaw input value in range [-1,1]*/
 int16_t mode; /*<  Current controller mode*/
 int16_t submode; /*<  Current controller sub mode*/
 int8_t active_axes; /*<  Binary flags indicating, which axes are affected by the controller (in order lsb first: roll,pitch,yaw,throttle, e.g. 0b1100 refers to active yaw and throttle axes) */
} mavlink_controller_state_t;

#define MAVLINK_MSG_ID_CONTROLLER_STATE_LEN 45
#define MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN 45
#define MAVLINK_MSG_ID_502_LEN 45
#define MAVLINK_MSG_ID_502_MIN_LEN 45

#define MAVLINK_MSG_ID_CONTROLLER_STATE_CRC 159
#define MAVLINK_MSG_ID_502_CRC 159



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CONTROLLER_STATE { \
    502, \
    "CONTROLLER_STATE", \
    12, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_controller_state_t, time_usec) }, \
         { "mode", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_controller_state_t, mode) }, \
         { "submode", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_controller_state_t, submode) }, \
         { "active_axes", NULL, MAVLINK_TYPE_INT8_T, 0, 44, offsetof(mavlink_controller_state_t, active_axes) }, \
         { "throttle_in", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_controller_state_t, throttle_in) }, \
         { "roll_in", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_controller_state_t, roll_in) }, \
         { "pitch_in", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_controller_state_t, pitch_in) }, \
         { "yaw_in", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_controller_state_t, yaw_in) }, \
         { "throttle_out", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_controller_state_t, throttle_out) }, \
         { "roll_out", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_controller_state_t, roll_out) }, \
         { "pitch_out", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_controller_state_t, pitch_out) }, \
         { "yaw_out", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_controller_state_t, yaw_out) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CONTROLLER_STATE { \
    "CONTROLLER_STATE", \
    12, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_controller_state_t, time_usec) }, \
         { "mode", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_controller_state_t, mode) }, \
         { "submode", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_controller_state_t, submode) }, \
         { "active_axes", NULL, MAVLINK_TYPE_INT8_T, 0, 44, offsetof(mavlink_controller_state_t, active_axes) }, \
         { "throttle_in", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_controller_state_t, throttle_in) }, \
         { "roll_in", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_controller_state_t, roll_in) }, \
         { "pitch_in", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_controller_state_t, pitch_in) }, \
         { "yaw_in", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_controller_state_t, yaw_in) }, \
         { "throttle_out", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_controller_state_t, throttle_out) }, \
         { "roll_out", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_controller_state_t, roll_out) }, \
         { "pitch_out", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_controller_state_t, pitch_out) }, \
         { "yaw_out", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_controller_state_t, yaw_out) }, \
         } \
}
#endif

/**
 * @brief Pack a controller_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param mode  Current controller mode
 * @param submode  Current controller sub mode
 * @param active_axes  Binary flags indicating, which axes are affected by the controller (in order lsb first: roll,pitch,yaw,throttle, e.g. 0b1100 refers to active yaw and throttle axes) 
 * @param throttle_in  Normalized throttle input value in range [-1,1]
 * @param roll_in  Normalized roll input value in range [-1,1]
 * @param pitch_in  Normalized pitch input value in range [-1,1]
 * @param yaw_in  Normalized yaw input value in range [-1,1]
 * @param throttle_out  Normalized throttle input value in range [-1,1]
 * @param roll_out  Normalized roll input value in range [-1,1]
 * @param pitch_out  Normalized pitch input value in range [-1,1]
 * @param yaw_out  Normalized yaw input value in range [-1,1]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controller_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, int16_t mode, int16_t submode, int8_t active_axes, float throttle_in, float roll_in, float pitch_in, float yaw_in, float throttle_out, float roll_out, float pitch_out, float yaw_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONTROLLER_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, throttle_in);
    _mav_put_float(buf, 12, roll_in);
    _mav_put_float(buf, 16, pitch_in);
    _mav_put_float(buf, 20, yaw_in);
    _mav_put_float(buf, 24, throttle_out);
    _mav_put_float(buf, 28, roll_out);
    _mav_put_float(buf, 32, pitch_out);
    _mav_put_float(buf, 36, yaw_out);
    _mav_put_int16_t(buf, 40, mode);
    _mav_put_int16_t(buf, 42, submode);
    _mav_put_int8_t(buf, 44, active_axes);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN);
#else
    mavlink_controller_state_t packet;
    packet.time_usec = time_usec;
    packet.throttle_in = throttle_in;
    packet.roll_in = roll_in;
    packet.pitch_in = pitch_in;
    packet.yaw_in = yaw_in;
    packet.throttle_out = throttle_out;
    packet.roll_out = roll_out;
    packet.pitch_out = pitch_out;
    packet.yaw_out = yaw_out;
    packet.mode = mode;
    packet.submode = submode;
    packet.active_axes = active_axes;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONTROLLER_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_CRC);
}

/**
 * @brief Pack a controller_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param mode  Current controller mode
 * @param submode  Current controller sub mode
 * @param active_axes  Binary flags indicating, which axes are affected by the controller (in order lsb first: roll,pitch,yaw,throttle, e.g. 0b1100 refers to active yaw and throttle axes) 
 * @param throttle_in  Normalized throttle input value in range [-1,1]
 * @param roll_in  Normalized roll input value in range [-1,1]
 * @param pitch_in  Normalized pitch input value in range [-1,1]
 * @param yaw_in  Normalized yaw input value in range [-1,1]
 * @param throttle_out  Normalized throttle input value in range [-1,1]
 * @param roll_out  Normalized roll input value in range [-1,1]
 * @param pitch_out  Normalized pitch input value in range [-1,1]
 * @param yaw_out  Normalized yaw input value in range [-1,1]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controller_state_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, int16_t mode, int16_t submode, int8_t active_axes, float throttle_in, float roll_in, float pitch_in, float yaw_in, float throttle_out, float roll_out, float pitch_out, float yaw_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONTROLLER_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, throttle_in);
    _mav_put_float(buf, 12, roll_in);
    _mav_put_float(buf, 16, pitch_in);
    _mav_put_float(buf, 20, yaw_in);
    _mav_put_float(buf, 24, throttle_out);
    _mav_put_float(buf, 28, roll_out);
    _mav_put_float(buf, 32, pitch_out);
    _mav_put_float(buf, 36, yaw_out);
    _mav_put_int16_t(buf, 40, mode);
    _mav_put_int16_t(buf, 42, submode);
    _mav_put_int8_t(buf, 44, active_axes);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN);
#else
    mavlink_controller_state_t packet;
    packet.time_usec = time_usec;
    packet.throttle_in = throttle_in;
    packet.roll_in = roll_in;
    packet.pitch_in = pitch_in;
    packet.yaw_in = yaw_in;
    packet.throttle_out = throttle_out;
    packet.roll_out = roll_out;
    packet.pitch_out = pitch_out;
    packet.yaw_out = yaw_out;
    packet.mode = mode;
    packet.submode = submode;
    packet.active_axes = active_axes;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONTROLLER_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN);
#endif
}

/**
 * @brief Pack a controller_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param mode  Current controller mode
 * @param submode  Current controller sub mode
 * @param active_axes  Binary flags indicating, which axes are affected by the controller (in order lsb first: roll,pitch,yaw,throttle, e.g. 0b1100 refers to active yaw and throttle axes) 
 * @param throttle_in  Normalized throttle input value in range [-1,1]
 * @param roll_in  Normalized roll input value in range [-1,1]
 * @param pitch_in  Normalized pitch input value in range [-1,1]
 * @param yaw_in  Normalized yaw input value in range [-1,1]
 * @param throttle_out  Normalized throttle input value in range [-1,1]
 * @param roll_out  Normalized roll input value in range [-1,1]
 * @param pitch_out  Normalized pitch input value in range [-1,1]
 * @param yaw_out  Normalized yaw input value in range [-1,1]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_controller_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,int16_t mode,int16_t submode,int8_t active_axes,float throttle_in,float roll_in,float pitch_in,float yaw_in,float throttle_out,float roll_out,float pitch_out,float yaw_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONTROLLER_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, throttle_in);
    _mav_put_float(buf, 12, roll_in);
    _mav_put_float(buf, 16, pitch_in);
    _mav_put_float(buf, 20, yaw_in);
    _mav_put_float(buf, 24, throttle_out);
    _mav_put_float(buf, 28, roll_out);
    _mav_put_float(buf, 32, pitch_out);
    _mav_put_float(buf, 36, yaw_out);
    _mav_put_int16_t(buf, 40, mode);
    _mav_put_int16_t(buf, 42, submode);
    _mav_put_int8_t(buf, 44, active_axes);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN);
#else
    mavlink_controller_state_t packet;
    packet.time_usec = time_usec;
    packet.throttle_in = throttle_in;
    packet.roll_in = roll_in;
    packet.pitch_in = pitch_in;
    packet.yaw_in = yaw_in;
    packet.throttle_out = throttle_out;
    packet.roll_out = roll_out;
    packet.pitch_out = pitch_out;
    packet.yaw_out = yaw_out;
    packet.mode = mode;
    packet.submode = submode;
    packet.active_axes = active_axes;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CONTROLLER_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_CRC);
}

/**
 * @brief Encode a controller_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param controller_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controller_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_controller_state_t* controller_state)
{
    return mavlink_msg_controller_state_pack(system_id, component_id, msg, controller_state->time_usec, controller_state->mode, controller_state->submode, controller_state->active_axes, controller_state->throttle_in, controller_state->roll_in, controller_state->pitch_in, controller_state->yaw_in, controller_state->throttle_out, controller_state->roll_out, controller_state->pitch_out, controller_state->yaw_out);
}

/**
 * @brief Encode a controller_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param controller_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controller_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_controller_state_t* controller_state)
{
    return mavlink_msg_controller_state_pack_chan(system_id, component_id, chan, msg, controller_state->time_usec, controller_state->mode, controller_state->submode, controller_state->active_axes, controller_state->throttle_in, controller_state->roll_in, controller_state->pitch_in, controller_state->yaw_in, controller_state->throttle_out, controller_state->roll_out, controller_state->pitch_out, controller_state->yaw_out);
}

/**
 * @brief Encode a controller_state struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param controller_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_controller_state_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_controller_state_t* controller_state)
{
    return mavlink_msg_controller_state_pack_status(system_id, component_id, _status, msg,  controller_state->time_usec, controller_state->mode, controller_state->submode, controller_state->active_axes, controller_state->throttle_in, controller_state->roll_in, controller_state->pitch_in, controller_state->yaw_in, controller_state->throttle_out, controller_state->roll_out, controller_state->pitch_out, controller_state->yaw_out);
}

/**
 * @brief Send a controller_state message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param mode  Current controller mode
 * @param submode  Current controller sub mode
 * @param active_axes  Binary flags indicating, which axes are affected by the controller (in order lsb first: roll,pitch,yaw,throttle, e.g. 0b1100 refers to active yaw and throttle axes) 
 * @param throttle_in  Normalized throttle input value in range [-1,1]
 * @param roll_in  Normalized roll input value in range [-1,1]
 * @param pitch_in  Normalized pitch input value in range [-1,1]
 * @param yaw_in  Normalized yaw input value in range [-1,1]
 * @param throttle_out  Normalized throttle input value in range [-1,1]
 * @param roll_out  Normalized roll input value in range [-1,1]
 * @param pitch_out  Normalized pitch input value in range [-1,1]
 * @param yaw_out  Normalized yaw input value in range [-1,1]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_controller_state_send(mavlink_channel_t chan, uint64_t time_usec, int16_t mode, int16_t submode, int8_t active_axes, float throttle_in, float roll_in, float pitch_in, float yaw_in, float throttle_out, float roll_out, float pitch_out, float yaw_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CONTROLLER_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, throttle_in);
    _mav_put_float(buf, 12, roll_in);
    _mav_put_float(buf, 16, pitch_in);
    _mav_put_float(buf, 20, yaw_in);
    _mav_put_float(buf, 24, throttle_out);
    _mav_put_float(buf, 28, roll_out);
    _mav_put_float(buf, 32, pitch_out);
    _mav_put_float(buf, 36, yaw_out);
    _mav_put_int16_t(buf, 40, mode);
    _mav_put_int16_t(buf, 42, submode);
    _mav_put_int8_t(buf, 44, active_axes);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_STATE, buf, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_CRC);
#else
    mavlink_controller_state_t packet;
    packet.time_usec = time_usec;
    packet.throttle_in = throttle_in;
    packet.roll_in = roll_in;
    packet.pitch_in = pitch_in;
    packet.yaw_in = yaw_in;
    packet.throttle_out = throttle_out;
    packet.roll_out = roll_out;
    packet.pitch_out = pitch_out;
    packet.yaw_out = yaw_out;
    packet.mode = mode;
    packet.submode = submode;
    packet.active_axes = active_axes;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_STATE, (const char *)&packet, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_CRC);
#endif
}

/**
 * @brief Send a controller_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_controller_state_send_struct(mavlink_channel_t chan, const mavlink_controller_state_t* controller_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_controller_state_send(chan, controller_state->time_usec, controller_state->mode, controller_state->submode, controller_state->active_axes, controller_state->throttle_in, controller_state->roll_in, controller_state->pitch_in, controller_state->yaw_in, controller_state->throttle_out, controller_state->roll_out, controller_state->pitch_out, controller_state->yaw_out);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_STATE, (const char *)controller_state, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CONTROLLER_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_controller_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, int16_t mode, int16_t submode, int8_t active_axes, float throttle_in, float roll_in, float pitch_in, float yaw_in, float throttle_out, float roll_out, float pitch_out, float yaw_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, throttle_in);
    _mav_put_float(buf, 12, roll_in);
    _mav_put_float(buf, 16, pitch_in);
    _mav_put_float(buf, 20, yaw_in);
    _mav_put_float(buf, 24, throttle_out);
    _mav_put_float(buf, 28, roll_out);
    _mav_put_float(buf, 32, pitch_out);
    _mav_put_float(buf, 36, yaw_out);
    _mav_put_int16_t(buf, 40, mode);
    _mav_put_int16_t(buf, 42, submode);
    _mav_put_int8_t(buf, 44, active_axes);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_STATE, buf, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_CRC);
#else
    mavlink_controller_state_t *packet = (mavlink_controller_state_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->throttle_in = throttle_in;
    packet->roll_in = roll_in;
    packet->pitch_in = pitch_in;
    packet->yaw_in = yaw_in;
    packet->throttle_out = throttle_out;
    packet->roll_out = roll_out;
    packet->pitch_out = pitch_out;
    packet->yaw_out = yaw_out;
    packet->mode = mode;
    packet->submode = submode;
    packet->active_axes = active_axes;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROLLER_STATE, (const char *)packet, MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN, MAVLINK_MSG_ID_CONTROLLER_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE CONTROLLER_STATE UNPACKING


/**
 * @brief Get field time_usec from controller_state message
 *
 * @return  Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_controller_state_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field mode from controller_state message
 *
 * @return  Current controller mode
 */
static inline int16_t mavlink_msg_controller_state_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field submode from controller_state message
 *
 * @return  Current controller sub mode
 */
static inline int16_t mavlink_msg_controller_state_get_submode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  42);
}

/**
 * @brief Get field active_axes from controller_state message
 *
 * @return  Binary flags indicating, which axes are affected by the controller (in order lsb first: roll,pitch,yaw,throttle, e.g. 0b1100 refers to active yaw and throttle axes) 
 */
static inline int8_t mavlink_msg_controller_state_get_active_axes(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  44);
}

/**
 * @brief Get field throttle_in from controller_state message
 *
 * @return  Normalized throttle input value in range [-1,1]
 */
static inline float mavlink_msg_controller_state_get_throttle_in(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field roll_in from controller_state message
 *
 * @return  Normalized roll input value in range [-1,1]
 */
static inline float mavlink_msg_controller_state_get_roll_in(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field pitch_in from controller_state message
 *
 * @return  Normalized pitch input value in range [-1,1]
 */
static inline float mavlink_msg_controller_state_get_pitch_in(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw_in from controller_state message
 *
 * @return  Normalized yaw input value in range [-1,1]
 */
static inline float mavlink_msg_controller_state_get_yaw_in(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field throttle_out from controller_state message
 *
 * @return  Normalized throttle input value in range [-1,1]
 */
static inline float mavlink_msg_controller_state_get_throttle_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field roll_out from controller_state message
 *
 * @return  Normalized roll input value in range [-1,1]
 */
static inline float mavlink_msg_controller_state_get_roll_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field pitch_out from controller_state message
 *
 * @return  Normalized pitch input value in range [-1,1]
 */
static inline float mavlink_msg_controller_state_get_pitch_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field yaw_out from controller_state message
 *
 * @return  Normalized yaw input value in range [-1,1]
 */
static inline float mavlink_msg_controller_state_get_yaw_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a controller_state message into a struct
 *
 * @param msg The message to decode
 * @param controller_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_controller_state_decode(const mavlink_message_t* msg, mavlink_controller_state_t* controller_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    controller_state->time_usec = mavlink_msg_controller_state_get_time_usec(msg);
    controller_state->throttle_in = mavlink_msg_controller_state_get_throttle_in(msg);
    controller_state->roll_in = mavlink_msg_controller_state_get_roll_in(msg);
    controller_state->pitch_in = mavlink_msg_controller_state_get_pitch_in(msg);
    controller_state->yaw_in = mavlink_msg_controller_state_get_yaw_in(msg);
    controller_state->throttle_out = mavlink_msg_controller_state_get_throttle_out(msg);
    controller_state->roll_out = mavlink_msg_controller_state_get_roll_out(msg);
    controller_state->pitch_out = mavlink_msg_controller_state_get_pitch_out(msg);
    controller_state->yaw_out = mavlink_msg_controller_state_get_yaw_out(msg);
    controller_state->mode = mavlink_msg_controller_state_get_mode(msg);
    controller_state->submode = mavlink_msg_controller_state_get_submode(msg);
    controller_state->active_axes = mavlink_msg_controller_state_get_active_axes(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CONTROLLER_STATE_LEN? msg->len : MAVLINK_MSG_ID_CONTROLLER_STATE_LEN;
        memset(controller_state, 0, MAVLINK_MSG_ID_CONTROLLER_STATE_LEN);
    memcpy(controller_state, _MAV_PAYLOAD(msg), len);
#endif
}
