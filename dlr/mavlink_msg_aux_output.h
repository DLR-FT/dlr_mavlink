#pragma once
// MESSAGE AUX_OUTPUT PACKING

#define MAVLINK_MSG_ID_AUX_OUTPUT 501


typedef struct __mavlink_aux_output_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 uint16_t num; /*< [-] Number of AUX channel*/
 uint16_t aux1; /*< [us] AUX 1 PWM Value in us*/
 uint16_t aux2; /*< [us] AUX 2 PWM Value in us*/
 uint16_t aux3; /*< [us] AUX 3 PWM Value in us*/
 uint16_t aux4; /*< [us] AUX 4 PWM Value in us*/
 uint16_t aux5; /*< [us] AUX 5 PWM Value in us*/
 uint16_t aux6; /*< [us] AUX 6 PWM Value in us*/
 uint16_t aux7; /*< [us] AUX 7 PWM Value in us*/
 uint16_t aux8; /*< [us] AUX 8 PWM Value in us*/
} mavlink_aux_output_t;

#define MAVLINK_MSG_ID_AUX_OUTPUT_LEN 26
#define MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN 26
#define MAVLINK_MSG_ID_501_LEN 26
#define MAVLINK_MSG_ID_501_MIN_LEN 26

#define MAVLINK_MSG_ID_AUX_OUTPUT_CRC 75
#define MAVLINK_MSG_ID_501_CRC 75



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AUX_OUTPUT { \
    501, \
    "AUX_OUTPUT", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aux_output_t, time_usec) }, \
         { "num", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_aux_output_t, num) }, \
         { "aux1", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_aux_output_t, aux1) }, \
         { "aux2", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_aux_output_t, aux2) }, \
         { "aux3", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_aux_output_t, aux3) }, \
         { "aux4", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_aux_output_t, aux4) }, \
         { "aux5", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_aux_output_t, aux5) }, \
         { "aux6", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_aux_output_t, aux6) }, \
         { "aux7", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_aux_output_t, aux7) }, \
         { "aux8", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_aux_output_t, aux8) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AUX_OUTPUT { \
    "AUX_OUTPUT", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aux_output_t, time_usec) }, \
         { "num", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_aux_output_t, num) }, \
         { "aux1", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_aux_output_t, aux1) }, \
         { "aux2", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_aux_output_t, aux2) }, \
         { "aux3", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_aux_output_t, aux3) }, \
         { "aux4", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_aux_output_t, aux4) }, \
         { "aux5", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_aux_output_t, aux5) }, \
         { "aux6", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_aux_output_t, aux6) }, \
         { "aux7", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_aux_output_t, aux7) }, \
         { "aux8", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_aux_output_t, aux8) }, \
         } \
}
#endif

/**
 * @brief Pack a aux_output message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param num [-] Number of AUX channel
 * @param aux1 [us] AUX 1 PWM Value in us
 * @param aux2 [us] AUX 2 PWM Value in us
 * @param aux3 [us] AUX 3 PWM Value in us
 * @param aux4 [us] AUX 4 PWM Value in us
 * @param aux5 [us] AUX 5 PWM Value in us
 * @param aux6 [us] AUX 6 PWM Value in us
 * @param aux7 [us] AUX 7 PWM Value in us
 * @param aux8 [us] AUX 8 PWM Value in us
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_output_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint16_t num, uint16_t aux1, uint16_t aux2, uint16_t aux3, uint16_t aux4, uint16_t aux5, uint16_t aux6, uint16_t aux7, uint16_t aux8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUX_OUTPUT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, num);
    _mav_put_uint16_t(buf, 10, aux1);
    _mav_put_uint16_t(buf, 12, aux2);
    _mav_put_uint16_t(buf, 14, aux3);
    _mav_put_uint16_t(buf, 16, aux4);
    _mav_put_uint16_t(buf, 18, aux5);
    _mav_put_uint16_t(buf, 20, aux6);
    _mav_put_uint16_t(buf, 22, aux7);
    _mav_put_uint16_t(buf, 24, aux8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_OUTPUT_LEN);
#else
    mavlink_aux_output_t packet;
    packet.time_usec = time_usec;
    packet.num = num;
    packet.aux1 = aux1;
    packet.aux2 = aux2;
    packet.aux3 = aux3;
    packet.aux4 = aux4;
    packet.aux5 = aux5;
    packet.aux6 = aux6;
    packet.aux7 = aux7;
    packet.aux8 = aux8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_OUTPUT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUX_OUTPUT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_CRC);
}

/**
 * @brief Pack a aux_output message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param num [-] Number of AUX channel
 * @param aux1 [us] AUX 1 PWM Value in us
 * @param aux2 [us] AUX 2 PWM Value in us
 * @param aux3 [us] AUX 3 PWM Value in us
 * @param aux4 [us] AUX 4 PWM Value in us
 * @param aux5 [us] AUX 5 PWM Value in us
 * @param aux6 [us] AUX 6 PWM Value in us
 * @param aux7 [us] AUX 7 PWM Value in us
 * @param aux8 [us] AUX 8 PWM Value in us
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_output_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint16_t num, uint16_t aux1, uint16_t aux2, uint16_t aux3, uint16_t aux4, uint16_t aux5, uint16_t aux6, uint16_t aux7, uint16_t aux8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUX_OUTPUT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, num);
    _mav_put_uint16_t(buf, 10, aux1);
    _mav_put_uint16_t(buf, 12, aux2);
    _mav_put_uint16_t(buf, 14, aux3);
    _mav_put_uint16_t(buf, 16, aux4);
    _mav_put_uint16_t(buf, 18, aux5);
    _mav_put_uint16_t(buf, 20, aux6);
    _mav_put_uint16_t(buf, 22, aux7);
    _mav_put_uint16_t(buf, 24, aux8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_OUTPUT_LEN);
#else
    mavlink_aux_output_t packet;
    packet.time_usec = time_usec;
    packet.num = num;
    packet.aux1 = aux1;
    packet.aux2 = aux2;
    packet.aux3 = aux3;
    packet.aux4 = aux4;
    packet.aux5 = aux5;
    packet.aux6 = aux6;
    packet.aux7 = aux7;
    packet.aux8 = aux8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_OUTPUT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUX_OUTPUT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN);
#endif
}

/**
 * @brief Pack a aux_output message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param num [-] Number of AUX channel
 * @param aux1 [us] AUX 1 PWM Value in us
 * @param aux2 [us] AUX 2 PWM Value in us
 * @param aux3 [us] AUX 3 PWM Value in us
 * @param aux4 [us] AUX 4 PWM Value in us
 * @param aux5 [us] AUX 5 PWM Value in us
 * @param aux6 [us] AUX 6 PWM Value in us
 * @param aux7 [us] AUX 7 PWM Value in us
 * @param aux8 [us] AUX 8 PWM Value in us
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_output_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint16_t num,uint16_t aux1,uint16_t aux2,uint16_t aux3,uint16_t aux4,uint16_t aux5,uint16_t aux6,uint16_t aux7,uint16_t aux8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUX_OUTPUT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, num);
    _mav_put_uint16_t(buf, 10, aux1);
    _mav_put_uint16_t(buf, 12, aux2);
    _mav_put_uint16_t(buf, 14, aux3);
    _mav_put_uint16_t(buf, 16, aux4);
    _mav_put_uint16_t(buf, 18, aux5);
    _mav_put_uint16_t(buf, 20, aux6);
    _mav_put_uint16_t(buf, 22, aux7);
    _mav_put_uint16_t(buf, 24, aux8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_OUTPUT_LEN);
#else
    mavlink_aux_output_t packet;
    packet.time_usec = time_usec;
    packet.num = num;
    packet.aux1 = aux1;
    packet.aux2 = aux2;
    packet.aux3 = aux3;
    packet.aux4 = aux4;
    packet.aux5 = aux5;
    packet.aux6 = aux6;
    packet.aux7 = aux7;
    packet.aux8 = aux8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_OUTPUT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUX_OUTPUT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_CRC);
}

/**
 * @brief Encode a aux_output struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aux_output C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_output_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aux_output_t* aux_output)
{
    return mavlink_msg_aux_output_pack(system_id, component_id, msg, aux_output->time_usec, aux_output->num, aux_output->aux1, aux_output->aux2, aux_output->aux3, aux_output->aux4, aux_output->aux5, aux_output->aux6, aux_output->aux7, aux_output->aux8);
}

/**
 * @brief Encode a aux_output struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aux_output C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_output_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aux_output_t* aux_output)
{
    return mavlink_msg_aux_output_pack_chan(system_id, component_id, chan, msg, aux_output->time_usec, aux_output->num, aux_output->aux1, aux_output->aux2, aux_output->aux3, aux_output->aux4, aux_output->aux5, aux_output->aux6, aux_output->aux7, aux_output->aux8);
}

/**
 * @brief Encode a aux_output struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aux_output C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_output_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aux_output_t* aux_output)
{
    return mavlink_msg_aux_output_pack_status(system_id, component_id, _status, msg,  aux_output->time_usec, aux_output->num, aux_output->aux1, aux_output->aux2, aux_output->aux3, aux_output->aux4, aux_output->aux5, aux_output->aux6, aux_output->aux7, aux_output->aux8);
}

/**
 * @brief Send a aux_output message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param num [-] Number of AUX channel
 * @param aux1 [us] AUX 1 PWM Value in us
 * @param aux2 [us] AUX 2 PWM Value in us
 * @param aux3 [us] AUX 3 PWM Value in us
 * @param aux4 [us] AUX 4 PWM Value in us
 * @param aux5 [us] AUX 5 PWM Value in us
 * @param aux6 [us] AUX 6 PWM Value in us
 * @param aux7 [us] AUX 7 PWM Value in us
 * @param aux8 [us] AUX 8 PWM Value in us
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aux_output_send(mavlink_channel_t chan, uint64_t time_usec, uint16_t num, uint16_t aux1, uint16_t aux2, uint16_t aux3, uint16_t aux4, uint16_t aux5, uint16_t aux6, uint16_t aux7, uint16_t aux8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUX_OUTPUT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, num);
    _mav_put_uint16_t(buf, 10, aux1);
    _mav_put_uint16_t(buf, 12, aux2);
    _mav_put_uint16_t(buf, 14, aux3);
    _mav_put_uint16_t(buf, 16, aux4);
    _mav_put_uint16_t(buf, 18, aux5);
    _mav_put_uint16_t(buf, 20, aux6);
    _mav_put_uint16_t(buf, 22, aux7);
    _mav_put_uint16_t(buf, 24, aux8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_OUTPUT, buf, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_CRC);
#else
    mavlink_aux_output_t packet;
    packet.time_usec = time_usec;
    packet.num = num;
    packet.aux1 = aux1;
    packet.aux2 = aux2;
    packet.aux3 = aux3;
    packet.aux4 = aux4;
    packet.aux5 = aux5;
    packet.aux6 = aux6;
    packet.aux7 = aux7;
    packet.aux8 = aux8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_OUTPUT, (const char *)&packet, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_CRC);
#endif
}

/**
 * @brief Send a aux_output message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aux_output_send_struct(mavlink_channel_t chan, const mavlink_aux_output_t* aux_output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aux_output_send(chan, aux_output->time_usec, aux_output->num, aux_output->aux1, aux_output->aux2, aux_output->aux3, aux_output->aux4, aux_output->aux5, aux_output->aux6, aux_output->aux7, aux_output->aux8);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_OUTPUT, (const char *)aux_output, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_CRC);
#endif
}

#if MAVLINK_MSG_ID_AUX_OUTPUT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aux_output_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint16_t num, uint16_t aux1, uint16_t aux2, uint16_t aux3, uint16_t aux4, uint16_t aux5, uint16_t aux6, uint16_t aux7, uint16_t aux8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, num);
    _mav_put_uint16_t(buf, 10, aux1);
    _mav_put_uint16_t(buf, 12, aux2);
    _mav_put_uint16_t(buf, 14, aux3);
    _mav_put_uint16_t(buf, 16, aux4);
    _mav_put_uint16_t(buf, 18, aux5);
    _mav_put_uint16_t(buf, 20, aux6);
    _mav_put_uint16_t(buf, 22, aux7);
    _mav_put_uint16_t(buf, 24, aux8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_OUTPUT, buf, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_CRC);
#else
    mavlink_aux_output_t *packet = (mavlink_aux_output_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->num = num;
    packet->aux1 = aux1;
    packet->aux2 = aux2;
    packet->aux3 = aux3;
    packet->aux4 = aux4;
    packet->aux5 = aux5;
    packet->aux6 = aux6;
    packet->aux7 = aux7;
    packet->aux8 = aux8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_OUTPUT, (const char *)packet, MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_LEN, MAVLINK_MSG_ID_AUX_OUTPUT_CRC);
#endif
}
#endif

#endif

// MESSAGE AUX_OUTPUT UNPACKING


/**
 * @brief Get field time_usec from aux_output message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_aux_output_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field num from aux_output message
 *
 * @return [-] Number of AUX channel
 */
static inline uint16_t mavlink_msg_aux_output_get_num(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field aux1 from aux_output message
 *
 * @return [us] AUX 1 PWM Value in us
 */
static inline uint16_t mavlink_msg_aux_output_get_aux1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field aux2 from aux_output message
 *
 * @return [us] AUX 2 PWM Value in us
 */
static inline uint16_t mavlink_msg_aux_output_get_aux2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field aux3 from aux_output message
 *
 * @return [us] AUX 3 PWM Value in us
 */
static inline uint16_t mavlink_msg_aux_output_get_aux3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field aux4 from aux_output message
 *
 * @return [us] AUX 4 PWM Value in us
 */
static inline uint16_t mavlink_msg_aux_output_get_aux4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field aux5 from aux_output message
 *
 * @return [us] AUX 5 PWM Value in us
 */
static inline uint16_t mavlink_msg_aux_output_get_aux5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field aux6 from aux_output message
 *
 * @return [us] AUX 6 PWM Value in us
 */
static inline uint16_t mavlink_msg_aux_output_get_aux6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field aux7 from aux_output message
 *
 * @return [us] AUX 7 PWM Value in us
 */
static inline uint16_t mavlink_msg_aux_output_get_aux7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field aux8 from aux_output message
 *
 * @return [us] AUX 8 PWM Value in us
 */
static inline uint16_t mavlink_msg_aux_output_get_aux8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Decode a aux_output message into a struct
 *
 * @param msg The message to decode
 * @param aux_output C-struct to decode the message contents into
 */
static inline void mavlink_msg_aux_output_decode(const mavlink_message_t* msg, mavlink_aux_output_t* aux_output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aux_output->time_usec = mavlink_msg_aux_output_get_time_usec(msg);
    aux_output->num = mavlink_msg_aux_output_get_num(msg);
    aux_output->aux1 = mavlink_msg_aux_output_get_aux1(msg);
    aux_output->aux2 = mavlink_msg_aux_output_get_aux2(msg);
    aux_output->aux3 = mavlink_msg_aux_output_get_aux3(msg);
    aux_output->aux4 = mavlink_msg_aux_output_get_aux4(msg);
    aux_output->aux5 = mavlink_msg_aux_output_get_aux5(msg);
    aux_output->aux6 = mavlink_msg_aux_output_get_aux6(msg);
    aux_output->aux7 = mavlink_msg_aux_output_get_aux7(msg);
    aux_output->aux8 = mavlink_msg_aux_output_get_aux8(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AUX_OUTPUT_LEN? msg->len : MAVLINK_MSG_ID_AUX_OUTPUT_LEN;
        memset(aux_output, 0, MAVLINK_MSG_ID_AUX_OUTPUT_LEN);
    memcpy(aux_output, _MAV_PAYLOAD(msg), len);
#endif
}
