#pragma once
// MESSAGE ENGINE_STATUS PACKING

#define MAVLINK_MSG_ID_ENGINE_STATUS 542


typedef struct __mavlink_engine_status_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint16_t rpm; /*< [rpm] Reported motor RPM.*/
 uint16_t voltage; /*< [cV] Motor DC voltage measured. Combustion or turbine: fuel pump voltage,*/
 uint16_t fuelflow; /*<  Fuel flow of engine: fuel flow in Centiliter per minute (combustion or turbine), motor current in centi Amperes (electric).*/
 uint16_t fuelconsumed; /*<  Consumed power (electric in mAh) or fuel (in Centiliter) since system start or installation of battery.*/
 int16_t temperature; /*< [cdegC] Motor temperature.*/
 uint16_t gas; /*< [%] Motor gas setting in percent.*/
 uint16_t pwm; /*< [%] Motor pwm control signal in percent.*/
 uint16_t control_voltage; /*< [cV] If present, motor controller voltage.*/
 uint8_t id; /*<  ID number of engine. Should be unique and consistent for the lifetime of a vehicle.*/
 uint8_t power_id; /*<  ID number of the engine power source (battery for electric, fuel tank for combustion). Should be unique and consistent for the lifetime of a vehicle.*/
 uint8_t type; /*<  Engine Type, 0: Unknown, 1: Electric, 2: ESC, 3: Combustion, 4: Turbine*/
} mavlink_engine_status_t;

#define MAVLINK_MSG_ID_ENGINE_STATUS_LEN 27
#define MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN 27
#define MAVLINK_MSG_ID_542_LEN 27
#define MAVLINK_MSG_ID_542_MIN_LEN 27

#define MAVLINK_MSG_ID_ENGINE_STATUS_CRC 184
#define MAVLINK_MSG_ID_542_CRC 184



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ENGINE_STATUS { \
    542, \
    "ENGINE_STATUS", \
    12, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_engine_status_t, time_usec) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_engine_status_t, id) }, \
         { "power_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_engine_status_t, power_id) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_engine_status_t, type) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_engine_status_t, rpm) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_engine_status_t, voltage) }, \
         { "fuelflow", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_engine_status_t, fuelflow) }, \
         { "fuelconsumed", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_engine_status_t, fuelconsumed) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_engine_status_t, temperature) }, \
         { "gas", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_engine_status_t, gas) }, \
         { "pwm", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_engine_status_t, pwm) }, \
         { "control_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_engine_status_t, control_voltage) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ENGINE_STATUS { \
    "ENGINE_STATUS", \
    12, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_engine_status_t, time_usec) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_engine_status_t, id) }, \
         { "power_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_engine_status_t, power_id) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_engine_status_t, type) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_engine_status_t, rpm) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_engine_status_t, voltage) }, \
         { "fuelflow", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_engine_status_t, fuelflow) }, \
         { "fuelconsumed", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_engine_status_t, fuelconsumed) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_engine_status_t, temperature) }, \
         { "gas", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_engine_status_t, gas) }, \
         { "pwm", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_engine_status_t, pwm) }, \
         { "control_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_engine_status_t, control_voltage) }, \
         } \
}
#endif

/**
 * @brief Pack a engine_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param id  ID number of engine. Should be unique and consistent for the lifetime of a vehicle.
 * @param power_id  ID number of the engine power source (battery for electric, fuel tank for combustion). Should be unique and consistent for the lifetime of a vehicle.
 * @param type  Engine Type, 0: Unknown, 1: Electric, 2: ESC, 3: Combustion, 4: Turbine
 * @param rpm [rpm] Reported motor RPM.
 * @param voltage [cV] Motor DC voltage measured. Combustion or turbine: fuel pump voltage,
 * @param fuelflow  Fuel flow of engine: fuel flow in Centiliter per minute (combustion or turbine), motor current in centi Amperes (electric).
 * @param fuelconsumed  Consumed power (electric in mAh) or fuel (in Centiliter) since system start or installation of battery.
 * @param temperature [cdegC] Motor temperature.
 * @param gas [%] Motor gas setting in percent.
 * @param pwm [%] Motor pwm control signal in percent.
 * @param control_voltage [cV] If present, motor controller voltage.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_engine_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t id, uint8_t power_id, uint8_t type, uint16_t rpm, uint16_t voltage, uint16_t fuelflow, uint16_t fuelconsumed, int16_t temperature, uint16_t gas, uint16_t pwm, uint16_t control_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENGINE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, voltage);
    _mav_put_uint16_t(buf, 12, fuelflow);
    _mav_put_uint16_t(buf, 14, fuelconsumed);
    _mav_put_int16_t(buf, 16, temperature);
    _mav_put_uint16_t(buf, 18, gas);
    _mav_put_uint16_t(buf, 20, pwm);
    _mav_put_uint16_t(buf, 22, control_voltage);
    _mav_put_uint8_t(buf, 24, id);
    _mav_put_uint8_t(buf, 25, power_id);
    _mav_put_uint8_t(buf, 26, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENGINE_STATUS_LEN);
#else
    mavlink_engine_status_t packet;
    packet.time_usec = time_usec;
    packet.rpm = rpm;
    packet.voltage = voltage;
    packet.fuelflow = fuelflow;
    packet.fuelconsumed = fuelconsumed;
    packet.temperature = temperature;
    packet.gas = gas;
    packet.pwm = pwm;
    packet.control_voltage = control_voltage;
    packet.id = id;
    packet.power_id = power_id;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENGINE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENGINE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_CRC);
}

/**
 * @brief Pack a engine_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param id  ID number of engine. Should be unique and consistent for the lifetime of a vehicle.
 * @param power_id  ID number of the engine power source (battery for electric, fuel tank for combustion). Should be unique and consistent for the lifetime of a vehicle.
 * @param type  Engine Type, 0: Unknown, 1: Electric, 2: ESC, 3: Combustion, 4: Turbine
 * @param rpm [rpm] Reported motor RPM.
 * @param voltage [cV] Motor DC voltage measured. Combustion or turbine: fuel pump voltage,
 * @param fuelflow  Fuel flow of engine: fuel flow in Centiliter per minute (combustion or turbine), motor current in centi Amperes (electric).
 * @param fuelconsumed  Consumed power (electric in mAh) or fuel (in Centiliter) since system start or installation of battery.
 * @param temperature [cdegC] Motor temperature.
 * @param gas [%] Motor gas setting in percent.
 * @param pwm [%] Motor pwm control signal in percent.
 * @param control_voltage [cV] If present, motor controller voltage.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_engine_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t id, uint8_t power_id, uint8_t type, uint16_t rpm, uint16_t voltage, uint16_t fuelflow, uint16_t fuelconsumed, int16_t temperature, uint16_t gas, uint16_t pwm, uint16_t control_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENGINE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, voltage);
    _mav_put_uint16_t(buf, 12, fuelflow);
    _mav_put_uint16_t(buf, 14, fuelconsumed);
    _mav_put_int16_t(buf, 16, temperature);
    _mav_put_uint16_t(buf, 18, gas);
    _mav_put_uint16_t(buf, 20, pwm);
    _mav_put_uint16_t(buf, 22, control_voltage);
    _mav_put_uint8_t(buf, 24, id);
    _mav_put_uint8_t(buf, 25, power_id);
    _mav_put_uint8_t(buf, 26, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENGINE_STATUS_LEN);
#else
    mavlink_engine_status_t packet;
    packet.time_usec = time_usec;
    packet.rpm = rpm;
    packet.voltage = voltage;
    packet.fuelflow = fuelflow;
    packet.fuelconsumed = fuelconsumed;
    packet.temperature = temperature;
    packet.gas = gas;
    packet.pwm = pwm;
    packet.control_voltage = control_voltage;
    packet.id = id;
    packet.power_id = power_id;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENGINE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENGINE_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN);
#endif
}

/**
 * @brief Pack a engine_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param id  ID number of engine. Should be unique and consistent for the lifetime of a vehicle.
 * @param power_id  ID number of the engine power source (battery for electric, fuel tank for combustion). Should be unique and consistent for the lifetime of a vehicle.
 * @param type  Engine Type, 0: Unknown, 1: Electric, 2: ESC, 3: Combustion, 4: Turbine
 * @param rpm [rpm] Reported motor RPM.
 * @param voltage [cV] Motor DC voltage measured. Combustion or turbine: fuel pump voltage,
 * @param fuelflow  Fuel flow of engine: fuel flow in Centiliter per minute (combustion or turbine), motor current in centi Amperes (electric).
 * @param fuelconsumed  Consumed power (electric in mAh) or fuel (in Centiliter) since system start or installation of battery.
 * @param temperature [cdegC] Motor temperature.
 * @param gas [%] Motor gas setting in percent.
 * @param pwm [%] Motor pwm control signal in percent.
 * @param control_voltage [cV] If present, motor controller voltage.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_engine_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t id,uint8_t power_id,uint8_t type,uint16_t rpm,uint16_t voltage,uint16_t fuelflow,uint16_t fuelconsumed,int16_t temperature,uint16_t gas,uint16_t pwm,uint16_t control_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENGINE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, voltage);
    _mav_put_uint16_t(buf, 12, fuelflow);
    _mav_put_uint16_t(buf, 14, fuelconsumed);
    _mav_put_int16_t(buf, 16, temperature);
    _mav_put_uint16_t(buf, 18, gas);
    _mav_put_uint16_t(buf, 20, pwm);
    _mav_put_uint16_t(buf, 22, control_voltage);
    _mav_put_uint8_t(buf, 24, id);
    _mav_put_uint8_t(buf, 25, power_id);
    _mav_put_uint8_t(buf, 26, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENGINE_STATUS_LEN);
#else
    mavlink_engine_status_t packet;
    packet.time_usec = time_usec;
    packet.rpm = rpm;
    packet.voltage = voltage;
    packet.fuelflow = fuelflow;
    packet.fuelconsumed = fuelconsumed;
    packet.temperature = temperature;
    packet.gas = gas;
    packet.pwm = pwm;
    packet.control_voltage = control_voltage;
    packet.id = id;
    packet.power_id = power_id;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENGINE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENGINE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_CRC);
}

/**
 * @brief Encode a engine_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param engine_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_engine_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_engine_status_t* engine_status)
{
    return mavlink_msg_engine_status_pack(system_id, component_id, msg, engine_status->time_usec, engine_status->id, engine_status->power_id, engine_status->type, engine_status->rpm, engine_status->voltage, engine_status->fuelflow, engine_status->fuelconsumed, engine_status->temperature, engine_status->gas, engine_status->pwm, engine_status->control_voltage);
}

/**
 * @brief Encode a engine_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param engine_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_engine_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_engine_status_t* engine_status)
{
    return mavlink_msg_engine_status_pack_chan(system_id, component_id, chan, msg, engine_status->time_usec, engine_status->id, engine_status->power_id, engine_status->type, engine_status->rpm, engine_status->voltage, engine_status->fuelflow, engine_status->fuelconsumed, engine_status->temperature, engine_status->gas, engine_status->pwm, engine_status->control_voltage);
}

/**
 * @brief Encode a engine_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param engine_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_engine_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_engine_status_t* engine_status)
{
    return mavlink_msg_engine_status_pack_status(system_id, component_id, _status, msg,  engine_status->time_usec, engine_status->id, engine_status->power_id, engine_status->type, engine_status->rpm, engine_status->voltage, engine_status->fuelflow, engine_status->fuelconsumed, engine_status->temperature, engine_status->gas, engine_status->pwm, engine_status->control_voltage);
}

/**
 * @brief Send a engine_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param id  ID number of engine. Should be unique and consistent for the lifetime of a vehicle.
 * @param power_id  ID number of the engine power source (battery for electric, fuel tank for combustion). Should be unique and consistent for the lifetime of a vehicle.
 * @param type  Engine Type, 0: Unknown, 1: Electric, 2: ESC, 3: Combustion, 4: Turbine
 * @param rpm [rpm] Reported motor RPM.
 * @param voltage [cV] Motor DC voltage measured. Combustion or turbine: fuel pump voltage,
 * @param fuelflow  Fuel flow of engine: fuel flow in Centiliter per minute (combustion or turbine), motor current in centi Amperes (electric).
 * @param fuelconsumed  Consumed power (electric in mAh) or fuel (in Centiliter) since system start or installation of battery.
 * @param temperature [cdegC] Motor temperature.
 * @param gas [%] Motor gas setting in percent.
 * @param pwm [%] Motor pwm control signal in percent.
 * @param control_voltage [cV] If present, motor controller voltage.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_engine_status_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t id, uint8_t power_id, uint8_t type, uint16_t rpm, uint16_t voltage, uint16_t fuelflow, uint16_t fuelconsumed, int16_t temperature, uint16_t gas, uint16_t pwm, uint16_t control_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENGINE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, voltage);
    _mav_put_uint16_t(buf, 12, fuelflow);
    _mav_put_uint16_t(buf, 14, fuelconsumed);
    _mav_put_int16_t(buf, 16, temperature);
    _mav_put_uint16_t(buf, 18, gas);
    _mav_put_uint16_t(buf, 20, pwm);
    _mav_put_uint16_t(buf, 22, control_voltage);
    _mav_put_uint8_t(buf, 24, id);
    _mav_put_uint8_t(buf, 25, power_id);
    _mav_put_uint8_t(buf, 26, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENGINE_STATUS, buf, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_CRC);
#else
    mavlink_engine_status_t packet;
    packet.time_usec = time_usec;
    packet.rpm = rpm;
    packet.voltage = voltage;
    packet.fuelflow = fuelflow;
    packet.fuelconsumed = fuelconsumed;
    packet.temperature = temperature;
    packet.gas = gas;
    packet.pwm = pwm;
    packet.control_voltage = control_voltage;
    packet.id = id;
    packet.power_id = power_id;
    packet.type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENGINE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_CRC);
#endif
}

/**
 * @brief Send a engine_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_engine_status_send_struct(mavlink_channel_t chan, const mavlink_engine_status_t* engine_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_engine_status_send(chan, engine_status->time_usec, engine_status->id, engine_status->power_id, engine_status->type, engine_status->rpm, engine_status->voltage, engine_status->fuelflow, engine_status->fuelconsumed, engine_status->temperature, engine_status->gas, engine_status->pwm, engine_status->control_voltage);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENGINE_STATUS, (const char *)engine_status, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ENGINE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_engine_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t id, uint8_t power_id, uint8_t type, uint16_t rpm, uint16_t voltage, uint16_t fuelflow, uint16_t fuelconsumed, int16_t temperature, uint16_t gas, uint16_t pwm, uint16_t control_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, voltage);
    _mav_put_uint16_t(buf, 12, fuelflow);
    _mav_put_uint16_t(buf, 14, fuelconsumed);
    _mav_put_int16_t(buf, 16, temperature);
    _mav_put_uint16_t(buf, 18, gas);
    _mav_put_uint16_t(buf, 20, pwm);
    _mav_put_uint16_t(buf, 22, control_voltage);
    _mav_put_uint8_t(buf, 24, id);
    _mav_put_uint8_t(buf, 25, power_id);
    _mav_put_uint8_t(buf, 26, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENGINE_STATUS, buf, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_CRC);
#else
    mavlink_engine_status_t *packet = (mavlink_engine_status_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->rpm = rpm;
    packet->voltage = voltage;
    packet->fuelflow = fuelflow;
    packet->fuelconsumed = fuelconsumed;
    packet->temperature = temperature;
    packet->gas = gas;
    packet->pwm = pwm;
    packet->control_voltage = control_voltage;
    packet->id = id;
    packet->power_id = power_id;
    packet->type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENGINE_STATUS, (const char *)packet, MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_LEN, MAVLINK_MSG_ID_ENGINE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ENGINE_STATUS UNPACKING


/**
 * @brief Get field time_usec from engine_status message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_engine_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field id from engine_status message
 *
 * @return  ID number of engine. Should be unique and consistent for the lifetime of a vehicle.
 */
static inline uint8_t mavlink_msg_engine_status_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field power_id from engine_status message
 *
 * @return  ID number of the engine power source (battery for electric, fuel tank for combustion). Should be unique and consistent for the lifetime of a vehicle.
 */
static inline uint8_t mavlink_msg_engine_status_get_power_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field type from engine_status message
 *
 * @return  Engine Type, 0: Unknown, 1: Electric, 2: ESC, 3: Combustion, 4: Turbine
 */
static inline uint8_t mavlink_msg_engine_status_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field rpm from engine_status message
 *
 * @return [rpm] Reported motor RPM.
 */
static inline uint16_t mavlink_msg_engine_status_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field voltage from engine_status message
 *
 * @return [cV] Motor DC voltage measured. Combustion or turbine: fuel pump voltage,
 */
static inline uint16_t mavlink_msg_engine_status_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field fuelflow from engine_status message
 *
 * @return  Fuel flow of engine: fuel flow in Centiliter per minute (combustion or turbine), motor current in centi Amperes (electric).
 */
static inline uint16_t mavlink_msg_engine_status_get_fuelflow(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field fuelconsumed from engine_status message
 *
 * @return  Consumed power (electric in mAh) or fuel (in Centiliter) since system start or installation of battery.
 */
static inline uint16_t mavlink_msg_engine_status_get_fuelconsumed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field temperature from engine_status message
 *
 * @return [cdegC] Motor temperature.
 */
static inline int16_t mavlink_msg_engine_status_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field gas from engine_status message
 *
 * @return [%] Motor gas setting in percent.
 */
static inline uint16_t mavlink_msg_engine_status_get_gas(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field pwm from engine_status message
 *
 * @return [%] Motor pwm control signal in percent.
 */
static inline uint16_t mavlink_msg_engine_status_get_pwm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field control_voltage from engine_status message
 *
 * @return [cV] If present, motor controller voltage.
 */
static inline uint16_t mavlink_msg_engine_status_get_control_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Decode a engine_status message into a struct
 *
 * @param msg The message to decode
 * @param engine_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_engine_status_decode(const mavlink_message_t* msg, mavlink_engine_status_t* engine_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    engine_status->time_usec = mavlink_msg_engine_status_get_time_usec(msg);
    engine_status->rpm = mavlink_msg_engine_status_get_rpm(msg);
    engine_status->voltage = mavlink_msg_engine_status_get_voltage(msg);
    engine_status->fuelflow = mavlink_msg_engine_status_get_fuelflow(msg);
    engine_status->fuelconsumed = mavlink_msg_engine_status_get_fuelconsumed(msg);
    engine_status->temperature = mavlink_msg_engine_status_get_temperature(msg);
    engine_status->gas = mavlink_msg_engine_status_get_gas(msg);
    engine_status->pwm = mavlink_msg_engine_status_get_pwm(msg);
    engine_status->control_voltage = mavlink_msg_engine_status_get_control_voltage(msg);
    engine_status->id = mavlink_msg_engine_status_get_id(msg);
    engine_status->power_id = mavlink_msg_engine_status_get_power_id(msg);
    engine_status->type = mavlink_msg_engine_status_get_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ENGINE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ENGINE_STATUS_LEN;
        memset(engine_status, 0, MAVLINK_MSG_ID_ENGINE_STATUS_LEN);
    memcpy(engine_status, _MAV_PAYLOAD(msg), len);
#endif
}
