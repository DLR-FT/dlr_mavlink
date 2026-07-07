#pragma once
// MESSAGE WEA_INFO_DATA PACKING

#define MAVLINK_MSG_ID_WEA_INFO_DATA 522


typedef struct __mavlink_wea_info_data_t {
 uint32_t Windpark_ID; /*<  Identifier of windpark.*/
 uint32_t WEA_ID; /*<  Identifier of wind turbine in windpark Windpark_ID*/
 uint16_t RotorRPM; /*< [mrpm] Measured rotation of wind turbine (mrpm = 1000 * rpm)*/
 uint16_t Heading; /*< [mdeg] Heading of wind turbine*/
 uint16_t Windspeed; /*< [mm/s] Measured windspeed*/
 uint16_t Winddirection; /*< [mdeg] Measured winddirection*/
 uint8_t MotionMode; /*<  Motion mode of wind turbine*/
} mavlink_wea_info_data_t;

#define MAVLINK_MSG_ID_WEA_INFO_DATA_LEN 17
#define MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN 17
#define MAVLINK_MSG_ID_522_LEN 17
#define MAVLINK_MSG_ID_522_MIN_LEN 17

#define MAVLINK_MSG_ID_WEA_INFO_DATA_CRC 193
#define MAVLINK_MSG_ID_522_CRC 193



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WEA_INFO_DATA { \
    522, \
    "WEA_INFO_DATA", \
    7, \
    {  { "Windpark_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_wea_info_data_t, Windpark_ID) }, \
         { "WEA_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_wea_info_data_t, WEA_ID) }, \
         { "RotorRPM", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_wea_info_data_t, RotorRPM) }, \
         { "Heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_wea_info_data_t, Heading) }, \
         { "MotionMode", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_wea_info_data_t, MotionMode) }, \
         { "Windspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_wea_info_data_t, Windspeed) }, \
         { "Winddirection", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_wea_info_data_t, Winddirection) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WEA_INFO_DATA { \
    "WEA_INFO_DATA", \
    7, \
    {  { "Windpark_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_wea_info_data_t, Windpark_ID) }, \
         { "WEA_ID", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_wea_info_data_t, WEA_ID) }, \
         { "RotorRPM", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_wea_info_data_t, RotorRPM) }, \
         { "Heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_wea_info_data_t, Heading) }, \
         { "MotionMode", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_wea_info_data_t, MotionMode) }, \
         { "Windspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_wea_info_data_t, Windspeed) }, \
         { "Winddirection", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_wea_info_data_t, Winddirection) }, \
         } \
}
#endif

/**
 * @brief Pack a wea_info_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Windpark_ID  Identifier of windpark.
 * @param WEA_ID  Identifier of wind turbine in windpark Windpark_ID
 * @param RotorRPM [mrpm] Measured rotation of wind turbine (mrpm = 1000 * rpm)
 * @param Heading [mdeg] Heading of wind turbine
 * @param MotionMode  Motion mode of wind turbine
 * @param Windspeed [mm/s] Measured windspeed
 * @param Winddirection [mdeg] Measured winddirection
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wea_info_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Windpark_ID, uint32_t WEA_ID, uint16_t RotorRPM, uint16_t Heading, uint8_t MotionMode, uint16_t Windspeed, uint16_t Winddirection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEA_INFO_DATA_LEN];
    _mav_put_uint32_t(buf, 0, Windpark_ID);
    _mav_put_uint32_t(buf, 4, WEA_ID);
    _mav_put_uint16_t(buf, 8, RotorRPM);
    _mav_put_uint16_t(buf, 10, Heading);
    _mav_put_uint16_t(buf, 12, Windspeed);
    _mav_put_uint16_t(buf, 14, Winddirection);
    _mav_put_uint8_t(buf, 16, MotionMode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN);
#else
    mavlink_wea_info_data_t packet;
    packet.Windpark_ID = Windpark_ID;
    packet.WEA_ID = WEA_ID;
    packet.RotorRPM = RotorRPM;
    packet.Heading = Heading;
    packet.Windspeed = Windspeed;
    packet.Winddirection = Winddirection;
    packet.MotionMode = MotionMode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEA_INFO_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_CRC);
}

/**
 * @brief Pack a wea_info_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Windpark_ID  Identifier of windpark.
 * @param WEA_ID  Identifier of wind turbine in windpark Windpark_ID
 * @param RotorRPM [mrpm] Measured rotation of wind turbine (mrpm = 1000 * rpm)
 * @param Heading [mdeg] Heading of wind turbine
 * @param MotionMode  Motion mode of wind turbine
 * @param Windspeed [mm/s] Measured windspeed
 * @param Winddirection [mdeg] Measured winddirection
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wea_info_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t Windpark_ID, uint32_t WEA_ID, uint16_t RotorRPM, uint16_t Heading, uint8_t MotionMode, uint16_t Windspeed, uint16_t Winddirection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEA_INFO_DATA_LEN];
    _mav_put_uint32_t(buf, 0, Windpark_ID);
    _mav_put_uint32_t(buf, 4, WEA_ID);
    _mav_put_uint16_t(buf, 8, RotorRPM);
    _mav_put_uint16_t(buf, 10, Heading);
    _mav_put_uint16_t(buf, 12, Windspeed);
    _mav_put_uint16_t(buf, 14, Winddirection);
    _mav_put_uint8_t(buf, 16, MotionMode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN);
#else
    mavlink_wea_info_data_t packet;
    packet.Windpark_ID = Windpark_ID;
    packet.WEA_ID = WEA_ID;
    packet.RotorRPM = RotorRPM;
    packet.Heading = Heading;
    packet.Windspeed = Windspeed;
    packet.Winddirection = Winddirection;
    packet.MotionMode = MotionMode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEA_INFO_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN);
#endif
}

/**
 * @brief Pack a wea_info_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Windpark_ID  Identifier of windpark.
 * @param WEA_ID  Identifier of wind turbine in windpark Windpark_ID
 * @param RotorRPM [mrpm] Measured rotation of wind turbine (mrpm = 1000 * rpm)
 * @param Heading [mdeg] Heading of wind turbine
 * @param MotionMode  Motion mode of wind turbine
 * @param Windspeed [mm/s] Measured windspeed
 * @param Winddirection [mdeg] Measured winddirection
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wea_info_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Windpark_ID,uint32_t WEA_ID,uint16_t RotorRPM,uint16_t Heading,uint8_t MotionMode,uint16_t Windspeed,uint16_t Winddirection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEA_INFO_DATA_LEN];
    _mav_put_uint32_t(buf, 0, Windpark_ID);
    _mav_put_uint32_t(buf, 4, WEA_ID);
    _mav_put_uint16_t(buf, 8, RotorRPM);
    _mav_put_uint16_t(buf, 10, Heading);
    _mav_put_uint16_t(buf, 12, Windspeed);
    _mav_put_uint16_t(buf, 14, Winddirection);
    _mav_put_uint8_t(buf, 16, MotionMode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN);
#else
    mavlink_wea_info_data_t packet;
    packet.Windpark_ID = Windpark_ID;
    packet.WEA_ID = WEA_ID;
    packet.RotorRPM = RotorRPM;
    packet.Heading = Heading;
    packet.Windspeed = Windspeed;
    packet.Winddirection = Winddirection;
    packet.MotionMode = MotionMode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEA_INFO_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_CRC);
}

/**
 * @brief Encode a wea_info_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param wea_info_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wea_info_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_wea_info_data_t* wea_info_data)
{
    return mavlink_msg_wea_info_data_pack(system_id, component_id, msg, wea_info_data->Windpark_ID, wea_info_data->WEA_ID, wea_info_data->RotorRPM, wea_info_data->Heading, wea_info_data->MotionMode, wea_info_data->Windspeed, wea_info_data->Winddirection);
}

/**
 * @brief Encode a wea_info_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wea_info_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wea_info_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_wea_info_data_t* wea_info_data)
{
    return mavlink_msg_wea_info_data_pack_chan(system_id, component_id, chan, msg, wea_info_data->Windpark_ID, wea_info_data->WEA_ID, wea_info_data->RotorRPM, wea_info_data->Heading, wea_info_data->MotionMode, wea_info_data->Windspeed, wea_info_data->Winddirection);
}

/**
 * @brief Encode a wea_info_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param wea_info_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wea_info_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_wea_info_data_t* wea_info_data)
{
    return mavlink_msg_wea_info_data_pack_status(system_id, component_id, _status, msg,  wea_info_data->Windpark_ID, wea_info_data->WEA_ID, wea_info_data->RotorRPM, wea_info_data->Heading, wea_info_data->MotionMode, wea_info_data->Windspeed, wea_info_data->Winddirection);
}

/**
 * @brief Send a wea_info_data message
 * @param chan MAVLink channel to send the message
 *
 * @param Windpark_ID  Identifier of windpark.
 * @param WEA_ID  Identifier of wind turbine in windpark Windpark_ID
 * @param RotorRPM [mrpm] Measured rotation of wind turbine (mrpm = 1000 * rpm)
 * @param Heading [mdeg] Heading of wind turbine
 * @param MotionMode  Motion mode of wind turbine
 * @param Windspeed [mm/s] Measured windspeed
 * @param Winddirection [mdeg] Measured winddirection
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_wea_info_data_send(mavlink_channel_t chan, uint32_t Windpark_ID, uint32_t WEA_ID, uint16_t RotorRPM, uint16_t Heading, uint8_t MotionMode, uint16_t Windspeed, uint16_t Winddirection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEA_INFO_DATA_LEN];
    _mav_put_uint32_t(buf, 0, Windpark_ID);
    _mav_put_uint32_t(buf, 4, WEA_ID);
    _mav_put_uint16_t(buf, 8, RotorRPM);
    _mav_put_uint16_t(buf, 10, Heading);
    _mav_put_uint16_t(buf, 12, Windspeed);
    _mav_put_uint16_t(buf, 14, Winddirection);
    _mav_put_uint8_t(buf, 16, MotionMode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEA_INFO_DATA, buf, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_CRC);
#else
    mavlink_wea_info_data_t packet;
    packet.Windpark_ID = Windpark_ID;
    packet.WEA_ID = WEA_ID;
    packet.RotorRPM = RotorRPM;
    packet.Heading = Heading;
    packet.Windspeed = Windspeed;
    packet.Winddirection = Winddirection;
    packet.MotionMode = MotionMode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEA_INFO_DATA, (const char *)&packet, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_CRC);
#endif
}

/**
 * @brief Send a wea_info_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_wea_info_data_send_struct(mavlink_channel_t chan, const mavlink_wea_info_data_t* wea_info_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wea_info_data_send(chan, wea_info_data->Windpark_ID, wea_info_data->WEA_ID, wea_info_data->RotorRPM, wea_info_data->Heading, wea_info_data->MotionMode, wea_info_data->Windspeed, wea_info_data->Winddirection);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEA_INFO_DATA, (const char *)wea_info_data, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_WEA_INFO_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_wea_info_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Windpark_ID, uint32_t WEA_ID, uint16_t RotorRPM, uint16_t Heading, uint8_t MotionMode, uint16_t Windspeed, uint16_t Winddirection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Windpark_ID);
    _mav_put_uint32_t(buf, 4, WEA_ID);
    _mav_put_uint16_t(buf, 8, RotorRPM);
    _mav_put_uint16_t(buf, 10, Heading);
    _mav_put_uint16_t(buf, 12, Windspeed);
    _mav_put_uint16_t(buf, 14, Winddirection);
    _mav_put_uint8_t(buf, 16, MotionMode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEA_INFO_DATA, buf, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_CRC);
#else
    mavlink_wea_info_data_t *packet = (mavlink_wea_info_data_t *)msgbuf;
    packet->Windpark_ID = Windpark_ID;
    packet->WEA_ID = WEA_ID;
    packet->RotorRPM = RotorRPM;
    packet->Heading = Heading;
    packet->Windspeed = Windspeed;
    packet->Winddirection = Winddirection;
    packet->MotionMode = MotionMode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEA_INFO_DATA, (const char *)packet, MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN, MAVLINK_MSG_ID_WEA_INFO_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE WEA_INFO_DATA UNPACKING


/**
 * @brief Get field Windpark_ID from wea_info_data message
 *
 * @return  Identifier of windpark.
 */
static inline uint32_t mavlink_msg_wea_info_data_get_Windpark_ID(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field WEA_ID from wea_info_data message
 *
 * @return  Identifier of wind turbine in windpark Windpark_ID
 */
static inline uint32_t mavlink_msg_wea_info_data_get_WEA_ID(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field RotorRPM from wea_info_data message
 *
 * @return [mrpm] Measured rotation of wind turbine (mrpm = 1000 * rpm)
 */
static inline uint16_t mavlink_msg_wea_info_data_get_RotorRPM(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field Heading from wea_info_data message
 *
 * @return [mdeg] Heading of wind turbine
 */
static inline uint16_t mavlink_msg_wea_info_data_get_Heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field MotionMode from wea_info_data message
 *
 * @return  Motion mode of wind turbine
 */
static inline uint8_t mavlink_msg_wea_info_data_get_MotionMode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field Windspeed from wea_info_data message
 *
 * @return [mm/s] Measured windspeed
 */
static inline uint16_t mavlink_msg_wea_info_data_get_Windspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field Winddirection from wea_info_data message
 *
 * @return [mdeg] Measured winddirection
 */
static inline uint16_t mavlink_msg_wea_info_data_get_Winddirection(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Decode a wea_info_data message into a struct
 *
 * @param msg The message to decode
 * @param wea_info_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_wea_info_data_decode(const mavlink_message_t* msg, mavlink_wea_info_data_t* wea_info_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    wea_info_data->Windpark_ID = mavlink_msg_wea_info_data_get_Windpark_ID(msg);
    wea_info_data->WEA_ID = mavlink_msg_wea_info_data_get_WEA_ID(msg);
    wea_info_data->RotorRPM = mavlink_msg_wea_info_data_get_RotorRPM(msg);
    wea_info_data->Heading = mavlink_msg_wea_info_data_get_Heading(msg);
    wea_info_data->Windspeed = mavlink_msg_wea_info_data_get_Windspeed(msg);
    wea_info_data->Winddirection = mavlink_msg_wea_info_data_get_Winddirection(msg);
    wea_info_data->MotionMode = mavlink_msg_wea_info_data_get_MotionMode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WEA_INFO_DATA_LEN? msg->len : MAVLINK_MSG_ID_WEA_INFO_DATA_LEN;
        memset(wea_info_data, 0, MAVLINK_MSG_ID_WEA_INFO_DATA_LEN);
    memcpy(wea_info_data, _MAV_PAYLOAD(msg), len);
#endif
}
