#pragma once
// MESSAGE TASK_SEQUENCE PACKING

#define MAVLINK_MSG_ID_TASK_SEQUENCE 531


typedef struct __mavlink_task_sequence_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint8_t current_task; /*<  [-], Currently executed task.*/
 uint8_t mode; /*<  [-], Current mode of operation.*/
 uint8_t n_elements; /*<  [-],Number of tasks in the task sequence.*/
 uint8_t sequence[20]; /*<  [-], Upcoming tasks in the sequence.*/
} mavlink_task_sequence_t;

#define MAVLINK_MSG_ID_TASK_SEQUENCE_LEN 31
#define MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN 31
#define MAVLINK_MSG_ID_531_LEN 31
#define MAVLINK_MSG_ID_531_MIN_LEN 31

#define MAVLINK_MSG_ID_TASK_SEQUENCE_CRC 227
#define MAVLINK_MSG_ID_531_CRC 227

#define MAVLINK_MSG_TASK_SEQUENCE_FIELD_SEQUENCE_LEN 20

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TASK_SEQUENCE { \
    531, \
    "TASK_SEQUENCE", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_task_sequence_t, time_usec) }, \
         { "current_task", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_task_sequence_t, current_task) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_task_sequence_t, mode) }, \
         { "n_elements", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_task_sequence_t, n_elements) }, \
         { "sequence", NULL, MAVLINK_TYPE_UINT8_T, 20, 11, offsetof(mavlink_task_sequence_t, sequence) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TASK_SEQUENCE { \
    "TASK_SEQUENCE", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_task_sequence_t, time_usec) }, \
         { "current_task", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_task_sequence_t, current_task) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_task_sequence_t, mode) }, \
         { "n_elements", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_task_sequence_t, n_elements) }, \
         { "sequence", NULL, MAVLINK_TYPE_UINT8_T, 20, 11, offsetof(mavlink_task_sequence_t, sequence) }, \
         } \
}
#endif

/**
 * @brief Pack a task_sequence message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param current_task  [-], Currently executed task.
 * @param mode  [-], Current mode of operation.
 * @param n_elements  [-],Number of tasks in the task sequence.
 * @param sequence  [-], Upcoming tasks in the sequence.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_task_sequence_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t current_task, uint8_t mode, uint8_t n_elements, const uint8_t *sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_SEQUENCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, current_task);
    _mav_put_uint8_t(buf, 9, mode);
    _mav_put_uint8_t(buf, 10, n_elements);
    _mav_put_uint8_t_array(buf, 11, sequence, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN);
#else
    mavlink_task_sequence_t packet;
    packet.time_usec = time_usec;
    packet.current_task = current_task;
    packet.mode = mode;
    packet.n_elements = n_elements;
    mav_array_assign_uint8_t(packet.sequence, sequence, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TASK_SEQUENCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_CRC);
}

/**
 * @brief Pack a task_sequence message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param current_task  [-], Currently executed task.
 * @param mode  [-], Current mode of operation.
 * @param n_elements  [-],Number of tasks in the task sequence.
 * @param sequence  [-], Upcoming tasks in the sequence.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_task_sequence_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t current_task, uint8_t mode, uint8_t n_elements, const uint8_t *sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_SEQUENCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, current_task);
    _mav_put_uint8_t(buf, 9, mode);
    _mav_put_uint8_t(buf, 10, n_elements);
    _mav_put_uint8_t_array(buf, 11, sequence, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN);
#else
    mavlink_task_sequence_t packet;
    packet.time_usec = time_usec;
    packet.current_task = current_task;
    packet.mode = mode;
    packet.n_elements = n_elements;
    mav_array_memcpy(packet.sequence, sequence, sizeof(uint8_t)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TASK_SEQUENCE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN);
#endif
}

/**
 * @brief Pack a task_sequence message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param current_task  [-], Currently executed task.
 * @param mode  [-], Current mode of operation.
 * @param n_elements  [-],Number of tasks in the task sequence.
 * @param sequence  [-], Upcoming tasks in the sequence.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_task_sequence_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t current_task,uint8_t mode,uint8_t n_elements,const uint8_t *sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_SEQUENCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, current_task);
    _mav_put_uint8_t(buf, 9, mode);
    _mav_put_uint8_t(buf, 10, n_elements);
    _mav_put_uint8_t_array(buf, 11, sequence, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN);
#else
    mavlink_task_sequence_t packet;
    packet.time_usec = time_usec;
    packet.current_task = current_task;
    packet.mode = mode;
    packet.n_elements = n_elements;
    mav_array_assign_uint8_t(packet.sequence, sequence, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TASK_SEQUENCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_CRC);
}

/**
 * @brief Encode a task_sequence struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param task_sequence C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_task_sequence_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_task_sequence_t* task_sequence)
{
    return mavlink_msg_task_sequence_pack(system_id, component_id, msg, task_sequence->time_usec, task_sequence->current_task, task_sequence->mode, task_sequence->n_elements, task_sequence->sequence);
}

/**
 * @brief Encode a task_sequence struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param task_sequence C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_task_sequence_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_task_sequence_t* task_sequence)
{
    return mavlink_msg_task_sequence_pack_chan(system_id, component_id, chan, msg, task_sequence->time_usec, task_sequence->current_task, task_sequence->mode, task_sequence->n_elements, task_sequence->sequence);
}

/**
 * @brief Encode a task_sequence struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param task_sequence C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_task_sequence_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_task_sequence_t* task_sequence)
{
    return mavlink_msg_task_sequence_pack_status(system_id, component_id, _status, msg,  task_sequence->time_usec, task_sequence->current_task, task_sequence->mode, task_sequence->n_elements, task_sequence->sequence);
}

/**
 * @brief Send a task_sequence message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param current_task  [-], Currently executed task.
 * @param mode  [-], Current mode of operation.
 * @param n_elements  [-],Number of tasks in the task sequence.
 * @param sequence  [-], Upcoming tasks in the sequence.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_task_sequence_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t current_task, uint8_t mode, uint8_t n_elements, const uint8_t *sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_SEQUENCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, current_task);
    _mav_put_uint8_t(buf, 9, mode);
    _mav_put_uint8_t(buf, 10, n_elements);
    _mav_put_uint8_t_array(buf, 11, sequence, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_SEQUENCE, buf, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_CRC);
#else
    mavlink_task_sequence_t packet;
    packet.time_usec = time_usec;
    packet.current_task = current_task;
    packet.mode = mode;
    packet.n_elements = n_elements;
    mav_array_assign_uint8_t(packet.sequence, sequence, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_SEQUENCE, (const char *)&packet, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_CRC);
#endif
}

/**
 * @brief Send a task_sequence message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_task_sequence_send_struct(mavlink_channel_t chan, const mavlink_task_sequence_t* task_sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_task_sequence_send(chan, task_sequence->time_usec, task_sequence->current_task, task_sequence->mode, task_sequence->n_elements, task_sequence->sequence);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_SEQUENCE, (const char *)task_sequence, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_TASK_SEQUENCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_task_sequence_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t current_task, uint8_t mode, uint8_t n_elements, const uint8_t *sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, current_task);
    _mav_put_uint8_t(buf, 9, mode);
    _mav_put_uint8_t(buf, 10, n_elements);
    _mav_put_uint8_t_array(buf, 11, sequence, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_SEQUENCE, buf, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_CRC);
#else
    mavlink_task_sequence_t *packet = (mavlink_task_sequence_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->current_task = current_task;
    packet->mode = mode;
    packet->n_elements = n_elements;
    mav_array_assign_uint8_t(packet->sequence, sequence, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_SEQUENCE, (const char *)packet, MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN, MAVLINK_MSG_ID_TASK_SEQUENCE_CRC);
#endif
}
#endif

#endif

// MESSAGE TASK_SEQUENCE UNPACKING


/**
 * @brief Get field time_usec from task_sequence message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_task_sequence_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field current_task from task_sequence message
 *
 * @return  [-], Currently executed task.
 */
static inline uint8_t mavlink_msg_task_sequence_get_current_task(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field mode from task_sequence message
 *
 * @return  [-], Current mode of operation.
 */
static inline uint8_t mavlink_msg_task_sequence_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field n_elements from task_sequence message
 *
 * @return  [-],Number of tasks in the task sequence.
 */
static inline uint8_t mavlink_msg_task_sequence_get_n_elements(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field sequence from task_sequence message
 *
 * @return  [-], Upcoming tasks in the sequence.
 */
static inline uint16_t mavlink_msg_task_sequence_get_sequence(const mavlink_message_t* msg, uint8_t *sequence)
{
    return _MAV_RETURN_uint8_t_array(msg, sequence, 20,  11);
}

/**
 * @brief Decode a task_sequence message into a struct
 *
 * @param msg The message to decode
 * @param task_sequence C-struct to decode the message contents into
 */
static inline void mavlink_msg_task_sequence_decode(const mavlink_message_t* msg, mavlink_task_sequence_t* task_sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    task_sequence->time_usec = mavlink_msg_task_sequence_get_time_usec(msg);
    task_sequence->current_task = mavlink_msg_task_sequence_get_current_task(msg);
    task_sequence->mode = mavlink_msg_task_sequence_get_mode(msg);
    task_sequence->n_elements = mavlink_msg_task_sequence_get_n_elements(msg);
    mavlink_msg_task_sequence_get_sequence(msg, task_sequence->sequence);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TASK_SEQUENCE_LEN? msg->len : MAVLINK_MSG_ID_TASK_SEQUENCE_LEN;
        memset(task_sequence, 0, MAVLINK_MSG_ID_TASK_SEQUENCE_LEN);
    memcpy(task_sequence, _MAV_PAYLOAD(msg), len);
#endif
}
