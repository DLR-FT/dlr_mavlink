#pragma once
// MESSAGE GNSS_RELATIVE_NAVIGATION PACKING

#define MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION 525


typedef struct __mavlink_gnss_relative_navigation_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint64_t time_utc_usec; /*< [us] Timestamp (UNIX Epoch time). */
 float RelN; /*< [m] Relative postion north*/
 float RelE; /*< [m] Relative postion east*/
 float RelD; /*< [m] Relative postion down*/
 float RelN_Acc; /*< [m] Accuracy of relative postion north */
 float RelE_Acc; /*< [m] Accuracy of relative postion east*/
 float RelD_Acc; /*< [m] Accuracy of relative postion down*/
 float Heading; /*< [deg] Heading of the relative position vector*/
 float Heading_Acc; /*< [deg] Accuracy of heading of the relative position vector*/
 float Position_Length; /*< [m] Length of position vector*/
 float Accuracy_Length; /*< [m] Accuracy of heading of the relative position vector*/
 uint16_t Reference_Station_ID; /*<  Reference Station ID*/
 uint8_t GNSS_Fix_Ok; /*<  Boolian: GNSS valid fix (i.e within DOP and accuracy masks)*/
 uint8_t Differential_Solution; /*<  Boolian: differential corrections were applied*/
 uint8_t Relative_Position_Valid; /*<  Boolian: Accuracy of heading of the relative position vector*/
 uint8_t Carrier_Solution_Floating; /*<  Boolian: Carrier phase range solution with floating ambiguities*/
 uint8_t Carrier_Solution_Fixed; /*<  Boolian: Carrier phase range solution with fixed ambiguities*/
 uint8_t Moving_Base_Mode; /*<  Boolian: The receiver is operating in moving base mode*/
 uint8_t Reference_Position_Miss; /*<  Boolian: Extrapolated reference position was used to compute moving base solution this epoch*/
 uint8_t Reference_Observations_Miss; /*<  Boolian: Extrapolated reference observations were used to compute moving base solution this epoch*/
 uint8_t Heading_Valid; /*<  Boolian: Heading information is valid*/
 uint8_t Relative_Position_Normalized; /*<  Boolian: The components of the relative position vector (including the high-precision parts) are normalized*/
} mavlink_gnss_relative_navigation_t;

#define MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN 68
#define MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN 68
#define MAVLINK_MSG_ID_525_LEN 68
#define MAVLINK_MSG_ID_525_MIN_LEN 68

#define MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC 19
#define MAVLINK_MSG_ID_525_CRC 19



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GNSS_RELATIVE_NAVIGATION { \
    525, \
    "GNSS_RELATIVE_NAVIGATION", \
    23, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_gnss_relative_navigation_t, time_usec) }, \
         { "time_utc_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_gnss_relative_navigation_t, time_utc_usec) }, \
         { "Reference_Station_ID", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_gnss_relative_navigation_t, Reference_Station_ID) }, \
         { "RelN", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_gnss_relative_navigation_t, RelN) }, \
         { "RelE", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_gnss_relative_navigation_t, RelE) }, \
         { "RelD", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_gnss_relative_navigation_t, RelD) }, \
         { "RelN_Acc", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_gnss_relative_navigation_t, RelN_Acc) }, \
         { "RelE_Acc", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_gnss_relative_navigation_t, RelE_Acc) }, \
         { "RelD_Acc", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_gnss_relative_navigation_t, RelD_Acc) }, \
         { "Heading", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_gnss_relative_navigation_t, Heading) }, \
         { "Heading_Acc", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_gnss_relative_navigation_t, Heading_Acc) }, \
         { "Position_Length", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_gnss_relative_navigation_t, Position_Length) }, \
         { "Accuracy_Length", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_gnss_relative_navigation_t, Accuracy_Length) }, \
         { "GNSS_Fix_Ok", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_gnss_relative_navigation_t, GNSS_Fix_Ok) }, \
         { "Differential_Solution", NULL, MAVLINK_TYPE_UINT8_T, 0, 59, offsetof(mavlink_gnss_relative_navigation_t, Differential_Solution) }, \
         { "Relative_Position_Valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_gnss_relative_navigation_t, Relative_Position_Valid) }, \
         { "Carrier_Solution_Floating", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_gnss_relative_navigation_t, Carrier_Solution_Floating) }, \
         { "Carrier_Solution_Fixed", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_gnss_relative_navigation_t, Carrier_Solution_Fixed) }, \
         { "Moving_Base_Mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_gnss_relative_navigation_t, Moving_Base_Mode) }, \
         { "Reference_Position_Miss", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_gnss_relative_navigation_t, Reference_Position_Miss) }, \
         { "Reference_Observations_Miss", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_gnss_relative_navigation_t, Reference_Observations_Miss) }, \
         { "Heading_Valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_gnss_relative_navigation_t, Heading_Valid) }, \
         { "Relative_Position_Normalized", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_gnss_relative_navigation_t, Relative_Position_Normalized) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GNSS_RELATIVE_NAVIGATION { \
    "GNSS_RELATIVE_NAVIGATION", \
    23, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_gnss_relative_navigation_t, time_usec) }, \
         { "time_utc_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_gnss_relative_navigation_t, time_utc_usec) }, \
         { "Reference_Station_ID", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_gnss_relative_navigation_t, Reference_Station_ID) }, \
         { "RelN", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_gnss_relative_navigation_t, RelN) }, \
         { "RelE", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_gnss_relative_navigation_t, RelE) }, \
         { "RelD", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_gnss_relative_navigation_t, RelD) }, \
         { "RelN_Acc", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_gnss_relative_navigation_t, RelN_Acc) }, \
         { "RelE_Acc", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_gnss_relative_navigation_t, RelE_Acc) }, \
         { "RelD_Acc", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_gnss_relative_navigation_t, RelD_Acc) }, \
         { "Heading", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_gnss_relative_navigation_t, Heading) }, \
         { "Heading_Acc", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_gnss_relative_navigation_t, Heading_Acc) }, \
         { "Position_Length", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_gnss_relative_navigation_t, Position_Length) }, \
         { "Accuracy_Length", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_gnss_relative_navigation_t, Accuracy_Length) }, \
         { "GNSS_Fix_Ok", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_gnss_relative_navigation_t, GNSS_Fix_Ok) }, \
         { "Differential_Solution", NULL, MAVLINK_TYPE_UINT8_T, 0, 59, offsetof(mavlink_gnss_relative_navigation_t, Differential_Solution) }, \
         { "Relative_Position_Valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_gnss_relative_navigation_t, Relative_Position_Valid) }, \
         { "Carrier_Solution_Floating", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_gnss_relative_navigation_t, Carrier_Solution_Floating) }, \
         { "Carrier_Solution_Fixed", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_gnss_relative_navigation_t, Carrier_Solution_Fixed) }, \
         { "Moving_Base_Mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_gnss_relative_navigation_t, Moving_Base_Mode) }, \
         { "Reference_Position_Miss", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_gnss_relative_navigation_t, Reference_Position_Miss) }, \
         { "Reference_Observations_Miss", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_gnss_relative_navigation_t, Reference_Observations_Miss) }, \
         { "Heading_Valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_gnss_relative_navigation_t, Heading_Valid) }, \
         { "Relative_Position_Normalized", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_gnss_relative_navigation_t, Relative_Position_Normalized) }, \
         } \
}
#endif

/**
 * @brief Pack a gnss_relative_navigation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param time_utc_usec [us] Timestamp (UNIX Epoch time). 
 * @param Reference_Station_ID  Reference Station ID
 * @param RelN [m] Relative postion north
 * @param RelE [m] Relative postion east
 * @param RelD [m] Relative postion down
 * @param RelN_Acc [m] Accuracy of relative postion north 
 * @param RelE_Acc [m] Accuracy of relative postion east
 * @param RelD_Acc [m] Accuracy of relative postion down
 * @param Heading [deg] Heading of the relative position vector
 * @param Heading_Acc [deg] Accuracy of heading of the relative position vector
 * @param Position_Length [m] Length of position vector
 * @param Accuracy_Length [m] Accuracy of heading of the relative position vector
 * @param GNSS_Fix_Ok  Boolian: GNSS valid fix (i.e within DOP and accuracy masks)
 * @param Differential_Solution  Boolian: differential corrections were applied
 * @param Relative_Position_Valid  Boolian: Accuracy of heading of the relative position vector
 * @param Carrier_Solution_Floating  Boolian: Carrier phase range solution with floating ambiguities
 * @param Carrier_Solution_Fixed  Boolian: Carrier phase range solution with fixed ambiguities
 * @param Moving_Base_Mode  Boolian: The receiver is operating in moving base mode
 * @param Reference_Position_Miss  Boolian: Extrapolated reference position was used to compute moving base solution this epoch
 * @param Reference_Observations_Miss  Boolian: Extrapolated reference observations were used to compute moving base solution this epoch
 * @param Heading_Valid  Boolian: Heading information is valid
 * @param Relative_Position_Normalized  Boolian: The components of the relative position vector (including the high-precision parts) are normalized
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_relative_navigation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint64_t time_utc_usec, uint16_t Reference_Station_ID, float RelN, float RelE, float RelD, float RelN_Acc, float RelE_Acc, float RelD_Acc, float Heading, float Heading_Acc, float Position_Length, float Accuracy_Length, uint8_t GNSS_Fix_Ok, uint8_t Differential_Solution, uint8_t Relative_Position_Valid, uint8_t Carrier_Solution_Floating, uint8_t Carrier_Solution_Fixed, uint8_t Moving_Base_Mode, uint8_t Reference_Position_Miss, uint8_t Reference_Observations_Miss, uint8_t Heading_Valid, uint8_t Relative_Position_Normalized)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_usec);
    _mav_put_float(buf, 16, RelN);
    _mav_put_float(buf, 20, RelE);
    _mav_put_float(buf, 24, RelD);
    _mav_put_float(buf, 28, RelN_Acc);
    _mav_put_float(buf, 32, RelE_Acc);
    _mav_put_float(buf, 36, RelD_Acc);
    _mav_put_float(buf, 40, Heading);
    _mav_put_float(buf, 44, Heading_Acc);
    _mav_put_float(buf, 48, Position_Length);
    _mav_put_float(buf, 52, Accuracy_Length);
    _mav_put_uint16_t(buf, 56, Reference_Station_ID);
    _mav_put_uint8_t(buf, 58, GNSS_Fix_Ok);
    _mav_put_uint8_t(buf, 59, Differential_Solution);
    _mav_put_uint8_t(buf, 60, Relative_Position_Valid);
    _mav_put_uint8_t(buf, 61, Carrier_Solution_Floating);
    _mav_put_uint8_t(buf, 62, Carrier_Solution_Fixed);
    _mav_put_uint8_t(buf, 63, Moving_Base_Mode);
    _mav_put_uint8_t(buf, 64, Reference_Position_Miss);
    _mav_put_uint8_t(buf, 65, Reference_Observations_Miss);
    _mav_put_uint8_t(buf, 66, Heading_Valid);
    _mav_put_uint8_t(buf, 67, Relative_Position_Normalized);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN);
#else
    mavlink_gnss_relative_navigation_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_usec = time_utc_usec;
    packet.RelN = RelN;
    packet.RelE = RelE;
    packet.RelD = RelD;
    packet.RelN_Acc = RelN_Acc;
    packet.RelE_Acc = RelE_Acc;
    packet.RelD_Acc = RelD_Acc;
    packet.Heading = Heading;
    packet.Heading_Acc = Heading_Acc;
    packet.Position_Length = Position_Length;
    packet.Accuracy_Length = Accuracy_Length;
    packet.Reference_Station_ID = Reference_Station_ID;
    packet.GNSS_Fix_Ok = GNSS_Fix_Ok;
    packet.Differential_Solution = Differential_Solution;
    packet.Relative_Position_Valid = Relative_Position_Valid;
    packet.Carrier_Solution_Floating = Carrier_Solution_Floating;
    packet.Carrier_Solution_Fixed = Carrier_Solution_Fixed;
    packet.Moving_Base_Mode = Moving_Base_Mode;
    packet.Reference_Position_Miss = Reference_Position_Miss;
    packet.Reference_Observations_Miss = Reference_Observations_Miss;
    packet.Heading_Valid = Heading_Valid;
    packet.Relative_Position_Normalized = Relative_Position_Normalized;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC);
}

/**
 * @brief Pack a gnss_relative_navigation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param time_utc_usec [us] Timestamp (UNIX Epoch time). 
 * @param Reference_Station_ID  Reference Station ID
 * @param RelN [m] Relative postion north
 * @param RelE [m] Relative postion east
 * @param RelD [m] Relative postion down
 * @param RelN_Acc [m] Accuracy of relative postion north 
 * @param RelE_Acc [m] Accuracy of relative postion east
 * @param RelD_Acc [m] Accuracy of relative postion down
 * @param Heading [deg] Heading of the relative position vector
 * @param Heading_Acc [deg] Accuracy of heading of the relative position vector
 * @param Position_Length [m] Length of position vector
 * @param Accuracy_Length [m] Accuracy of heading of the relative position vector
 * @param GNSS_Fix_Ok  Boolian: GNSS valid fix (i.e within DOP and accuracy masks)
 * @param Differential_Solution  Boolian: differential corrections were applied
 * @param Relative_Position_Valid  Boolian: Accuracy of heading of the relative position vector
 * @param Carrier_Solution_Floating  Boolian: Carrier phase range solution with floating ambiguities
 * @param Carrier_Solution_Fixed  Boolian: Carrier phase range solution with fixed ambiguities
 * @param Moving_Base_Mode  Boolian: The receiver is operating in moving base mode
 * @param Reference_Position_Miss  Boolian: Extrapolated reference position was used to compute moving base solution this epoch
 * @param Reference_Observations_Miss  Boolian: Extrapolated reference observations were used to compute moving base solution this epoch
 * @param Heading_Valid  Boolian: Heading information is valid
 * @param Relative_Position_Normalized  Boolian: The components of the relative position vector (including the high-precision parts) are normalized
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_relative_navigation_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint64_t time_utc_usec, uint16_t Reference_Station_ID, float RelN, float RelE, float RelD, float RelN_Acc, float RelE_Acc, float RelD_Acc, float Heading, float Heading_Acc, float Position_Length, float Accuracy_Length, uint8_t GNSS_Fix_Ok, uint8_t Differential_Solution, uint8_t Relative_Position_Valid, uint8_t Carrier_Solution_Floating, uint8_t Carrier_Solution_Fixed, uint8_t Moving_Base_Mode, uint8_t Reference_Position_Miss, uint8_t Reference_Observations_Miss, uint8_t Heading_Valid, uint8_t Relative_Position_Normalized)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_usec);
    _mav_put_float(buf, 16, RelN);
    _mav_put_float(buf, 20, RelE);
    _mav_put_float(buf, 24, RelD);
    _mav_put_float(buf, 28, RelN_Acc);
    _mav_put_float(buf, 32, RelE_Acc);
    _mav_put_float(buf, 36, RelD_Acc);
    _mav_put_float(buf, 40, Heading);
    _mav_put_float(buf, 44, Heading_Acc);
    _mav_put_float(buf, 48, Position_Length);
    _mav_put_float(buf, 52, Accuracy_Length);
    _mav_put_uint16_t(buf, 56, Reference_Station_ID);
    _mav_put_uint8_t(buf, 58, GNSS_Fix_Ok);
    _mav_put_uint8_t(buf, 59, Differential_Solution);
    _mav_put_uint8_t(buf, 60, Relative_Position_Valid);
    _mav_put_uint8_t(buf, 61, Carrier_Solution_Floating);
    _mav_put_uint8_t(buf, 62, Carrier_Solution_Fixed);
    _mav_put_uint8_t(buf, 63, Moving_Base_Mode);
    _mav_put_uint8_t(buf, 64, Reference_Position_Miss);
    _mav_put_uint8_t(buf, 65, Reference_Observations_Miss);
    _mav_put_uint8_t(buf, 66, Heading_Valid);
    _mav_put_uint8_t(buf, 67, Relative_Position_Normalized);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN);
#else
    mavlink_gnss_relative_navigation_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_usec = time_utc_usec;
    packet.RelN = RelN;
    packet.RelE = RelE;
    packet.RelD = RelD;
    packet.RelN_Acc = RelN_Acc;
    packet.RelE_Acc = RelE_Acc;
    packet.RelD_Acc = RelD_Acc;
    packet.Heading = Heading;
    packet.Heading_Acc = Heading_Acc;
    packet.Position_Length = Position_Length;
    packet.Accuracy_Length = Accuracy_Length;
    packet.Reference_Station_ID = Reference_Station_ID;
    packet.GNSS_Fix_Ok = GNSS_Fix_Ok;
    packet.Differential_Solution = Differential_Solution;
    packet.Relative_Position_Valid = Relative_Position_Valid;
    packet.Carrier_Solution_Floating = Carrier_Solution_Floating;
    packet.Carrier_Solution_Fixed = Carrier_Solution_Fixed;
    packet.Moving_Base_Mode = Moving_Base_Mode;
    packet.Reference_Position_Miss = Reference_Position_Miss;
    packet.Reference_Observations_Miss = Reference_Observations_Miss;
    packet.Heading_Valid = Heading_Valid;
    packet.Relative_Position_Normalized = Relative_Position_Normalized;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN);
#endif
}

/**
 * @brief Pack a gnss_relative_navigation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param time_utc_usec [us] Timestamp (UNIX Epoch time). 
 * @param Reference_Station_ID  Reference Station ID
 * @param RelN [m] Relative postion north
 * @param RelE [m] Relative postion east
 * @param RelD [m] Relative postion down
 * @param RelN_Acc [m] Accuracy of relative postion north 
 * @param RelE_Acc [m] Accuracy of relative postion east
 * @param RelD_Acc [m] Accuracy of relative postion down
 * @param Heading [deg] Heading of the relative position vector
 * @param Heading_Acc [deg] Accuracy of heading of the relative position vector
 * @param Position_Length [m] Length of position vector
 * @param Accuracy_Length [m] Accuracy of heading of the relative position vector
 * @param GNSS_Fix_Ok  Boolian: GNSS valid fix (i.e within DOP and accuracy masks)
 * @param Differential_Solution  Boolian: differential corrections were applied
 * @param Relative_Position_Valid  Boolian: Accuracy of heading of the relative position vector
 * @param Carrier_Solution_Floating  Boolian: Carrier phase range solution with floating ambiguities
 * @param Carrier_Solution_Fixed  Boolian: Carrier phase range solution with fixed ambiguities
 * @param Moving_Base_Mode  Boolian: The receiver is operating in moving base mode
 * @param Reference_Position_Miss  Boolian: Extrapolated reference position was used to compute moving base solution this epoch
 * @param Reference_Observations_Miss  Boolian: Extrapolated reference observations were used to compute moving base solution this epoch
 * @param Heading_Valid  Boolian: Heading information is valid
 * @param Relative_Position_Normalized  Boolian: The components of the relative position vector (including the high-precision parts) are normalized
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gnss_relative_navigation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint64_t time_utc_usec,uint16_t Reference_Station_ID,float RelN,float RelE,float RelD,float RelN_Acc,float RelE_Acc,float RelD_Acc,float Heading,float Heading_Acc,float Position_Length,float Accuracy_Length,uint8_t GNSS_Fix_Ok,uint8_t Differential_Solution,uint8_t Relative_Position_Valid,uint8_t Carrier_Solution_Floating,uint8_t Carrier_Solution_Fixed,uint8_t Moving_Base_Mode,uint8_t Reference_Position_Miss,uint8_t Reference_Observations_Miss,uint8_t Heading_Valid,uint8_t Relative_Position_Normalized)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_usec);
    _mav_put_float(buf, 16, RelN);
    _mav_put_float(buf, 20, RelE);
    _mav_put_float(buf, 24, RelD);
    _mav_put_float(buf, 28, RelN_Acc);
    _mav_put_float(buf, 32, RelE_Acc);
    _mav_put_float(buf, 36, RelD_Acc);
    _mav_put_float(buf, 40, Heading);
    _mav_put_float(buf, 44, Heading_Acc);
    _mav_put_float(buf, 48, Position_Length);
    _mav_put_float(buf, 52, Accuracy_Length);
    _mav_put_uint16_t(buf, 56, Reference_Station_ID);
    _mav_put_uint8_t(buf, 58, GNSS_Fix_Ok);
    _mav_put_uint8_t(buf, 59, Differential_Solution);
    _mav_put_uint8_t(buf, 60, Relative_Position_Valid);
    _mav_put_uint8_t(buf, 61, Carrier_Solution_Floating);
    _mav_put_uint8_t(buf, 62, Carrier_Solution_Fixed);
    _mav_put_uint8_t(buf, 63, Moving_Base_Mode);
    _mav_put_uint8_t(buf, 64, Reference_Position_Miss);
    _mav_put_uint8_t(buf, 65, Reference_Observations_Miss);
    _mav_put_uint8_t(buf, 66, Heading_Valid);
    _mav_put_uint8_t(buf, 67, Relative_Position_Normalized);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN);
#else
    mavlink_gnss_relative_navigation_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_usec = time_utc_usec;
    packet.RelN = RelN;
    packet.RelE = RelE;
    packet.RelD = RelD;
    packet.RelN_Acc = RelN_Acc;
    packet.RelE_Acc = RelE_Acc;
    packet.RelD_Acc = RelD_Acc;
    packet.Heading = Heading;
    packet.Heading_Acc = Heading_Acc;
    packet.Position_Length = Position_Length;
    packet.Accuracy_Length = Accuracy_Length;
    packet.Reference_Station_ID = Reference_Station_ID;
    packet.GNSS_Fix_Ok = GNSS_Fix_Ok;
    packet.Differential_Solution = Differential_Solution;
    packet.Relative_Position_Valid = Relative_Position_Valid;
    packet.Carrier_Solution_Floating = Carrier_Solution_Floating;
    packet.Carrier_Solution_Fixed = Carrier_Solution_Fixed;
    packet.Moving_Base_Mode = Moving_Base_Mode;
    packet.Reference_Position_Miss = Reference_Position_Miss;
    packet.Reference_Observations_Miss = Reference_Observations_Miss;
    packet.Heading_Valid = Heading_Valid;
    packet.Relative_Position_Normalized = Relative_Position_Normalized;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC);
}

/**
 * @brief Encode a gnss_relative_navigation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gnss_relative_navigation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_relative_navigation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gnss_relative_navigation_t* gnss_relative_navigation)
{
    return mavlink_msg_gnss_relative_navigation_pack(system_id, component_id, msg, gnss_relative_navigation->time_usec, gnss_relative_navigation->time_utc_usec, gnss_relative_navigation->Reference_Station_ID, gnss_relative_navigation->RelN, gnss_relative_navigation->RelE, gnss_relative_navigation->RelD, gnss_relative_navigation->RelN_Acc, gnss_relative_navigation->RelE_Acc, gnss_relative_navigation->RelD_Acc, gnss_relative_navigation->Heading, gnss_relative_navigation->Heading_Acc, gnss_relative_navigation->Position_Length, gnss_relative_navigation->Accuracy_Length, gnss_relative_navigation->GNSS_Fix_Ok, gnss_relative_navigation->Differential_Solution, gnss_relative_navigation->Relative_Position_Valid, gnss_relative_navigation->Carrier_Solution_Floating, gnss_relative_navigation->Carrier_Solution_Fixed, gnss_relative_navigation->Moving_Base_Mode, gnss_relative_navigation->Reference_Position_Miss, gnss_relative_navigation->Reference_Observations_Miss, gnss_relative_navigation->Heading_Valid, gnss_relative_navigation->Relative_Position_Normalized);
}

/**
 * @brief Encode a gnss_relative_navigation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gnss_relative_navigation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_relative_navigation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gnss_relative_navigation_t* gnss_relative_navigation)
{
    return mavlink_msg_gnss_relative_navigation_pack_chan(system_id, component_id, chan, msg, gnss_relative_navigation->time_usec, gnss_relative_navigation->time_utc_usec, gnss_relative_navigation->Reference_Station_ID, gnss_relative_navigation->RelN, gnss_relative_navigation->RelE, gnss_relative_navigation->RelD, gnss_relative_navigation->RelN_Acc, gnss_relative_navigation->RelE_Acc, gnss_relative_navigation->RelD_Acc, gnss_relative_navigation->Heading, gnss_relative_navigation->Heading_Acc, gnss_relative_navigation->Position_Length, gnss_relative_navigation->Accuracy_Length, gnss_relative_navigation->GNSS_Fix_Ok, gnss_relative_navigation->Differential_Solution, gnss_relative_navigation->Relative_Position_Valid, gnss_relative_navigation->Carrier_Solution_Floating, gnss_relative_navigation->Carrier_Solution_Fixed, gnss_relative_navigation->Moving_Base_Mode, gnss_relative_navigation->Reference_Position_Miss, gnss_relative_navigation->Reference_Observations_Miss, gnss_relative_navigation->Heading_Valid, gnss_relative_navigation->Relative_Position_Normalized);
}

/**
 * @brief Encode a gnss_relative_navigation struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gnss_relative_navigation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gnss_relative_navigation_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gnss_relative_navigation_t* gnss_relative_navigation)
{
    return mavlink_msg_gnss_relative_navigation_pack_status(system_id, component_id, _status, msg,  gnss_relative_navigation->time_usec, gnss_relative_navigation->time_utc_usec, gnss_relative_navigation->Reference_Station_ID, gnss_relative_navigation->RelN, gnss_relative_navigation->RelE, gnss_relative_navigation->RelD, gnss_relative_navigation->RelN_Acc, gnss_relative_navigation->RelE_Acc, gnss_relative_navigation->RelD_Acc, gnss_relative_navigation->Heading, gnss_relative_navigation->Heading_Acc, gnss_relative_navigation->Position_Length, gnss_relative_navigation->Accuracy_Length, gnss_relative_navigation->GNSS_Fix_Ok, gnss_relative_navigation->Differential_Solution, gnss_relative_navigation->Relative_Position_Valid, gnss_relative_navigation->Carrier_Solution_Floating, gnss_relative_navigation->Carrier_Solution_Fixed, gnss_relative_navigation->Moving_Base_Mode, gnss_relative_navigation->Reference_Position_Miss, gnss_relative_navigation->Reference_Observations_Miss, gnss_relative_navigation->Heading_Valid, gnss_relative_navigation->Relative_Position_Normalized);
}

/**
 * @brief Send a gnss_relative_navigation message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param time_utc_usec [us] Timestamp (UNIX Epoch time). 
 * @param Reference_Station_ID  Reference Station ID
 * @param RelN [m] Relative postion north
 * @param RelE [m] Relative postion east
 * @param RelD [m] Relative postion down
 * @param RelN_Acc [m] Accuracy of relative postion north 
 * @param RelE_Acc [m] Accuracy of relative postion east
 * @param RelD_Acc [m] Accuracy of relative postion down
 * @param Heading [deg] Heading of the relative position vector
 * @param Heading_Acc [deg] Accuracy of heading of the relative position vector
 * @param Position_Length [m] Length of position vector
 * @param Accuracy_Length [m] Accuracy of heading of the relative position vector
 * @param GNSS_Fix_Ok  Boolian: GNSS valid fix (i.e within DOP and accuracy masks)
 * @param Differential_Solution  Boolian: differential corrections were applied
 * @param Relative_Position_Valid  Boolian: Accuracy of heading of the relative position vector
 * @param Carrier_Solution_Floating  Boolian: Carrier phase range solution with floating ambiguities
 * @param Carrier_Solution_Fixed  Boolian: Carrier phase range solution with fixed ambiguities
 * @param Moving_Base_Mode  Boolian: The receiver is operating in moving base mode
 * @param Reference_Position_Miss  Boolian: Extrapolated reference position was used to compute moving base solution this epoch
 * @param Reference_Observations_Miss  Boolian: Extrapolated reference observations were used to compute moving base solution this epoch
 * @param Heading_Valid  Boolian: Heading information is valid
 * @param Relative_Position_Normalized  Boolian: The components of the relative position vector (including the high-precision parts) are normalized
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gnss_relative_navigation_send(mavlink_channel_t chan, uint64_t time_usec, uint64_t time_utc_usec, uint16_t Reference_Station_ID, float RelN, float RelE, float RelD, float RelN_Acc, float RelE_Acc, float RelD_Acc, float Heading, float Heading_Acc, float Position_Length, float Accuracy_Length, uint8_t GNSS_Fix_Ok, uint8_t Differential_Solution, uint8_t Relative_Position_Valid, uint8_t Carrier_Solution_Floating, uint8_t Carrier_Solution_Fixed, uint8_t Moving_Base_Mode, uint8_t Reference_Position_Miss, uint8_t Reference_Observations_Miss, uint8_t Heading_Valid, uint8_t Relative_Position_Normalized)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_usec);
    _mav_put_float(buf, 16, RelN);
    _mav_put_float(buf, 20, RelE);
    _mav_put_float(buf, 24, RelD);
    _mav_put_float(buf, 28, RelN_Acc);
    _mav_put_float(buf, 32, RelE_Acc);
    _mav_put_float(buf, 36, RelD_Acc);
    _mav_put_float(buf, 40, Heading);
    _mav_put_float(buf, 44, Heading_Acc);
    _mav_put_float(buf, 48, Position_Length);
    _mav_put_float(buf, 52, Accuracy_Length);
    _mav_put_uint16_t(buf, 56, Reference_Station_ID);
    _mav_put_uint8_t(buf, 58, GNSS_Fix_Ok);
    _mav_put_uint8_t(buf, 59, Differential_Solution);
    _mav_put_uint8_t(buf, 60, Relative_Position_Valid);
    _mav_put_uint8_t(buf, 61, Carrier_Solution_Floating);
    _mav_put_uint8_t(buf, 62, Carrier_Solution_Fixed);
    _mav_put_uint8_t(buf, 63, Moving_Base_Mode);
    _mav_put_uint8_t(buf, 64, Reference_Position_Miss);
    _mav_put_uint8_t(buf, 65, Reference_Observations_Miss);
    _mav_put_uint8_t(buf, 66, Heading_Valid);
    _mav_put_uint8_t(buf, 67, Relative_Position_Normalized);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION, buf, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC);
#else
    mavlink_gnss_relative_navigation_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_usec = time_utc_usec;
    packet.RelN = RelN;
    packet.RelE = RelE;
    packet.RelD = RelD;
    packet.RelN_Acc = RelN_Acc;
    packet.RelE_Acc = RelE_Acc;
    packet.RelD_Acc = RelD_Acc;
    packet.Heading = Heading;
    packet.Heading_Acc = Heading_Acc;
    packet.Position_Length = Position_Length;
    packet.Accuracy_Length = Accuracy_Length;
    packet.Reference_Station_ID = Reference_Station_ID;
    packet.GNSS_Fix_Ok = GNSS_Fix_Ok;
    packet.Differential_Solution = Differential_Solution;
    packet.Relative_Position_Valid = Relative_Position_Valid;
    packet.Carrier_Solution_Floating = Carrier_Solution_Floating;
    packet.Carrier_Solution_Fixed = Carrier_Solution_Fixed;
    packet.Moving_Base_Mode = Moving_Base_Mode;
    packet.Reference_Position_Miss = Reference_Position_Miss;
    packet.Reference_Observations_Miss = Reference_Observations_Miss;
    packet.Heading_Valid = Heading_Valid;
    packet.Relative_Position_Normalized = Relative_Position_Normalized;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION, (const char *)&packet, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC);
#endif
}

/**
 * @brief Send a gnss_relative_navigation message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gnss_relative_navigation_send_struct(mavlink_channel_t chan, const mavlink_gnss_relative_navigation_t* gnss_relative_navigation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gnss_relative_navigation_send(chan, gnss_relative_navigation->time_usec, gnss_relative_navigation->time_utc_usec, gnss_relative_navigation->Reference_Station_ID, gnss_relative_navigation->RelN, gnss_relative_navigation->RelE, gnss_relative_navigation->RelD, gnss_relative_navigation->RelN_Acc, gnss_relative_navigation->RelE_Acc, gnss_relative_navigation->RelD_Acc, gnss_relative_navigation->Heading, gnss_relative_navigation->Heading_Acc, gnss_relative_navigation->Position_Length, gnss_relative_navigation->Accuracy_Length, gnss_relative_navigation->GNSS_Fix_Ok, gnss_relative_navigation->Differential_Solution, gnss_relative_navigation->Relative_Position_Valid, gnss_relative_navigation->Carrier_Solution_Floating, gnss_relative_navigation->Carrier_Solution_Fixed, gnss_relative_navigation->Moving_Base_Mode, gnss_relative_navigation->Reference_Position_Miss, gnss_relative_navigation->Reference_Observations_Miss, gnss_relative_navigation->Heading_Valid, gnss_relative_navigation->Relative_Position_Normalized);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION, (const char *)gnss_relative_navigation, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gnss_relative_navigation_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint64_t time_utc_usec, uint16_t Reference_Station_ID, float RelN, float RelE, float RelD, float RelN_Acc, float RelE_Acc, float RelD_Acc, float Heading, float Heading_Acc, float Position_Length, float Accuracy_Length, uint8_t GNSS_Fix_Ok, uint8_t Differential_Solution, uint8_t Relative_Position_Valid, uint8_t Carrier_Solution_Floating, uint8_t Carrier_Solution_Fixed, uint8_t Moving_Base_Mode, uint8_t Reference_Position_Miss, uint8_t Reference_Observations_Miss, uint8_t Heading_Valid, uint8_t Relative_Position_Normalized)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_usec);
    _mav_put_float(buf, 16, RelN);
    _mav_put_float(buf, 20, RelE);
    _mav_put_float(buf, 24, RelD);
    _mav_put_float(buf, 28, RelN_Acc);
    _mav_put_float(buf, 32, RelE_Acc);
    _mav_put_float(buf, 36, RelD_Acc);
    _mav_put_float(buf, 40, Heading);
    _mav_put_float(buf, 44, Heading_Acc);
    _mav_put_float(buf, 48, Position_Length);
    _mav_put_float(buf, 52, Accuracy_Length);
    _mav_put_uint16_t(buf, 56, Reference_Station_ID);
    _mav_put_uint8_t(buf, 58, GNSS_Fix_Ok);
    _mav_put_uint8_t(buf, 59, Differential_Solution);
    _mav_put_uint8_t(buf, 60, Relative_Position_Valid);
    _mav_put_uint8_t(buf, 61, Carrier_Solution_Floating);
    _mav_put_uint8_t(buf, 62, Carrier_Solution_Fixed);
    _mav_put_uint8_t(buf, 63, Moving_Base_Mode);
    _mav_put_uint8_t(buf, 64, Reference_Position_Miss);
    _mav_put_uint8_t(buf, 65, Reference_Observations_Miss);
    _mav_put_uint8_t(buf, 66, Heading_Valid);
    _mav_put_uint8_t(buf, 67, Relative_Position_Normalized);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION, buf, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC);
#else
    mavlink_gnss_relative_navigation_t *packet = (mavlink_gnss_relative_navigation_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->time_utc_usec = time_utc_usec;
    packet->RelN = RelN;
    packet->RelE = RelE;
    packet->RelD = RelD;
    packet->RelN_Acc = RelN_Acc;
    packet->RelE_Acc = RelE_Acc;
    packet->RelD_Acc = RelD_Acc;
    packet->Heading = Heading;
    packet->Heading_Acc = Heading_Acc;
    packet->Position_Length = Position_Length;
    packet->Accuracy_Length = Accuracy_Length;
    packet->Reference_Station_ID = Reference_Station_ID;
    packet->GNSS_Fix_Ok = GNSS_Fix_Ok;
    packet->Differential_Solution = Differential_Solution;
    packet->Relative_Position_Valid = Relative_Position_Valid;
    packet->Carrier_Solution_Floating = Carrier_Solution_Floating;
    packet->Carrier_Solution_Fixed = Carrier_Solution_Fixed;
    packet->Moving_Base_Mode = Moving_Base_Mode;
    packet->Reference_Position_Miss = Reference_Position_Miss;
    packet->Reference_Observations_Miss = Reference_Observations_Miss;
    packet->Heading_Valid = Heading_Valid;
    packet->Relative_Position_Normalized = Relative_Position_Normalized;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION, (const char *)packet, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_CRC);
#endif
}
#endif

#endif

// MESSAGE GNSS_RELATIVE_NAVIGATION UNPACKING


/**
 * @brief Get field time_usec from gnss_relative_navigation message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_gnss_relative_navigation_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field time_utc_usec from gnss_relative_navigation message
 *
 * @return [us] Timestamp (UNIX Epoch time). 
 */
static inline uint64_t mavlink_msg_gnss_relative_navigation_get_time_utc_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field Reference_Station_ID from gnss_relative_navigation message
 *
 * @return  Reference Station ID
 */
static inline uint16_t mavlink_msg_gnss_relative_navigation_get_Reference_Station_ID(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  56);
}

/**
 * @brief Get field RelN from gnss_relative_navigation message
 *
 * @return [m] Relative postion north
 */
static inline float mavlink_msg_gnss_relative_navigation_get_RelN(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field RelE from gnss_relative_navigation message
 *
 * @return [m] Relative postion east
 */
static inline float mavlink_msg_gnss_relative_navigation_get_RelE(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field RelD from gnss_relative_navigation message
 *
 * @return [m] Relative postion down
 */
static inline float mavlink_msg_gnss_relative_navigation_get_RelD(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field RelN_Acc from gnss_relative_navigation message
 *
 * @return [m] Accuracy of relative postion north 
 */
static inline float mavlink_msg_gnss_relative_navigation_get_RelN_Acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field RelE_Acc from gnss_relative_navigation message
 *
 * @return [m] Accuracy of relative postion east
 */
static inline float mavlink_msg_gnss_relative_navigation_get_RelE_Acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field RelD_Acc from gnss_relative_navigation message
 *
 * @return [m] Accuracy of relative postion down
 */
static inline float mavlink_msg_gnss_relative_navigation_get_RelD_Acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field Heading from gnss_relative_navigation message
 *
 * @return [deg] Heading of the relative position vector
 */
static inline float mavlink_msg_gnss_relative_navigation_get_Heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field Heading_Acc from gnss_relative_navigation message
 *
 * @return [deg] Accuracy of heading of the relative position vector
 */
static inline float mavlink_msg_gnss_relative_navigation_get_Heading_Acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field Position_Length from gnss_relative_navigation message
 *
 * @return [m] Length of position vector
 */
static inline float mavlink_msg_gnss_relative_navigation_get_Position_Length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field Accuracy_Length from gnss_relative_navigation message
 *
 * @return [m] Accuracy of heading of the relative position vector
 */
static inline float mavlink_msg_gnss_relative_navigation_get_Accuracy_Length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field GNSS_Fix_Ok from gnss_relative_navigation message
 *
 * @return  Boolian: GNSS valid fix (i.e within DOP and accuracy masks)
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_GNSS_Fix_Ok(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  58);
}

/**
 * @brief Get field Differential_Solution from gnss_relative_navigation message
 *
 * @return  Boolian: differential corrections were applied
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Differential_Solution(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  59);
}

/**
 * @brief Get field Relative_Position_Valid from gnss_relative_navigation message
 *
 * @return  Boolian: Accuracy of heading of the relative position vector
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Relative_Position_Valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  60);
}

/**
 * @brief Get field Carrier_Solution_Floating from gnss_relative_navigation message
 *
 * @return  Boolian: Carrier phase range solution with floating ambiguities
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Carrier_Solution_Floating(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  61);
}

/**
 * @brief Get field Carrier_Solution_Fixed from gnss_relative_navigation message
 *
 * @return  Boolian: Carrier phase range solution with fixed ambiguities
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Carrier_Solution_Fixed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  62);
}

/**
 * @brief Get field Moving_Base_Mode from gnss_relative_navigation message
 *
 * @return  Boolian: The receiver is operating in moving base mode
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Moving_Base_Mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  63);
}

/**
 * @brief Get field Reference_Position_Miss from gnss_relative_navigation message
 *
 * @return  Boolian: Extrapolated reference position was used to compute moving base solution this epoch
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Reference_Position_Miss(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  64);
}

/**
 * @brief Get field Reference_Observations_Miss from gnss_relative_navigation message
 *
 * @return  Boolian: Extrapolated reference observations were used to compute moving base solution this epoch
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Reference_Observations_Miss(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  65);
}

/**
 * @brief Get field Heading_Valid from gnss_relative_navigation message
 *
 * @return  Boolian: Heading information is valid
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Heading_Valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Get field Relative_Position_Normalized from gnss_relative_navigation message
 *
 * @return  Boolian: The components of the relative position vector (including the high-precision parts) are normalized
 */
static inline uint8_t mavlink_msg_gnss_relative_navigation_get_Relative_Position_Normalized(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  67);
}

/**
 * @brief Decode a gnss_relative_navigation message into a struct
 *
 * @param msg The message to decode
 * @param gnss_relative_navigation C-struct to decode the message contents into
 */
static inline void mavlink_msg_gnss_relative_navigation_decode(const mavlink_message_t* msg, mavlink_gnss_relative_navigation_t* gnss_relative_navigation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gnss_relative_navigation->time_usec = mavlink_msg_gnss_relative_navigation_get_time_usec(msg);
    gnss_relative_navigation->time_utc_usec = mavlink_msg_gnss_relative_navigation_get_time_utc_usec(msg);
    gnss_relative_navigation->RelN = mavlink_msg_gnss_relative_navigation_get_RelN(msg);
    gnss_relative_navigation->RelE = mavlink_msg_gnss_relative_navigation_get_RelE(msg);
    gnss_relative_navigation->RelD = mavlink_msg_gnss_relative_navigation_get_RelD(msg);
    gnss_relative_navigation->RelN_Acc = mavlink_msg_gnss_relative_navigation_get_RelN_Acc(msg);
    gnss_relative_navigation->RelE_Acc = mavlink_msg_gnss_relative_navigation_get_RelE_Acc(msg);
    gnss_relative_navigation->RelD_Acc = mavlink_msg_gnss_relative_navigation_get_RelD_Acc(msg);
    gnss_relative_navigation->Heading = mavlink_msg_gnss_relative_navigation_get_Heading(msg);
    gnss_relative_navigation->Heading_Acc = mavlink_msg_gnss_relative_navigation_get_Heading_Acc(msg);
    gnss_relative_navigation->Position_Length = mavlink_msg_gnss_relative_navigation_get_Position_Length(msg);
    gnss_relative_navigation->Accuracy_Length = mavlink_msg_gnss_relative_navigation_get_Accuracy_Length(msg);
    gnss_relative_navigation->Reference_Station_ID = mavlink_msg_gnss_relative_navigation_get_Reference_Station_ID(msg);
    gnss_relative_navigation->GNSS_Fix_Ok = mavlink_msg_gnss_relative_navigation_get_GNSS_Fix_Ok(msg);
    gnss_relative_navigation->Differential_Solution = mavlink_msg_gnss_relative_navigation_get_Differential_Solution(msg);
    gnss_relative_navigation->Relative_Position_Valid = mavlink_msg_gnss_relative_navigation_get_Relative_Position_Valid(msg);
    gnss_relative_navigation->Carrier_Solution_Floating = mavlink_msg_gnss_relative_navigation_get_Carrier_Solution_Floating(msg);
    gnss_relative_navigation->Carrier_Solution_Fixed = mavlink_msg_gnss_relative_navigation_get_Carrier_Solution_Fixed(msg);
    gnss_relative_navigation->Moving_Base_Mode = mavlink_msg_gnss_relative_navigation_get_Moving_Base_Mode(msg);
    gnss_relative_navigation->Reference_Position_Miss = mavlink_msg_gnss_relative_navigation_get_Reference_Position_Miss(msg);
    gnss_relative_navigation->Reference_Observations_Miss = mavlink_msg_gnss_relative_navigation_get_Reference_Observations_Miss(msg);
    gnss_relative_navigation->Heading_Valid = mavlink_msg_gnss_relative_navigation_get_Heading_Valid(msg);
    gnss_relative_navigation->Relative_Position_Normalized = mavlink_msg_gnss_relative_navigation_get_Relative_Position_Normalized(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN? msg->len : MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN;
        memset(gnss_relative_navigation, 0, MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_LEN);
    memcpy(gnss_relative_navigation, _MAV_PAYLOAD(msg), len);
#endif
}
