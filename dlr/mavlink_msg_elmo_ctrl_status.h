#pragma once
// MESSAGE ELMO_CTRL_STATUS PACKING

#define MAVLINK_MSG_ID_ELMO_CTRL_STATUS 546


typedef struct __mavlink_elmo_ctrl_status_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 float voltage; /*< [V] Measured motor drive voltage.*/
 int32_t pos; /*< [cts] Rotor position of motor in counts (cts).*/
 int32_t vel; /*< [ctss] Rotor velocity of motor in counts per second (cts/s).*/
 float current; /*< [A] Measured motor drive current.*/
 int32_t motionstatus; /*< [cts] Motor controller motionstatus flag.*/
 int32_t status; /*<  Motor controller motionstatus.*/
 int32_t motor_failures; /*<  Motor controller failure code.*/
 int32_t error_code; /*<  Motor controller error code.*/
 int32_t error_code_extended; /*<  Motor controller extended error code flag.*/
 int32_t pos_sp; /*< [cts] Rotor position setpoint of motor in counts (cts).*/
 int32_t vel_sp; /*< [rad] Rotor velocity setpoint of motor in counts per second (cts/s).*/
 float current_sp; /*< [A] Motor current setpoint.*/
 int8_t temp; /*< [degC] Measured motor controller temperature.*/
} mavlink_elmo_ctrl_status_t;

#define MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN 57
#define MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN 57
#define MAVLINK_MSG_ID_546_LEN 57
#define MAVLINK_MSG_ID_546_MIN_LEN 57

#define MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC 205
#define MAVLINK_MSG_ID_546_CRC 205



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ELMO_CTRL_STATUS { \
    546, \
    "ELMO_CTRL_STATUS", \
    14, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_elmo_ctrl_status_t, time_usec) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_elmo_ctrl_status_t, voltage) }, \
         { "temp", NULL, MAVLINK_TYPE_INT8_T, 0, 56, offsetof(mavlink_elmo_ctrl_status_t, temp) }, \
         { "pos", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_elmo_ctrl_status_t, pos) }, \
         { "vel", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_elmo_ctrl_status_t, vel) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_elmo_ctrl_status_t, current) }, \
         { "motionstatus", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_elmo_ctrl_status_t, motionstatus) }, \
         { "status", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_elmo_ctrl_status_t, status) }, \
         { "motor_failures", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_elmo_ctrl_status_t, motor_failures) }, \
         { "error_code", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_elmo_ctrl_status_t, error_code) }, \
         { "error_code_extended", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_elmo_ctrl_status_t, error_code_extended) }, \
         { "pos_sp", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_elmo_ctrl_status_t, pos_sp) }, \
         { "vel_sp", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_elmo_ctrl_status_t, vel_sp) }, \
         { "current_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_elmo_ctrl_status_t, current_sp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ELMO_CTRL_STATUS { \
    "ELMO_CTRL_STATUS", \
    14, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_elmo_ctrl_status_t, time_usec) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_elmo_ctrl_status_t, voltage) }, \
         { "temp", NULL, MAVLINK_TYPE_INT8_T, 0, 56, offsetof(mavlink_elmo_ctrl_status_t, temp) }, \
         { "pos", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_elmo_ctrl_status_t, pos) }, \
         { "vel", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_elmo_ctrl_status_t, vel) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_elmo_ctrl_status_t, current) }, \
         { "motionstatus", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_elmo_ctrl_status_t, motionstatus) }, \
         { "status", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_elmo_ctrl_status_t, status) }, \
         { "motor_failures", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_elmo_ctrl_status_t, motor_failures) }, \
         { "error_code", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_elmo_ctrl_status_t, error_code) }, \
         { "error_code_extended", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_elmo_ctrl_status_t, error_code_extended) }, \
         { "pos_sp", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_elmo_ctrl_status_t, pos_sp) }, \
         { "vel_sp", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_elmo_ctrl_status_t, vel_sp) }, \
         { "current_sp", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_elmo_ctrl_status_t, current_sp) }, \
         } \
}
#endif

/**
 * @brief Pack a elmo_ctrl_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param voltage [V] Measured motor drive voltage.
 * @param temp [degC] Measured motor controller temperature.
 * @param pos [cts] Rotor position of motor in counts (cts).
 * @param vel [ctss] Rotor velocity of motor in counts per second (cts/s).
 * @param current [A] Measured motor drive current.
 * @param motionstatus [cts] Motor controller motionstatus flag.
 * @param status  Motor controller motionstatus.
 * @param motor_failures  Motor controller failure code.
 * @param error_code  Motor controller error code.
 * @param error_code_extended  Motor controller extended error code flag.
 * @param pos_sp [cts] Rotor position setpoint of motor in counts (cts).
 * @param vel_sp [rad] Rotor velocity setpoint of motor in counts per second (cts/s).
 * @param current_sp [A] Motor current setpoint.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_elmo_ctrl_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float voltage, int8_t temp, int32_t pos, int32_t vel, float current, int32_t motionstatus, int32_t status, int32_t motor_failures, int32_t error_code, int32_t error_code_extended, int32_t pos_sp, int32_t vel_sp, float current_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_int32_t(buf, 12, pos);
    _mav_put_int32_t(buf, 16, vel);
    _mav_put_float(buf, 20, current);
    _mav_put_int32_t(buf, 24, motionstatus);
    _mav_put_int32_t(buf, 28, status);
    _mav_put_int32_t(buf, 32, motor_failures);
    _mav_put_int32_t(buf, 36, error_code);
    _mav_put_int32_t(buf, 40, error_code_extended);
    _mav_put_int32_t(buf, 44, pos_sp);
    _mav_put_int32_t(buf, 48, vel_sp);
    _mav_put_float(buf, 52, current_sp);
    _mav_put_int8_t(buf, 56, temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN);
#else
    mavlink_elmo_ctrl_status_t packet;
    packet.time_usec = time_usec;
    packet.voltage = voltage;
    packet.pos = pos;
    packet.vel = vel;
    packet.current = current;
    packet.motionstatus = motionstatus;
    packet.status = status;
    packet.motor_failures = motor_failures;
    packet.error_code = error_code;
    packet.error_code_extended = error_code_extended;
    packet.pos_sp = pos_sp;
    packet.vel_sp = vel_sp;
    packet.current_sp = current_sp;
    packet.temp = temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ELMO_CTRL_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC);
}

/**
 * @brief Pack a elmo_ctrl_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param voltage [V] Measured motor drive voltage.
 * @param temp [degC] Measured motor controller temperature.
 * @param pos [cts] Rotor position of motor in counts (cts).
 * @param vel [ctss] Rotor velocity of motor in counts per second (cts/s).
 * @param current [A] Measured motor drive current.
 * @param motionstatus [cts] Motor controller motionstatus flag.
 * @param status  Motor controller motionstatus.
 * @param motor_failures  Motor controller failure code.
 * @param error_code  Motor controller error code.
 * @param error_code_extended  Motor controller extended error code flag.
 * @param pos_sp [cts] Rotor position setpoint of motor in counts (cts).
 * @param vel_sp [rad] Rotor velocity setpoint of motor in counts per second (cts/s).
 * @param current_sp [A] Motor current setpoint.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_elmo_ctrl_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, float voltage, int8_t temp, int32_t pos, int32_t vel, float current, int32_t motionstatus, int32_t status, int32_t motor_failures, int32_t error_code, int32_t error_code_extended, int32_t pos_sp, int32_t vel_sp, float current_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_int32_t(buf, 12, pos);
    _mav_put_int32_t(buf, 16, vel);
    _mav_put_float(buf, 20, current);
    _mav_put_int32_t(buf, 24, motionstatus);
    _mav_put_int32_t(buf, 28, status);
    _mav_put_int32_t(buf, 32, motor_failures);
    _mav_put_int32_t(buf, 36, error_code);
    _mav_put_int32_t(buf, 40, error_code_extended);
    _mav_put_int32_t(buf, 44, pos_sp);
    _mav_put_int32_t(buf, 48, vel_sp);
    _mav_put_float(buf, 52, current_sp);
    _mav_put_int8_t(buf, 56, temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN);
#else
    mavlink_elmo_ctrl_status_t packet;
    packet.time_usec = time_usec;
    packet.voltage = voltage;
    packet.pos = pos;
    packet.vel = vel;
    packet.current = current;
    packet.motionstatus = motionstatus;
    packet.status = status;
    packet.motor_failures = motor_failures;
    packet.error_code = error_code;
    packet.error_code_extended = error_code_extended;
    packet.pos_sp = pos_sp;
    packet.vel_sp = vel_sp;
    packet.current_sp = current_sp;
    packet.temp = temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ELMO_CTRL_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN);
#endif
}

/**
 * @brief Pack a elmo_ctrl_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param voltage [V] Measured motor drive voltage.
 * @param temp [degC] Measured motor controller temperature.
 * @param pos [cts] Rotor position of motor in counts (cts).
 * @param vel [ctss] Rotor velocity of motor in counts per second (cts/s).
 * @param current [A] Measured motor drive current.
 * @param motionstatus [cts] Motor controller motionstatus flag.
 * @param status  Motor controller motionstatus.
 * @param motor_failures  Motor controller failure code.
 * @param error_code  Motor controller error code.
 * @param error_code_extended  Motor controller extended error code flag.
 * @param pos_sp [cts] Rotor position setpoint of motor in counts (cts).
 * @param vel_sp [rad] Rotor velocity setpoint of motor in counts per second (cts/s).
 * @param current_sp [A] Motor current setpoint.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_elmo_ctrl_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float voltage,int8_t temp,int32_t pos,int32_t vel,float current,int32_t motionstatus,int32_t status,int32_t motor_failures,int32_t error_code,int32_t error_code_extended,int32_t pos_sp,int32_t vel_sp,float current_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_int32_t(buf, 12, pos);
    _mav_put_int32_t(buf, 16, vel);
    _mav_put_float(buf, 20, current);
    _mav_put_int32_t(buf, 24, motionstatus);
    _mav_put_int32_t(buf, 28, status);
    _mav_put_int32_t(buf, 32, motor_failures);
    _mav_put_int32_t(buf, 36, error_code);
    _mav_put_int32_t(buf, 40, error_code_extended);
    _mav_put_int32_t(buf, 44, pos_sp);
    _mav_put_int32_t(buf, 48, vel_sp);
    _mav_put_float(buf, 52, current_sp);
    _mav_put_int8_t(buf, 56, temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN);
#else
    mavlink_elmo_ctrl_status_t packet;
    packet.time_usec = time_usec;
    packet.voltage = voltage;
    packet.pos = pos;
    packet.vel = vel;
    packet.current = current;
    packet.motionstatus = motionstatus;
    packet.status = status;
    packet.motor_failures = motor_failures;
    packet.error_code = error_code;
    packet.error_code_extended = error_code_extended;
    packet.pos_sp = pos_sp;
    packet.vel_sp = vel_sp;
    packet.current_sp = current_sp;
    packet.temp = temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ELMO_CTRL_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC);
}

/**
 * @brief Encode a elmo_ctrl_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param elmo_ctrl_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_elmo_ctrl_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_elmo_ctrl_status_t* elmo_ctrl_status)
{
    return mavlink_msg_elmo_ctrl_status_pack(system_id, component_id, msg, elmo_ctrl_status->time_usec, elmo_ctrl_status->voltage, elmo_ctrl_status->temp, elmo_ctrl_status->pos, elmo_ctrl_status->vel, elmo_ctrl_status->current, elmo_ctrl_status->motionstatus, elmo_ctrl_status->status, elmo_ctrl_status->motor_failures, elmo_ctrl_status->error_code, elmo_ctrl_status->error_code_extended, elmo_ctrl_status->pos_sp, elmo_ctrl_status->vel_sp, elmo_ctrl_status->current_sp);
}

/**
 * @brief Encode a elmo_ctrl_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param elmo_ctrl_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_elmo_ctrl_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_elmo_ctrl_status_t* elmo_ctrl_status)
{
    return mavlink_msg_elmo_ctrl_status_pack_chan(system_id, component_id, chan, msg, elmo_ctrl_status->time_usec, elmo_ctrl_status->voltage, elmo_ctrl_status->temp, elmo_ctrl_status->pos, elmo_ctrl_status->vel, elmo_ctrl_status->current, elmo_ctrl_status->motionstatus, elmo_ctrl_status->status, elmo_ctrl_status->motor_failures, elmo_ctrl_status->error_code, elmo_ctrl_status->error_code_extended, elmo_ctrl_status->pos_sp, elmo_ctrl_status->vel_sp, elmo_ctrl_status->current_sp);
}

/**
 * @brief Encode a elmo_ctrl_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param elmo_ctrl_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_elmo_ctrl_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_elmo_ctrl_status_t* elmo_ctrl_status)
{
    return mavlink_msg_elmo_ctrl_status_pack_status(system_id, component_id, _status, msg,  elmo_ctrl_status->time_usec, elmo_ctrl_status->voltage, elmo_ctrl_status->temp, elmo_ctrl_status->pos, elmo_ctrl_status->vel, elmo_ctrl_status->current, elmo_ctrl_status->motionstatus, elmo_ctrl_status->status, elmo_ctrl_status->motor_failures, elmo_ctrl_status->error_code, elmo_ctrl_status->error_code_extended, elmo_ctrl_status->pos_sp, elmo_ctrl_status->vel_sp, elmo_ctrl_status->current_sp);
}

/**
 * @brief Send a elmo_ctrl_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param voltage [V] Measured motor drive voltage.
 * @param temp [degC] Measured motor controller temperature.
 * @param pos [cts] Rotor position of motor in counts (cts).
 * @param vel [ctss] Rotor velocity of motor in counts per second (cts/s).
 * @param current [A] Measured motor drive current.
 * @param motionstatus [cts] Motor controller motionstatus flag.
 * @param status  Motor controller motionstatus.
 * @param motor_failures  Motor controller failure code.
 * @param error_code  Motor controller error code.
 * @param error_code_extended  Motor controller extended error code flag.
 * @param pos_sp [cts] Rotor position setpoint of motor in counts (cts).
 * @param vel_sp [rad] Rotor velocity setpoint of motor in counts per second (cts/s).
 * @param current_sp [A] Motor current setpoint.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_elmo_ctrl_status_send(mavlink_channel_t chan, uint64_t time_usec, float voltage, int8_t temp, int32_t pos, int32_t vel, float current, int32_t motionstatus, int32_t status, int32_t motor_failures, int32_t error_code, int32_t error_code_extended, int32_t pos_sp, int32_t vel_sp, float current_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_int32_t(buf, 12, pos);
    _mav_put_int32_t(buf, 16, vel);
    _mav_put_float(buf, 20, current);
    _mav_put_int32_t(buf, 24, motionstatus);
    _mav_put_int32_t(buf, 28, status);
    _mav_put_int32_t(buf, 32, motor_failures);
    _mav_put_int32_t(buf, 36, error_code);
    _mav_put_int32_t(buf, 40, error_code_extended);
    _mav_put_int32_t(buf, 44, pos_sp);
    _mav_put_int32_t(buf, 48, vel_sp);
    _mav_put_float(buf, 52, current_sp);
    _mav_put_int8_t(buf, 56, temp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELMO_CTRL_STATUS, buf, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC);
#else
    mavlink_elmo_ctrl_status_t packet;
    packet.time_usec = time_usec;
    packet.voltage = voltage;
    packet.pos = pos;
    packet.vel = vel;
    packet.current = current;
    packet.motionstatus = motionstatus;
    packet.status = status;
    packet.motor_failures = motor_failures;
    packet.error_code = error_code;
    packet.error_code_extended = error_code_extended;
    packet.pos_sp = pos_sp;
    packet.vel_sp = vel_sp;
    packet.current_sp = current_sp;
    packet.temp = temp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELMO_CTRL_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC);
#endif
}

/**
 * @brief Send a elmo_ctrl_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_elmo_ctrl_status_send_struct(mavlink_channel_t chan, const mavlink_elmo_ctrl_status_t* elmo_ctrl_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_elmo_ctrl_status_send(chan, elmo_ctrl_status->time_usec, elmo_ctrl_status->voltage, elmo_ctrl_status->temp, elmo_ctrl_status->pos, elmo_ctrl_status->vel, elmo_ctrl_status->current, elmo_ctrl_status->motionstatus, elmo_ctrl_status->status, elmo_ctrl_status->motor_failures, elmo_ctrl_status->error_code, elmo_ctrl_status->error_code_extended, elmo_ctrl_status->pos_sp, elmo_ctrl_status->vel_sp, elmo_ctrl_status->current_sp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELMO_CTRL_STATUS, (const char *)elmo_ctrl_status, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_elmo_ctrl_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float voltage, int8_t temp, int32_t pos, int32_t vel, float current, int32_t motionstatus, int32_t status, int32_t motor_failures, int32_t error_code, int32_t error_code_extended, int32_t pos_sp, int32_t vel_sp, float current_sp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, voltage);
    _mav_put_int32_t(buf, 12, pos);
    _mav_put_int32_t(buf, 16, vel);
    _mav_put_float(buf, 20, current);
    _mav_put_int32_t(buf, 24, motionstatus);
    _mav_put_int32_t(buf, 28, status);
    _mav_put_int32_t(buf, 32, motor_failures);
    _mav_put_int32_t(buf, 36, error_code);
    _mav_put_int32_t(buf, 40, error_code_extended);
    _mav_put_int32_t(buf, 44, pos_sp);
    _mav_put_int32_t(buf, 48, vel_sp);
    _mav_put_float(buf, 52, current_sp);
    _mav_put_int8_t(buf, 56, temp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELMO_CTRL_STATUS, buf, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC);
#else
    mavlink_elmo_ctrl_status_t *packet = (mavlink_elmo_ctrl_status_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->voltage = voltage;
    packet->pos = pos;
    packet->vel = vel;
    packet->current = current;
    packet->motionstatus = motionstatus;
    packet->status = status;
    packet->motor_failures = motor_failures;
    packet->error_code = error_code;
    packet->error_code_extended = error_code_extended;
    packet->pos_sp = pos_sp;
    packet->vel_sp = vel_sp;
    packet->current_sp = current_sp;
    packet->temp = temp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELMO_CTRL_STATUS, (const char *)packet, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ELMO_CTRL_STATUS UNPACKING


/**
 * @brief Get field time_usec from elmo_ctrl_status message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_elmo_ctrl_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field voltage from elmo_ctrl_status message
 *
 * @return [V] Measured motor drive voltage.
 */
static inline float mavlink_msg_elmo_ctrl_status_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field temp from elmo_ctrl_status message
 *
 * @return [degC] Measured motor controller temperature.
 */
static inline int8_t mavlink_msg_elmo_ctrl_status_get_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  56);
}

/**
 * @brief Get field pos from elmo_ctrl_status message
 *
 * @return [cts] Rotor position of motor in counts (cts).
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field vel from elmo_ctrl_status message
 *
 * @return [ctss] Rotor velocity of motor in counts per second (cts/s).
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field current from elmo_ctrl_status message
 *
 * @return [A] Measured motor drive current.
 */
static inline float mavlink_msg_elmo_ctrl_status_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field motionstatus from elmo_ctrl_status message
 *
 * @return [cts] Motor controller motionstatus flag.
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_motionstatus(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field status from elmo_ctrl_status message
 *
 * @return  Motor controller motionstatus.
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field motor_failures from elmo_ctrl_status message
 *
 * @return  Motor controller failure code.
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_motor_failures(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field error_code from elmo_ctrl_status message
 *
 * @return  Motor controller error code.
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_error_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field error_code_extended from elmo_ctrl_status message
 *
 * @return  Motor controller extended error code flag.
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_error_code_extended(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field pos_sp from elmo_ctrl_status message
 *
 * @return [cts] Rotor position setpoint of motor in counts (cts).
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_pos_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field vel_sp from elmo_ctrl_status message
 *
 * @return [rad] Rotor velocity setpoint of motor in counts per second (cts/s).
 */
static inline int32_t mavlink_msg_elmo_ctrl_status_get_vel_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  48);
}

/**
 * @brief Get field current_sp from elmo_ctrl_status message
 *
 * @return [A] Motor current setpoint.
 */
static inline float mavlink_msg_elmo_ctrl_status_get_current_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Decode a elmo_ctrl_status message into a struct
 *
 * @param msg The message to decode
 * @param elmo_ctrl_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_elmo_ctrl_status_decode(const mavlink_message_t* msg, mavlink_elmo_ctrl_status_t* elmo_ctrl_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    elmo_ctrl_status->time_usec = mavlink_msg_elmo_ctrl_status_get_time_usec(msg);
    elmo_ctrl_status->voltage = mavlink_msg_elmo_ctrl_status_get_voltage(msg);
    elmo_ctrl_status->pos = mavlink_msg_elmo_ctrl_status_get_pos(msg);
    elmo_ctrl_status->vel = mavlink_msg_elmo_ctrl_status_get_vel(msg);
    elmo_ctrl_status->current = mavlink_msg_elmo_ctrl_status_get_current(msg);
    elmo_ctrl_status->motionstatus = mavlink_msg_elmo_ctrl_status_get_motionstatus(msg);
    elmo_ctrl_status->status = mavlink_msg_elmo_ctrl_status_get_status(msg);
    elmo_ctrl_status->motor_failures = mavlink_msg_elmo_ctrl_status_get_motor_failures(msg);
    elmo_ctrl_status->error_code = mavlink_msg_elmo_ctrl_status_get_error_code(msg);
    elmo_ctrl_status->error_code_extended = mavlink_msg_elmo_ctrl_status_get_error_code_extended(msg);
    elmo_ctrl_status->pos_sp = mavlink_msg_elmo_ctrl_status_get_pos_sp(msg);
    elmo_ctrl_status->vel_sp = mavlink_msg_elmo_ctrl_status_get_vel_sp(msg);
    elmo_ctrl_status->current_sp = mavlink_msg_elmo_ctrl_status_get_current_sp(msg);
    elmo_ctrl_status->temp = mavlink_msg_elmo_ctrl_status_get_temp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN;
        memset(elmo_ctrl_status, 0, MAVLINK_MSG_ID_ELMO_CTRL_STATUS_LEN);
    memcpy(elmo_ctrl_status, _MAV_PAYLOAD(msg), len);
#endif
}
