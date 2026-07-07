/** @file
 *    @brief MAVLink comm protocol testsuite generated from dlr.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef DLR_TESTSUITE_H
#define DLR_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_icarous(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_dlr(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_icarous(system_id, component_id, last_msg);
    mavlink_test_dlr(system_id, component_id, last_msg);
}
#endif

#include "../ardupilotmega/testsuite.h"
#include "../common/testsuite.h"
#include "../icarous/testsuite.h"


static void mavlink_test_force_sensor_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FORCE_SENSOR_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_force_sensor_data_t packet_in = {
        93372036854775807ULL,963497880,963498088,963498296,963498504,963498712,963498920
    };
    mavlink_force_sensor_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.fx = packet_in.fx;
        packet1.fy = packet_in.fy;
        packet1.fz = packet_in.fz;
        packet1.tx = packet_in.tx;
        packet1.ty = packet_in.ty;
        packet1.tz = packet_in.tz;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FORCE_SENSOR_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_force_sensor_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_force_sensor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_force_sensor_data_pack(system_id, component_id, &msg , packet1.time_usec , packet1.fx , packet1.fy , packet1.fz , packet1.tx , packet1.ty , packet1.tz );
    mavlink_msg_force_sensor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_force_sensor_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.fx , packet1.fy , packet1.fz , packet1.tx , packet1.ty , packet1.tz );
    mavlink_msg_force_sensor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_force_sensor_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_force_sensor_data_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.fx , packet1.fy , packet1.fz , packet1.tx , packet1.ty , packet1.tz );
    mavlink_msg_force_sensor_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FORCE_SENSOR_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FORCE_SENSOR_DATA) != NULL);
#endif
}

static void mavlink_test_aux_output(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AUX_OUTPUT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_aux_output_t packet_in = {
        93372036854775807ULL,17651,17755,17859,17963,18067,18171,18275,18379,18483
    };
    mavlink_aux_output_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.num = packet_in.num;
        packet1.aux1 = packet_in.aux1;
        packet1.aux2 = packet_in.aux2;
        packet1.aux3 = packet_in.aux3;
        packet1.aux4 = packet_in.aux4;
        packet1.aux5 = packet_in.aux5;
        packet1.aux6 = packet_in.aux6;
        packet1.aux7 = packet_in.aux7;
        packet1.aux8 = packet_in.aux8;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AUX_OUTPUT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aux_output_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_aux_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aux_output_pack(system_id, component_id, &msg , packet1.time_usec , packet1.num , packet1.aux1 , packet1.aux2 , packet1.aux3 , packet1.aux4 , packet1.aux5 , packet1.aux6 , packet1.aux7 , packet1.aux8 );
    mavlink_msg_aux_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aux_output_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.num , packet1.aux1 , packet1.aux2 , packet1.aux3 , packet1.aux4 , packet1.aux5 , packet1.aux6 , packet1.aux7 , packet1.aux8 );
    mavlink_msg_aux_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_aux_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aux_output_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.num , packet1.aux1 , packet1.aux2 , packet1.aux3 , packet1.aux4 , packet1.aux5 , packet1.aux6 , packet1.aux7 , packet1.aux8 );
    mavlink_msg_aux_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AUX_OUTPUT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AUX_OUTPUT) != NULL);
#endif
}

static void mavlink_test_controller_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CONTROLLER_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_controller_state_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,19315,19419,137
    };
    mavlink_controller_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.throttle_in = packet_in.throttle_in;
        packet1.roll_in = packet_in.roll_in;
        packet1.pitch_in = packet_in.pitch_in;
        packet1.yaw_in = packet_in.yaw_in;
        packet1.throttle_out = packet_in.throttle_out;
        packet1.roll_out = packet_in.roll_out;
        packet1.pitch_out = packet_in.pitch_out;
        packet1.yaw_out = packet_in.yaw_out;
        packet1.mode = packet_in.mode;
        packet1.submode = packet_in.submode;
        packet1.active_axes = packet_in.active_axes;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CONTROLLER_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_controller_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_controller_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_controller_state_pack(system_id, component_id, &msg , packet1.time_usec , packet1.mode , packet1.submode , packet1.active_axes , packet1.throttle_in , packet1.roll_in , packet1.pitch_in , packet1.yaw_in , packet1.throttle_out , packet1.roll_out , packet1.pitch_out , packet1.yaw_out );
    mavlink_msg_controller_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_controller_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.mode , packet1.submode , packet1.active_axes , packet1.throttle_in , packet1.roll_in , packet1.pitch_in , packet1.yaw_in , packet1.throttle_out , packet1.roll_out , packet1.pitch_out , packet1.yaw_out );
    mavlink_msg_controller_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_controller_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_controller_state_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.mode , packet1.submode , packet1.active_axes , packet1.throttle_in , packet1.roll_in , packet1.pitch_in , packet1.yaw_in , packet1.throttle_out , packet1.roll_out , packet1.pitch_out , packet1.yaw_out );
    mavlink_msg_controller_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CONTROLLER_STATE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CONTROLLER_STATE) != NULL);
#endif
}

static void mavlink_test_gnss_pseudo_range_phase_shift(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gnss_pseudo_range_phase_shift_t packet_in = {
        123.0,179.0,53
    };
    mavlink_gnss_pseudo_range_phase_shift_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pseudorange = packet_in.pseudorange;
        packet1.phaseshift = packet_in.phaseshift;
        packet1.sat = packet_in.sat;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_pseudo_range_phase_shift_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gnss_pseudo_range_phase_shift_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_pseudo_range_phase_shift_pack(system_id, component_id, &msg , packet1.sat , packet1.pseudorange , packet1.phaseshift );
    mavlink_msg_gnss_pseudo_range_phase_shift_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_pseudo_range_phase_shift_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sat , packet1.pseudorange , packet1.phaseshift );
    mavlink_msg_gnss_pseudo_range_phase_shift_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gnss_pseudo_range_phase_shift_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_pseudo_range_phase_shift_send(MAVLINK_COMM_1 , packet1.sat , packet1.pseudorange , packet1.phaseshift );
    mavlink_msg_gnss_pseudo_range_phase_shift_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GNSS_PSEUDO_RANGE_PHASE_SHIFT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GNSS_PSEUDO_RANGE_PHASE_SHIFT) != NULL);
#endif
}

static void mavlink_test_gnss_epoch_time(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GNSS_EPOCH_TIME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gnss_epoch_time_t packet_in = {
        963497464
    };
    mavlink_gnss_epoch_time_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.epoch = packet_in.epoch;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GNSS_EPOCH_TIME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_epoch_time_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gnss_epoch_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_epoch_time_pack(system_id, component_id, &msg , packet1.epoch );
    mavlink_msg_gnss_epoch_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_epoch_time_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.epoch );
    mavlink_msg_gnss_epoch_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gnss_epoch_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_epoch_time_send(MAVLINK_COMM_1 , packet1.epoch );
    mavlink_msg_gnss_epoch_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GNSS_EPOCH_TIME") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GNSS_EPOCH_TIME) != NULL);
#endif
}

static void mavlink_test_gnss_standard_ephemeris(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gnss_standard_ephemeris_t packet_in = {
        123.0,179.0,235.0,291.0,347.0,403.0,459.0,515.0,571.0,627.0,683.0,739.0,795.0,851.0,907.0,963.0,1019.0,1075.0,1131.0,{ 1187.0, 1188.0, 1189.0, 1190.0 },1411.0,1467.0,963507864,963508072,963508280,28259,28363,28467,28571,153,220,31,98
    };
    mavlink_gnss_standard_ephemeris_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.A = packet_in.A;
        packet1.e = packet_in.e;
        packet1.i0 = packet_in.i0;
        packet1.OMG0 = packet_in.OMG0;
        packet1.omg = packet_in.omg;
        packet1.M0 = packet_in.M0;
        packet1.deln = packet_in.deln;
        packet1.OMGd = packet_in.OMGd;
        packet1.idot = packet_in.idot;
        packet1.crc = packet_in.crc;
        packet1.crs = packet_in.crs;
        packet1.cuc = packet_in.cuc;
        packet1.cus = packet_in.cus;
        packet1.cic = packet_in.cic;
        packet1.cis = packet_in.cis;
        packet1.fit = packet_in.fit;
        packet1.f0 = packet_in.f0;
        packet1.f1 = packet_in.f1;
        packet1.f2 = packet_in.f2;
        packet1.Adot = packet_in.Adot;
        packet1.ndot = packet_in.ndot;
        packet1.toe = packet_in.toe;
        packet1.toc = packet_in.toc;
        packet1.ttr = packet_in.ttr;
        packet1.iode = packet_in.iode;
        packet1.iodc = packet_in.iodc;
        packet1.sva = packet_in.sva;
        packet1.week = packet_in.week;
        packet1.sat = packet_in.sat;
        packet1.svh = packet_in.svh;
        packet1.code = packet_in.code;
        packet1.flag = packet_in.flag;
        
        mav_array_memcpy(packet1.tgd, packet_in.tgd, sizeof(double)*4);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_standard_ephemeris_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gnss_standard_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_standard_ephemeris_pack(system_id, component_id, &msg , packet1.sat , packet1.iode , packet1.iodc , packet1.sva , packet1.svh , packet1.week , packet1.code , packet1.flag , packet1.toe , packet1.toc , packet1.ttr , packet1.A , packet1.e , packet1.i0 , packet1.OMG0 , packet1.omg , packet1.M0 , packet1.deln , packet1.OMGd , packet1.idot , packet1.crc , packet1.crs , packet1.cuc , packet1.cus , packet1.cic , packet1.cis , packet1.fit , packet1.f0 , packet1.f1 , packet1.f2 , packet1.tgd , packet1.Adot , packet1.ndot );
    mavlink_msg_gnss_standard_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_standard_ephemeris_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sat , packet1.iode , packet1.iodc , packet1.sva , packet1.svh , packet1.week , packet1.code , packet1.flag , packet1.toe , packet1.toc , packet1.ttr , packet1.A , packet1.e , packet1.i0 , packet1.OMG0 , packet1.omg , packet1.M0 , packet1.deln , packet1.OMGd , packet1.idot , packet1.crc , packet1.crs , packet1.cuc , packet1.cus , packet1.cic , packet1.cis , packet1.fit , packet1.f0 , packet1.f1 , packet1.f2 , packet1.tgd , packet1.Adot , packet1.ndot );
    mavlink_msg_gnss_standard_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gnss_standard_ephemeris_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_standard_ephemeris_send(MAVLINK_COMM_1 , packet1.sat , packet1.iode , packet1.iodc , packet1.sva , packet1.svh , packet1.week , packet1.code , packet1.flag , packet1.toe , packet1.toc , packet1.ttr , packet1.A , packet1.e , packet1.i0 , packet1.OMG0 , packet1.omg , packet1.M0 , packet1.deln , packet1.OMGd , packet1.idot , packet1.crc , packet1.crs , packet1.cuc , packet1.cus , packet1.cic , packet1.cis , packet1.fit , packet1.f0 , packet1.f1 , packet1.f2 , packet1.tgd , packet1.Adot , packet1.ndot );
    mavlink_msg_gnss_standard_ephemeris_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GNSS_STANDARD_EPHEMERIS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GNSS_STANDARD_EPHEMERIS) != NULL);
#endif
}

static void mavlink_test_gnss_glnoass_ephemeris(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gnss_glnoass_ephemeris_t packet_in = {
        { 123.0, 124.0, 125.0 },{ 291.0, 292.0, 293.0 },{ 459.0, 460.0, 461.0 },627.0,683.0,739.0,963502456,963502664,22643,22747,22851,22955,85,152
    };
    mavlink_gnss_glnoass_ephemeris_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.taun = packet_in.taun;
        packet1.gamn = packet_in.gamn;
        packet1.dtaun = packet_in.dtaun;
        packet1.toe = packet_in.toe;
        packet1.tof = packet_in.tof;
        packet1.iode = packet_in.iode;
        packet1.frq = packet_in.frq;
        packet1.sva = packet_in.sva;
        packet1.age = packet_in.age;
        packet1.sat = packet_in.sat;
        packet1.svh = packet_in.svh;
        
        mav_array_memcpy(packet1.pos, packet_in.pos, sizeof(double)*3);
        mav_array_memcpy(packet1.vel, packet_in.vel, sizeof(double)*3);
        mav_array_memcpy(packet1.acc, packet_in.acc, sizeof(double)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_glnoass_ephemeris_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gnss_glnoass_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_glnoass_ephemeris_pack(system_id, component_id, &msg , packet1.sat , packet1.iode , packet1.frq , packet1.sva , packet1.svh , packet1.age , packet1.toe , packet1.tof , packet1.pos , packet1.vel , packet1.acc , packet1.taun , packet1.gamn , packet1.dtaun );
    mavlink_msg_gnss_glnoass_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_glnoass_ephemeris_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sat , packet1.iode , packet1.frq , packet1.sva , packet1.svh , packet1.age , packet1.toe , packet1.tof , packet1.pos , packet1.vel , packet1.acc , packet1.taun , packet1.gamn , packet1.dtaun );
    mavlink_msg_gnss_glnoass_ephemeris_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gnss_glnoass_ephemeris_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_glnoass_ephemeris_send(MAVLINK_COMM_1 , packet1.sat , packet1.iode , packet1.frq , packet1.sva , packet1.svh , packet1.age , packet1.toe , packet1.tof , packet1.pos , packet1.vel , packet1.acc , packet1.taun , packet1.gamn , packet1.dtaun );
    mavlink_msg_gnss_glnoass_ephemeris_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GNSS_GLNOASS_EPHEMERIS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GNSS_GLNOASS_EPHEMERIS) != NULL);
#endif
}

static void mavlink_test_gnss_cmd_request_all_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gnss_cmd_request_all_data_t packet_in = {
        5
    };
    mavlink_gnss_cmd_request_all_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.datatype = packet_in.datatype;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_cmd_request_all_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gnss_cmd_request_all_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_cmd_request_all_data_pack(system_id, component_id, &msg , packet1.datatype );
    mavlink_msg_gnss_cmd_request_all_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_cmd_request_all_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.datatype );
    mavlink_msg_gnss_cmd_request_all_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gnss_cmd_request_all_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_cmd_request_all_data_send(MAVLINK_COMM_1 , packet1.datatype );
    mavlink_msg_gnss_cmd_request_all_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GNSS_CMD_REQUEST_ALL_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GNSS_CMD_REQUEST_ALL_DATA) != NULL);
#endif
}

static void mavlink_test_gnss_cmd_request_data_list(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gnss_cmd_request_data_list_t packet_in = {
        5,72,{ 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82 }
    };
    mavlink_gnss_cmd_request_data_list_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.datatype = packet_in.datatype;
        packet1.n_sats = packet_in.n_sats;
        
        mav_array_memcpy(packet1.sats, packet_in.sats, sizeof(uint8_t)*200);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_cmd_request_data_list_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gnss_cmd_request_data_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_cmd_request_data_list_pack(system_id, component_id, &msg , packet1.datatype , packet1.n_sats , packet1.sats );
    mavlink_msg_gnss_cmd_request_data_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_cmd_request_data_list_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.datatype , packet1.n_sats , packet1.sats );
    mavlink_msg_gnss_cmd_request_data_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gnss_cmd_request_data_list_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_cmd_request_data_list_send(MAVLINK_COMM_1 , packet1.datatype , packet1.n_sats , packet1.sats );
    mavlink_msg_gnss_cmd_request_data_list_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GNSS_CMD_REQUEST_DATA_LIST") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GNSS_CMD_REQUEST_DATA_LIST) != NULL);
#endif
}

static void mavlink_test_wea_info_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WEA_INFO_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_wea_info_data_t packet_in = {
        963497464,963497672,17651,17755,17859,17963,53
    };
    mavlink_wea_info_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Windpark_ID = packet_in.Windpark_ID;
        packet1.WEA_ID = packet_in.WEA_ID;
        packet1.RotorRPM = packet_in.RotorRPM;
        packet1.Heading = packet_in.Heading;
        packet1.Windspeed = packet_in.Windspeed;
        packet1.Winddirection = packet_in.Winddirection;
        packet1.MotionMode = packet_in.MotionMode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WEA_INFO_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wea_info_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_wea_info_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wea_info_data_pack(system_id, component_id, &msg , packet1.Windpark_ID , packet1.WEA_ID , packet1.RotorRPM , packet1.Heading , packet1.MotionMode , packet1.Windspeed , packet1.Winddirection );
    mavlink_msg_wea_info_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wea_info_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Windpark_ID , packet1.WEA_ID , packet1.RotorRPM , packet1.Heading , packet1.MotionMode , packet1.Windspeed , packet1.Winddirection );
    mavlink_msg_wea_info_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_wea_info_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wea_info_data_send(MAVLINK_COMM_1 , packet1.Windpark_ID , packet1.WEA_ID , packet1.RotorRPM , packet1.Heading , packet1.MotionMode , packet1.Windspeed , packet1.Winddirection );
    mavlink_msg_wea_info_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("WEA_INFO_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_WEA_INFO_DATA) != NULL);
#endif
}

static void mavlink_test_mqtt_command_subscribe(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mqtt_command_subscribe_t packet_in = {
        "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVW"
    };
    mavlink_mqtt_command_subscribe_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.topic, packet_in.topic, sizeof(char)*50);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mqtt_command_subscribe_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mqtt_command_subscribe_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mqtt_command_subscribe_pack(system_id, component_id, &msg , packet1.topic );
    mavlink_msg_mqtt_command_subscribe_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mqtt_command_subscribe_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.topic );
    mavlink_msg_mqtt_command_subscribe_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mqtt_command_subscribe_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mqtt_command_subscribe_send(MAVLINK_COMM_1 , packet1.topic );
    mavlink_msg_mqtt_command_subscribe_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MQTT_COMMAND_SUBSCRIBE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MQTT_COMMAND_SUBSCRIBE) != NULL);
#endif
}

static void mavlink_test_mqtt_command_unsubscribe(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mqtt_command_unsubscribe_t packet_in = {
        "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVW"
    };
    mavlink_mqtt_command_unsubscribe_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.topic, packet_in.topic, sizeof(char)*50);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mqtt_command_unsubscribe_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mqtt_command_unsubscribe_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mqtt_command_unsubscribe_pack(system_id, component_id, &msg , packet1.topic );
    mavlink_msg_mqtt_command_unsubscribe_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mqtt_command_unsubscribe_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.topic );
    mavlink_msg_mqtt_command_unsubscribe_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mqtt_command_unsubscribe_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mqtt_command_unsubscribe_send(MAVLINK_COMM_1 , packet1.topic );
    mavlink_msg_mqtt_command_unsubscribe_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MQTT_COMMAND_UNSUBSCRIBE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MQTT_COMMAND_UNSUBSCRIBE) != NULL);
#endif
}

static void mavlink_test_gnss_relative_navigation(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gnss_relative_navigation_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,20147,51,118,185,252,63,130,197,8,75,142
    };
    mavlink_gnss_relative_navigation_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.time_utc_usec = packet_in.time_utc_usec;
        packet1.RelN = packet_in.RelN;
        packet1.RelE = packet_in.RelE;
        packet1.RelD = packet_in.RelD;
        packet1.RelN_Acc = packet_in.RelN_Acc;
        packet1.RelE_Acc = packet_in.RelE_Acc;
        packet1.RelD_Acc = packet_in.RelD_Acc;
        packet1.Heading = packet_in.Heading;
        packet1.Heading_Acc = packet_in.Heading_Acc;
        packet1.Position_Length = packet_in.Position_Length;
        packet1.Accuracy_Length = packet_in.Accuracy_Length;
        packet1.Reference_Station_ID = packet_in.Reference_Station_ID;
        packet1.GNSS_Fix_Ok = packet_in.GNSS_Fix_Ok;
        packet1.Differential_Solution = packet_in.Differential_Solution;
        packet1.Relative_Position_Valid = packet_in.Relative_Position_Valid;
        packet1.Carrier_Solution_Floating = packet_in.Carrier_Solution_Floating;
        packet1.Carrier_Solution_Fixed = packet_in.Carrier_Solution_Fixed;
        packet1.Moving_Base_Mode = packet_in.Moving_Base_Mode;
        packet1.Reference_Position_Miss = packet_in.Reference_Position_Miss;
        packet1.Reference_Observations_Miss = packet_in.Reference_Observations_Miss;
        packet1.Heading_Valid = packet_in.Heading_Valid;
        packet1.Relative_Position_Normalized = packet_in.Relative_Position_Normalized;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_relative_navigation_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gnss_relative_navigation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_relative_navigation_pack(system_id, component_id, &msg , packet1.time_usec , packet1.time_utc_usec , packet1.Reference_Station_ID , packet1.RelN , packet1.RelE , packet1.RelD , packet1.RelN_Acc , packet1.RelE_Acc , packet1.RelD_Acc , packet1.Heading , packet1.Heading_Acc , packet1.Position_Length , packet1.Accuracy_Length , packet1.GNSS_Fix_Ok , packet1.Differential_Solution , packet1.Relative_Position_Valid , packet1.Carrier_Solution_Floating , packet1.Carrier_Solution_Fixed , packet1.Moving_Base_Mode , packet1.Reference_Position_Miss , packet1.Reference_Observations_Miss , packet1.Heading_Valid , packet1.Relative_Position_Normalized );
    mavlink_msg_gnss_relative_navigation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_relative_navigation_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.time_utc_usec , packet1.Reference_Station_ID , packet1.RelN , packet1.RelE , packet1.RelD , packet1.RelN_Acc , packet1.RelE_Acc , packet1.RelD_Acc , packet1.Heading , packet1.Heading_Acc , packet1.Position_Length , packet1.Accuracy_Length , packet1.GNSS_Fix_Ok , packet1.Differential_Solution , packet1.Relative_Position_Valid , packet1.Carrier_Solution_Floating , packet1.Carrier_Solution_Fixed , packet1.Moving_Base_Mode , packet1.Reference_Position_Miss , packet1.Reference_Observations_Miss , packet1.Heading_Valid , packet1.Relative_Position_Normalized );
    mavlink_msg_gnss_relative_navigation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gnss_relative_navigation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gnss_relative_navigation_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.time_utc_usec , packet1.Reference_Station_ID , packet1.RelN , packet1.RelE , packet1.RelD , packet1.RelN_Acc , packet1.RelE_Acc , packet1.RelD_Acc , packet1.Heading , packet1.Heading_Acc , packet1.Position_Length , packet1.Accuracy_Length , packet1.GNSS_Fix_Ok , packet1.Differential_Solution , packet1.Relative_Position_Valid , packet1.Carrier_Solution_Floating , packet1.Carrier_Solution_Fixed , packet1.Moving_Base_Mode , packet1.Reference_Position_Miss , packet1.Reference_Observations_Miss , packet1.Heading_Valid , packet1.Relative_Position_Normalized );
    mavlink_msg_gnss_relative_navigation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GNSS_RELATIVE_NAVIGATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GNSS_RELATIVE_NAVIGATION) != NULL);
#endif
}

static void mavlink_test_nose_boom(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_NOSE_BOOM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_nose_boom_t packet_in = {
        93372036854775807ULL,963497880,963498088,963498296,963498504,963498712,963498920
    };
    mavlink_nose_boom_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.va = packet_in.va;
        packet1.alpha = packet_in.alpha;
        packet1.beta = packet_in.beta;
        packet1.va_raw = packet_in.va_raw;
        packet1.alpha_raw = packet_in.alpha_raw;
        packet1.beta_raw = packet_in.beta_raw;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_NOSE_BOOM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_nose_boom_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_nose_boom_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_nose_boom_pack(system_id, component_id, &msg , packet1.time_usec , packet1.va , packet1.alpha , packet1.beta , packet1.va_raw , packet1.alpha_raw , packet1.beta_raw );
    mavlink_msg_nose_boom_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_nose_boom_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.va , packet1.alpha , packet1.beta , packet1.va_raw , packet1.alpha_raw , packet1.beta_raw );
    mavlink_msg_nose_boom_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_nose_boom_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_nose_boom_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.va , packet1.alpha , packet1.beta , packet1.va_raw , packet1.alpha_raw , packet1.beta_raw );
    mavlink_msg_nose_boom_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("NOSE_BOOM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_NOSE_BOOM) != NULL);
#endif
}

static void mavlink_test_faust_setpoints(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FAUST_SETPOINTS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_faust_setpoints_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0
    };
    mavlink_faust_setpoints_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.delta_y = packet_in.delta_y;
        packet1.delta_y_dot = packet_in.delta_y_dot;
        packet1.v_sp = packet_in.v_sp;
        packet1.h_sp = packet_in.h_sp;
        packet1.phi_sp = packet_in.phi_sp;
        packet1.theta_sp = packet_in.theta_sp;
        packet1.psi_sp = packet_in.psi_sp;
        packet1.roc_sp = packet_in.roc_sp;
        packet1.p_sp = packet_in.p_sp;
        packet1.q_sp = packet_in.q_sp;
        packet1.r_sp = packet_in.r_sp;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FAUST_SETPOINTS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_faust_setpoints_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_faust_setpoints_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_faust_setpoints_pack(system_id, component_id, &msg , packet1.time_usec , packet1.delta_y , packet1.delta_y_dot , packet1.v_sp , packet1.h_sp , packet1.phi_sp , packet1.theta_sp , packet1.psi_sp , packet1.roc_sp , packet1.p_sp , packet1.q_sp , packet1.r_sp );
    mavlink_msg_faust_setpoints_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_faust_setpoints_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.delta_y , packet1.delta_y_dot , packet1.v_sp , packet1.h_sp , packet1.phi_sp , packet1.theta_sp , packet1.psi_sp , packet1.roc_sp , packet1.p_sp , packet1.q_sp , packet1.r_sp );
    mavlink_msg_faust_setpoints_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_faust_setpoints_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_faust_setpoints_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.delta_y , packet1.delta_y_dot , packet1.v_sp , packet1.h_sp , packet1.phi_sp , packet1.theta_sp , packet1.psi_sp , packet1.roc_sp , packet1.p_sp , packet1.q_sp , packet1.r_sp );
    mavlink_msg_faust_setpoints_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FAUST_SETPOINTS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FAUST_SETPOINTS) != NULL);
#endif
}

static void mavlink_test_inner_loop_setpoint(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_INNER_LOOP_SETPOINT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_inner_loop_setpoint_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0
    };
    mavlink_inner_loop_setpoint_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.phi_sp = packet_in.phi_sp;
        packet1.theta_sp = packet_in.theta_sp;
        packet1.psi_sp = packet_in.psi_sp;
        packet1.p_sp = packet_in.p_sp;
        packet1.q_sp = packet_in.q_sp;
        packet1.r_sp = packet_in.r_sp;
        packet1.roc_sp = packet_in.roc_sp;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_INNER_LOOP_SETPOINT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_inner_loop_setpoint_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_inner_loop_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_inner_loop_setpoint_pack(system_id, component_id, &msg , packet1.time_usec , packet1.phi_sp , packet1.theta_sp , packet1.psi_sp , packet1.p_sp , packet1.q_sp , packet1.r_sp , packet1.roc_sp );
    mavlink_msg_inner_loop_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_inner_loop_setpoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.phi_sp , packet1.theta_sp , packet1.psi_sp , packet1.p_sp , packet1.q_sp , packet1.r_sp , packet1.roc_sp );
    mavlink_msg_inner_loop_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_inner_loop_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_inner_loop_setpoint_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.phi_sp , packet1.theta_sp , packet1.psi_sp , packet1.p_sp , packet1.q_sp , packet1.r_sp , packet1.roc_sp );
    mavlink_msg_inner_loop_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("INNER_LOOP_SETPOINT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_INNER_LOOP_SETPOINT) != NULL);
#endif
}

static void mavlink_test_outer_loop_setpoint(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_outer_loop_setpoint_t packet_in = {
        93372036854775807ULL,963497880,963498088,963498296,18275,18379,18483,18587,18691,18795,18899,19003,19107
    };
    mavlink_outer_loop_setpoint_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.px = packet_in.px;
        packet1.py = packet_in.py;
        packet1.pz = packet_in.pz;
        packet1.mode = packet_in.mode;
        packet1.vx = packet_in.vx;
        packet1.vy = packet_in.vy;
        packet1.vz = packet_in.vz;
        packet1.ax = packet_in.ax;
        packet1.ay = packet_in.ay;
        packet1.az = packet_in.az;
        packet1.psi = packet_in.psi;
        packet1.dpsi = packet_in.dpsi;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_outer_loop_setpoint_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_outer_loop_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_outer_loop_setpoint_pack(system_id, component_id, &msg , packet1.time_usec , packet1.mode , packet1.px , packet1.py , packet1.pz , packet1.vx , packet1.vy , packet1.vz , packet1.ax , packet1.ay , packet1.az , packet1.psi , packet1.dpsi );
    mavlink_msg_outer_loop_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_outer_loop_setpoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.mode , packet1.px , packet1.py , packet1.pz , packet1.vx , packet1.vy , packet1.vz , packet1.ax , packet1.ay , packet1.az , packet1.psi , packet1.dpsi );
    mavlink_msg_outer_loop_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_outer_loop_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_outer_loop_setpoint_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.mode , packet1.px , packet1.py , packet1.pz , packet1.vx , packet1.vy , packet1.vz , packet1.ax , packet1.ay , packet1.az , packet1.psi , packet1.dpsi );
    mavlink_msg_outer_loop_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OUTER_LOOP_SETPOINT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OUTER_LOOP_SETPOINT) != NULL);
#endif
}

static void mavlink_test_faust_ctrl_mode_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_faust_ctrl_mode_status_t packet_in = {
        93372036854775807ULL,29,96,163
    };
    mavlink_faust_ctrl_mode_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.fcs_enabled = packet_in.fcs_enabled;
        packet1.fcs_mode = packet_in.fcs_mode;
        packet1.sysid_status = packet_in.sysid_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_faust_ctrl_mode_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_faust_ctrl_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_faust_ctrl_mode_status_pack(system_id, component_id, &msg , packet1.time_usec , packet1.fcs_enabled , packet1.fcs_mode , packet1.sysid_status );
    mavlink_msg_faust_ctrl_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_faust_ctrl_mode_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.fcs_enabled , packet1.fcs_mode , packet1.sysid_status );
    mavlink_msg_faust_ctrl_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_faust_ctrl_mode_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_faust_ctrl_mode_status_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.fcs_enabled , packet1.fcs_mode , packet1.sysid_status );
    mavlink_msg_faust_ctrl_mode_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FAUST_CTRL_MODE_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FAUST_CTRL_MODE_STATUS) != NULL);
#endif
}

static void mavlink_test_task_sequence(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TASK_SEQUENCE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_task_sequence_t packet_in = {
        93372036854775807ULL,29,96,163,{ 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249 }
    };
    mavlink_task_sequence_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.current_task = packet_in.current_task;
        packet1.mode = packet_in.mode;
        packet1.n_elements = packet_in.n_elements;
        
        mav_array_memcpy(packet1.sequence, packet_in.sequence, sizeof(uint8_t)*20);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TASK_SEQUENCE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_sequence_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_task_sequence_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_sequence_pack(system_id, component_id, &msg , packet1.time_usec , packet1.current_task , packet1.mode , packet1.n_elements , packet1.sequence );
    mavlink_msg_task_sequence_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_sequence_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.current_task , packet1.mode , packet1.n_elements , packet1.sequence );
    mavlink_msg_task_sequence_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_task_sequence_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_sequence_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.current_task , packet1.mode , packet1.n_elements , packet1.sequence );
    mavlink_msg_task_sequence_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("TASK_SEQUENCE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_TASK_SEQUENCE) != NULL);
#endif
}

static void mavlink_test_owf_mission_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OWF_MISSION_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_owf_mission_status_t packet_in = {
        93372036854775807ULL,963497880,963498088,18067,18171,65,132
    };
    mavlink_owf_mission_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.target_Windpark_ID = packet_in.target_Windpark_ID;
        packet1.target_WEA_ID = packet_in.target_WEA_ID;
        packet1.n_wea_request = packet_in.n_wea_request;
        packet1.n_wea_data_available = packet_in.n_wea_data_available;
        packet1.wea_hoist_ready = packet_in.wea_hoist_ready;
        packet1.wea_approach_clear = packet_in.wea_approach_clear;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OWF_MISSION_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_owf_mission_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_owf_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_owf_mission_status_pack(system_id, component_id, &msg , packet1.time_usec , packet1.target_Windpark_ID , packet1.target_WEA_ID , packet1.wea_hoist_ready , packet1.wea_approach_clear , packet1.n_wea_request , packet1.n_wea_data_available );
    mavlink_msg_owf_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_owf_mission_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.target_Windpark_ID , packet1.target_WEA_ID , packet1.wea_hoist_ready , packet1.wea_approach_clear , packet1.n_wea_request , packet1.n_wea_data_available );
    mavlink_msg_owf_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_owf_mission_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_owf_mission_status_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.target_Windpark_ID , packet1.target_WEA_ID , packet1.wea_hoist_ready , packet1.wea_approach_clear , packet1.n_wea_request , packet1.n_wea_data_available );
    mavlink_msg_owf_mission_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OWF_MISSION_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OWF_MISSION_STATUS) != NULL);
#endif
}

static void mavlink_test_gps_gga_ntrip_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GPS_GGA_NTRIP_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gps_gga_ntrip_data_t packet_in = {
        5,72,{ 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62 }
    };
    mavlink_gps_gga_ntrip_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.flags = packet_in.flags;
        packet1.len = packet_in.len;
        
        mav_array_memcpy(packet1.data, packet_in.data, sizeof(uint8_t)*180);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GPS_GGA_NTRIP_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GPS_GGA_NTRIP_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_gga_ntrip_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gps_gga_ntrip_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_gga_ntrip_data_pack(system_id, component_id, &msg , packet1.flags , packet1.len , packet1.data );
    mavlink_msg_gps_gga_ntrip_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_gga_ntrip_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.flags , packet1.len , packet1.data );
    mavlink_msg_gps_gga_ntrip_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gps_gga_ntrip_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_gga_ntrip_data_send(MAVLINK_COMM_1 , packet1.flags , packet1.len , packet1.data );
    mavlink_msg_gps_gga_ntrip_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GPS_GGA_NTRIP_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GPS_GGA_NTRIP_DATA) != NULL);
#endif
}

static void mavlink_test_landing_geometry(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LANDING_GEOMETRY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_landing_geometry_t packet_in = {
        17.0,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587
    };
    mavlink_landing_geometry_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.heading_offset = packet_in.heading_offset;
        packet1.fore = packet_in.fore;
        packet1.aft = packet_in.aft;
        packet1.port = packet_in.port;
        packet1.starboard = packet_in.starboard;
        packet1.top = packet_in.top;
        packet1.bottom = packet_in.bottom;
        packet1.dvalue = packet_in.dvalue;
        packet1.length = packet_in.length;
        packet1.width = packet_in.width;
        packet1.pos_ref_x = packet_in.pos_ref_x;
        packet1.pos_ref_y = packet_in.pos_ref_y;
        packet1.pos_ref_z = packet_in.pos_ref_z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LANDING_GEOMETRY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_landing_geometry_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_landing_geometry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_landing_geometry_pack(system_id, component_id, &msg , packet1.fore , packet1.aft , packet1.port , packet1.starboard , packet1.top , packet1.bottom , packet1.dvalue , packet1.length , packet1.width , packet1.pos_ref_x , packet1.pos_ref_y , packet1.pos_ref_z , packet1.heading_offset );
    mavlink_msg_landing_geometry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_landing_geometry_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.fore , packet1.aft , packet1.port , packet1.starboard , packet1.top , packet1.bottom , packet1.dvalue , packet1.length , packet1.width , packet1.pos_ref_x , packet1.pos_ref_y , packet1.pos_ref_z , packet1.heading_offset );
    mavlink_msg_landing_geometry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_landing_geometry_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_landing_geometry_send(MAVLINK_COMM_1 , packet1.fore , packet1.aft , packet1.port , packet1.starboard , packet1.top , packet1.bottom , packet1.dvalue , packet1.length , packet1.width , packet1.pos_ref_x , packet1.pos_ref_y , packet1.pos_ref_z , packet1.heading_offset );
    mavlink_msg_landing_geometry_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LANDING_GEOMETRY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LANDING_GEOMETRY) != NULL);
#endif
}

static void mavlink_test_relative_navigation(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RELATIVE_NAVIGATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_relative_navigation_t packet_in = {
        93372036854775807ULL,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795,18899,19003,19107,19211,125
    };
    mavlink_relative_navigation_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.rel_pos_n = packet_in.rel_pos_n;
        packet1.rel_pos_e = packet_in.rel_pos_e;
        packet1.rel_pos_d = packet_in.rel_pos_d;
        packet1.rel_vel_n = packet_in.rel_vel_n;
        packet1.rel_vel_e = packet_in.rel_vel_e;
        packet1.rel_vel_d = packet_in.rel_vel_d;
        packet1.rel_acc_n = packet_in.rel_acc_n;
        packet1.rel_acc_e = packet_in.rel_acc_e;
        packet1.rel_acc_d = packet_in.rel_acc_d;
        packet1.rel_pos_n_var = packet_in.rel_pos_n_var;
        packet1.rel_pos_e_var = packet_in.rel_pos_e_var;
        packet1.rel_pos_d_var = packet_in.rel_pos_d_var;
        packet1.parallel = packet_in.parallel;
        packet1.roll = packet_in.roll;
        packet1.pitch = packet_in.pitch;
        packet1.delta_hdg = packet_in.delta_hdg;
        packet1.valid = packet_in.valid;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RELATIVE_NAVIGATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_relative_navigation_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_relative_navigation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_relative_navigation_pack(system_id, component_id, &msg , packet1.time_usec , packet1.rel_pos_n , packet1.rel_pos_e , packet1.rel_pos_d , packet1.rel_vel_n , packet1.rel_vel_e , packet1.rel_vel_d , packet1.rel_acc_n , packet1.rel_acc_e , packet1.rel_acc_d , packet1.rel_pos_n_var , packet1.rel_pos_e_var , packet1.rel_pos_d_var , packet1.parallel , packet1.roll , packet1.pitch , packet1.delta_hdg , packet1.valid );
    mavlink_msg_relative_navigation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_relative_navigation_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.rel_pos_n , packet1.rel_pos_e , packet1.rel_pos_d , packet1.rel_vel_n , packet1.rel_vel_e , packet1.rel_vel_d , packet1.rel_acc_n , packet1.rel_acc_e , packet1.rel_acc_d , packet1.rel_pos_n_var , packet1.rel_pos_e_var , packet1.rel_pos_d_var , packet1.parallel , packet1.roll , packet1.pitch , packet1.delta_hdg , packet1.valid );
    mavlink_msg_relative_navigation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_relative_navigation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_relative_navigation_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.rel_pos_n , packet1.rel_pos_e , packet1.rel_pos_d , packet1.rel_vel_n , packet1.rel_vel_e , packet1.rel_vel_d , packet1.rel_acc_n , packet1.rel_acc_e , packet1.rel_acc_d , packet1.rel_pos_n_var , packet1.rel_pos_e_var , packet1.rel_pos_d_var , packet1.parallel , packet1.roll , packet1.pitch , packet1.delta_hdg , packet1.valid );
    mavlink_msg_relative_navigation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RELATIVE_NAVIGATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RELATIVE_NAVIGATION) != NULL);
#endif
}

static void mavlink_test_log_status_check(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LOG_STATUS_CHECK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_log_status_check_t packet_in = {
        93372036854775807ULL,73.0,41,108
    };
    mavlink_log_status_check_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.written_kb = packet_in.written_kb;
        packet1.islogging = packet_in.islogging;
        packet1.type = packet_in.type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LOG_STATUS_CHECK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_log_status_check_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_log_status_check_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_log_status_check_pack(system_id, component_id, &msg , packet1.time_usec , packet1.islogging , packet1.type , packet1.written_kb );
    mavlink_msg_log_status_check_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_log_status_check_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.islogging , packet1.type , packet1.written_kb );
    mavlink_msg_log_status_check_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_log_status_check_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_log_status_check_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.islogging , packet1.type , packet1.written_kb );
    mavlink_msg_log_status_check_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LOG_STATUS_CHECK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LOG_STATUS_CHECK) != NULL);
#endif
}

static void mavlink_test_weather_station_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WEATHER_STATION_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_weather_station_data_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,963498296,963498504,963498712,18691,18795,18899,19003,19107,19211,19315,19419,19523,19627,19731,27,94
    };
    mavlink_weather_station_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.gnss_time_usec = packet_in.gnss_time_usec;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.windspeed = packet_in.windspeed;
        packet1.winddirection = packet_in.winddirection;
        packet1.wind_vertical_speed = packet_in.wind_vertical_speed;
        packet1.windspeed_mean = packet_in.windspeed_mean;
        packet1.winddirection_mean = packet_in.winddirection_mean;
        packet1.wind_vertical_speed_mean = packet_in.wind_vertical_speed_mean;
        packet1.gusts_speed = packet_in.gusts_speed;
        packet1.temperature = packet_in.temperature;
        packet1.pressure = packet_in.pressure;
        packet1.density = packet_in.density;
        packet1.speed_of_sound = packet_in.speed_of_sound;
        packet1.has10min = packet_in.has10min;
        packet1.rel_hum = packet_in.rel_hum;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_weather_station_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_weather_station_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_weather_station_data_pack(system_id, component_id, &msg , packet1.time_usec , packet1.windspeed , packet1.winddirection , packet1.wind_vertical_speed , packet1.windspeed_mean , packet1.winddirection_mean , packet1.wind_vertical_speed_mean , packet1.gusts_speed , packet1.has10min , packet1.gnss_time_usec , packet1.temperature , packet1.pressure , packet1.density , packet1.rel_hum , packet1.speed_of_sound , packet1.lat , packet1.lon , packet1.alt );
    mavlink_msg_weather_station_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_weather_station_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.windspeed , packet1.winddirection , packet1.wind_vertical_speed , packet1.windspeed_mean , packet1.winddirection_mean , packet1.wind_vertical_speed_mean , packet1.gusts_speed , packet1.has10min , packet1.gnss_time_usec , packet1.temperature , packet1.pressure , packet1.density , packet1.rel_hum , packet1.speed_of_sound , packet1.lat , packet1.lon , packet1.alt );
    mavlink_msg_weather_station_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_weather_station_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_weather_station_data_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.windspeed , packet1.winddirection , packet1.wind_vertical_speed , packet1.windspeed_mean , packet1.winddirection_mean , packet1.wind_vertical_speed_mean , packet1.gusts_speed , packet1.has10min , packet1.gnss_time_usec , packet1.temperature , packet1.pressure , packet1.density , packet1.rel_hum , packet1.speed_of_sound , packet1.lat , packet1.lon , packet1.alt );
    mavlink_msg_weather_station_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("WEATHER_STATION_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_WEATHER_STATION_DATA) != NULL);
#endif
}

static void mavlink_test_hil_distance_sensor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hil_distance_sensor_t packet_in = {
        93372036854775807ULL,{ 73.0, 74.0, 75.0, 76.0 },18483,18587,18691,18795,101,168
    };
    mavlink_hil_distance_sensor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.min_distance = packet_in.min_distance;
        packet1.max_distance = packet_in.max_distance;
        packet1.current_distance = packet_in.current_distance;
        packet1.signal_quality = packet_in.signal_quality;
        packet1.orientation = packet_in.orientation;
        packet1.covariance = packet_in.covariance;
        
        mav_array_memcpy(packet1.quaternion, packet_in.quaternion, sizeof(float)*4);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_distance_sensor_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hil_distance_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_distance_sensor_pack(system_id, component_id, &msg , packet1.time_usec , packet1.min_distance , packet1.max_distance , packet1.current_distance , packet1.orientation , packet1.covariance , packet1.quaternion , packet1.signal_quality );
    mavlink_msg_hil_distance_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_distance_sensor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.min_distance , packet1.max_distance , packet1.current_distance , packet1.orientation , packet1.covariance , packet1.quaternion , packet1.signal_quality );
    mavlink_msg_hil_distance_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hil_distance_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_distance_sensor_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.min_distance , packet1.max_distance , packet1.current_distance , packet1.orientation , packet1.covariance , packet1.quaternion , packet1.signal_quality );
    mavlink_msg_hil_distance_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HIL_DISTANCE_SENSOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HIL_DISTANCE_SENSOR) != NULL);
#endif
}

static void mavlink_test_wepilot_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WEPILOT_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_wepilot_status_t packet_in = {
        93372036854775807ULL,29,96,163,230,41
    };
    mavlink_wepilot_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.num_sats = packet_in.num_sats;
        packet1.ctrl_mode = packet_in.ctrl_mode;
        packet1.flight_mode = packet_in.flight_mode;
        packet1.flight_phase = packet_in.flight_phase;
        packet1.flight_subphase = packet_in.flight_subphase;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WEPILOT_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wepilot_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_wepilot_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wepilot_status_pack(system_id, component_id, &msg , packet1.time_usec , packet1.num_sats , packet1.ctrl_mode , packet1.flight_mode , packet1.flight_phase , packet1.flight_subphase );
    mavlink_msg_wepilot_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wepilot_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.num_sats , packet1.ctrl_mode , packet1.flight_mode , packet1.flight_phase , packet1.flight_subphase );
    mavlink_msg_wepilot_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_wepilot_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wepilot_status_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.num_sats , packet1.ctrl_mode , packet1.flight_mode , packet1.flight_phase , packet1.flight_subphase );
    mavlink_msg_wepilot_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("WEPILOT_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_WEPILOT_STATUS) != NULL);
#endif
}

static void mavlink_test_wepilot_vehiclestate(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_wepilot_vehiclestate_t packet_in = {
        93372036854775807ULL,963497880,963498088,963498296,157.0,185.0,213.0,241.0,269.0,297.0,19523,19627,19731,19835,19939,20043,173
    };
    mavlink_wepilot_vehiclestate_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.roll = packet_in.roll;
        packet1.pitch = packet_in.pitch;
        packet1.heading = packet_in.heading;
        packet1.rollspeed = packet_in.rollspeed;
        packet1.pitchspeed = packet_in.pitchspeed;
        packet1.yawspeed = packet_in.yawspeed;
        packet1.pos_n = packet_in.pos_n;
        packet1.pos_e = packet_in.pos_e;
        packet1.pos_d = packet_in.pos_d;
        packet1.vel_n = packet_in.vel_n;
        packet1.vel_e = packet_in.vel_e;
        packet1.vel_d = packet_in.vel_d;
        packet1.valid = packet_in.valid;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wepilot_vehiclestate_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_wepilot_vehiclestate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wepilot_vehiclestate_pack(system_id, component_id, &msg , packet1.time_usec , packet1.lat , packet1.lon , packet1.alt , packet1.pos_n , packet1.pos_e , packet1.pos_d , packet1.vel_n , packet1.vel_e , packet1.vel_d , packet1.roll , packet1.pitch , packet1.heading , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.valid );
    mavlink_msg_wepilot_vehiclestate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wepilot_vehiclestate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.lat , packet1.lon , packet1.alt , packet1.pos_n , packet1.pos_e , packet1.pos_d , packet1.vel_n , packet1.vel_e , packet1.vel_d , packet1.roll , packet1.pitch , packet1.heading , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.valid );
    mavlink_msg_wepilot_vehiclestate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_wepilot_vehiclestate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wepilot_vehiclestate_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.lat , packet1.lon , packet1.alt , packet1.pos_n , packet1.pos_e , packet1.pos_d , packet1.vel_n , packet1.vel_e , packet1.vel_d , packet1.roll , packet1.pitch , packet1.heading , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.valid );
    mavlink_msg_wepilot_vehiclestate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("WEPILOT_VEHICLESTATE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_WEPILOT_VEHICLESTATE) != NULL);
#endif
}

static void mavlink_test_hil_vehicle(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HIL_VEHICLE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hil_vehicle_t packet_in = {
        93372036854775807ULL,963497880,963498088,963498296,963498504,963498712,963498920,241.0,269.0,297.0,325.0,353.0,381.0,20147,20251,20355,20459,20563,20667,20771,20875,20979,99
    };
    mavlink_hil_vehicle_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.pos_n = packet_in.pos_n;
        packet1.pos_e = packet_in.pos_e;
        packet1.pos_d = packet_in.pos_d;
        packet1.roll = packet_in.roll;
        packet1.pitch = packet_in.pitch;
        packet1.heading = packet_in.heading;
        packet1.rollspeed = packet_in.rollspeed;
        packet1.pitchspeed = packet_in.pitchspeed;
        packet1.yawspeed = packet_in.yawspeed;
        packet1.vel_n = packet_in.vel_n;
        packet1.vel_e = packet_in.vel_e;
        packet1.vel_d = packet_in.vel_d;
        packet1.vel_xb = packet_in.vel_xb;
        packet1.vel_yb = packet_in.vel_yb;
        packet1.vel_zb = packet_in.vel_zb;
        packet1.xacc = packet_in.xacc;
        packet1.yacc = packet_in.yacc;
        packet1.zacc = packet_in.zacc;
        packet1.valid = packet_in.valid;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HIL_VEHICLE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_vehicle_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hil_vehicle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_vehicle_pack(system_id, component_id, &msg , packet1.time_usec , packet1.lat , packet1.lon , packet1.alt , packet1.pos_n , packet1.pos_e , packet1.pos_d , packet1.vel_n , packet1.vel_e , packet1.vel_d , packet1.vel_xb , packet1.vel_yb , packet1.vel_zb , packet1.xacc , packet1.yacc , packet1.zacc , packet1.roll , packet1.pitch , packet1.heading , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.valid );
    mavlink_msg_hil_vehicle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_vehicle_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.lat , packet1.lon , packet1.alt , packet1.pos_n , packet1.pos_e , packet1.pos_d , packet1.vel_n , packet1.vel_e , packet1.vel_d , packet1.vel_xb , packet1.vel_yb , packet1.vel_zb , packet1.xacc , packet1.yacc , packet1.zacc , packet1.roll , packet1.pitch , packet1.heading , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.valid );
    mavlink_msg_hil_vehicle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hil_vehicle_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_vehicle_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.lat , packet1.lon , packet1.alt , packet1.pos_n , packet1.pos_e , packet1.pos_d , packet1.vel_n , packet1.vel_e , packet1.vel_d , packet1.vel_xb , packet1.vel_yb , packet1.vel_zb , packet1.xacc , packet1.yacc , packet1.zacc , packet1.roll , packet1.pitch , packet1.heading , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.valid );
    mavlink_msg_hil_vehicle_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HIL_VEHICLE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HIL_VEHICLE) != NULL);
#endif
}

static void mavlink_test_engine_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ENGINE_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_engine_status_t packet_in = {
        93372036854775807ULL,17651,17755,17859,17963,18067,18171,18275,18379,77,144,211
    };
    mavlink_engine_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.rpm = packet_in.rpm;
        packet1.voltage = packet_in.voltage;
        packet1.fuelflow = packet_in.fuelflow;
        packet1.fuelconsumed = packet_in.fuelconsumed;
        packet1.temperature = packet_in.temperature;
        packet1.gas = packet_in.gas;
        packet1.pwm = packet_in.pwm;
        packet1.control_voltage = packet_in.control_voltage;
        packet1.id = packet_in.id;
        packet1.power_id = packet_in.power_id;
        packet1.type = packet_in.type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ENGINE_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_engine_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_engine_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_engine_status_pack(system_id, component_id, &msg , packet1.time_usec , packet1.id , packet1.power_id , packet1.type , packet1.rpm , packet1.voltage , packet1.fuelflow , packet1.fuelconsumed , packet1.temperature , packet1.gas , packet1.pwm , packet1.control_voltage );
    mavlink_msg_engine_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_engine_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.id , packet1.power_id , packet1.type , packet1.rpm , packet1.voltage , packet1.fuelflow , packet1.fuelconsumed , packet1.temperature , packet1.gas , packet1.pwm , packet1.control_voltage );
    mavlink_msg_engine_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_engine_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_engine_status_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.id , packet1.power_id , packet1.type , packet1.rpm , packet1.voltage , packet1.fuelflow , packet1.fuelconsumed , packet1.temperature , packet1.gas , packet1.pwm , packet1.control_voltage );
    mavlink_msg_engine_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ENGINE_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ENGINE_STATUS) != NULL);
#endif
}

static void mavlink_test_controller_reference(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CONTROLLER_REFERENCE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_controller_reference_t packet_in = {
        93372036854775807ULL,963497880,963498088,963498296,157.0,185.0,213.0,18899,19003,19107,19211,19315,19419,19523,19627,19731,19835,19939,20043
    };
    mavlink_controller_reference_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.px = packet_in.px;
        packet1.py = packet_in.py;
        packet1.pz = packet_in.pz;
        packet1.theta = packet_in.theta;
        packet1.phi = packet_in.phi;
        packet1.r = packet_in.r;
        packet1.vx = packet_in.vx;
        packet1.vy = packet_in.vy;
        packet1.vz = packet_in.vz;
        packet1.ax = packet_in.ax;
        packet1.ay = packet_in.ay;
        packet1.az = packet_in.az;
        packet1.psi = packet_in.psi;
        packet1.dpsi = packet_in.dpsi;
        packet1.w = packet_in.w;
        packet1.d_x = packet_in.d_x;
        packet1.d_y = packet_in.d_y;
        packet1.d_z = packet_in.d_z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CONTROLLER_REFERENCE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_controller_reference_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_controller_reference_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_controller_reference_pack(system_id, component_id, &msg , packet1.time_usec , packet1.px , packet1.py , packet1.pz , packet1.vx , packet1.vy , packet1.vz , packet1.ax , packet1.ay , packet1.az , packet1.psi , packet1.dpsi , packet1.theta , packet1.phi , packet1.r , packet1.w , packet1.d_x , packet1.d_y , packet1.d_z );
    mavlink_msg_controller_reference_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_controller_reference_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.px , packet1.py , packet1.pz , packet1.vx , packet1.vy , packet1.vz , packet1.ax , packet1.ay , packet1.az , packet1.psi , packet1.dpsi , packet1.theta , packet1.phi , packet1.r , packet1.w , packet1.d_x , packet1.d_y , packet1.d_z );
    mavlink_msg_controller_reference_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_controller_reference_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_controller_reference_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.px , packet1.py , packet1.pz , packet1.vx , packet1.vy , packet1.vz , packet1.ax , packet1.ay , packet1.az , packet1.psi , packet1.dpsi , packet1.theta , packet1.phi , packet1.r , packet1.w , packet1.d_x , packet1.d_y , packet1.d_z );
    mavlink_msg_controller_reference_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CONTROLLER_REFERENCE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CONTROLLER_REFERENCE) != NULL);
#endif
}

static void mavlink_test_hil_sbus2(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HIL_SBUS2 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hil_sbus2_t packet_in = {
        93372036854775807ULL,29,{ 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131 }
    };
    mavlink_hil_sbus2_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.nSlots = packet_in.nSlots;
        
        mav_array_memcpy(packet1.Slots, packet_in.Slots, sizeof(uint8_t)*36);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HIL_SBUS2_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_sbus2_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hil_sbus2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_sbus2_pack(system_id, component_id, &msg , packet1.time_usec , packet1.nSlots , packet1.Slots );
    mavlink_msg_hil_sbus2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_sbus2_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.nSlots , packet1.Slots );
    mavlink_msg_hil_sbus2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hil_sbus2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hil_sbus2_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.nSlots , packet1.Slots );
    mavlink_msg_hil_sbus2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HIL_SBUS2") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HIL_SBUS2) != NULL);
#endif
}

static void mavlink_test_slung_load_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SLUNG_LOAD_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_slung_load_data_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,77
    };
    mavlink_slung_load_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.force_abs = packet_in.force_abs;
        packet1.phi = packet_in.phi;
        packet1.theta = packet_in.theta;
        packet1.length = packet_in.length;
        packet1.healthy = packet_in.healthy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SLUNG_LOAD_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_slung_load_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_slung_load_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_slung_load_data_pack(system_id, component_id, &msg , packet1.time_usec , packet1.healthy , packet1.force_abs , packet1.phi , packet1.theta , packet1.length );
    mavlink_msg_slung_load_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_slung_load_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.healthy , packet1.force_abs , packet1.phi , packet1.theta , packet1.length );
    mavlink_msg_slung_load_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_slung_load_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_slung_load_data_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.healthy , packet1.force_abs , packet1.phi , packet1.theta , packet1.length );
    mavlink_msg_slung_load_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SLUNG_LOAD_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SLUNG_LOAD_DATA) != NULL);
#endif
}

static void mavlink_test_elmo_ctrl_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ELMO_CTRL_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_elmo_ctrl_status_t packet_in = {
        93372036854775807ULL,73.0,963498088,963498296,157.0,963498712,963498920,963499128,963499336,963499544,963499752,963499960,381.0,173
    };
    mavlink_elmo_ctrl_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.voltage = packet_in.voltage;
        packet1.pos = packet_in.pos;
        packet1.vel = packet_in.vel;
        packet1.current = packet_in.current;
        packet1.motionstatus = packet_in.motionstatus;
        packet1.status = packet_in.status;
        packet1.motor_failures = packet_in.motor_failures;
        packet1.error_code = packet_in.error_code;
        packet1.error_code_extended = packet_in.error_code_extended;
        packet1.pos_sp = packet_in.pos_sp;
        packet1.vel_sp = packet_in.vel_sp;
        packet1.current_sp = packet_in.current_sp;
        packet1.temp = packet_in.temp;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ELMO_CTRL_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_elmo_ctrl_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_elmo_ctrl_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_elmo_ctrl_status_pack(system_id, component_id, &msg , packet1.time_usec , packet1.voltage , packet1.temp , packet1.pos , packet1.vel , packet1.current , packet1.motionstatus , packet1.status , packet1.motor_failures , packet1.error_code , packet1.error_code_extended , packet1.pos_sp , packet1.vel_sp , packet1.current_sp );
    mavlink_msg_elmo_ctrl_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_elmo_ctrl_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.voltage , packet1.temp , packet1.pos , packet1.vel , packet1.current , packet1.motionstatus , packet1.status , packet1.motor_failures , packet1.error_code , packet1.error_code_extended , packet1.pos_sp , packet1.vel_sp , packet1.current_sp );
    mavlink_msg_elmo_ctrl_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_elmo_ctrl_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_elmo_ctrl_status_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.voltage , packet1.temp , packet1.pos , packet1.vel , packet1.current , packet1.motionstatus , packet1.status , packet1.motor_failures , packet1.error_code , packet1.error_code_extended , packet1.pos_sp , packet1.vel_sp , packet1.current_sp );
    mavlink_msg_elmo_ctrl_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ELMO_CTRL_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ELMO_CTRL_STATUS) != NULL);
#endif
}

static void mavlink_test_dlr_winch_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DLR_WINCH_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_dlr_winch_status_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,101
    };
    mavlink_dlr_winch_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.length = packet_in.length;
        packet1.velocity = packet_in.velocity;
        packet1.force = packet_in.force;
        packet1.length_sp = packet_in.length_sp;
        packet1.velocity_sp = packet_in.velocity_sp;
        packet1.force_sp = packet_in.force_sp;
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DLR_WINCH_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dlr_winch_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_dlr_winch_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dlr_winch_status_pack(system_id, component_id, &msg , packet1.time_usec , packet1.length , packet1.velocity , packet1.force , packet1.length_sp , packet1.velocity_sp , packet1.force_sp , packet1.mode );
    mavlink_msg_dlr_winch_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dlr_winch_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.length , packet1.velocity , packet1.force , packet1.length_sp , packet1.velocity_sp , packet1.force_sp , packet1.mode );
    mavlink_msg_dlr_winch_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_dlr_winch_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dlr_winch_status_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.length , packet1.velocity , packet1.force , packet1.length_sp , packet1.velocity_sp , packet1.force_sp , packet1.mode );
    mavlink_msg_dlr_winch_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DLR_WINCH_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DLR_WINCH_STATUS) != NULL);
#endif
}

static void mavlink_test_path_indicator(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PATH_INDICATOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_path_indicator_t packet_in = {
        93372036854775807ULL,29,96,163,230
    };
    mavlink_path_indicator_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.boundtype = packet_in.boundtype;
        packet1.path_type = packet_in.path_type;
        packet1.lat_dev = packet_in.lat_dev;
        packet1.vert_dev = packet_in.vert_dev;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PATH_INDICATOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_path_indicator_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_path_indicator_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_path_indicator_pack(system_id, component_id, &msg , packet1.time_usec , packet1.boundtype , packet1.path_type , packet1.lat_dev , packet1.vert_dev );
    mavlink_msg_path_indicator_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_path_indicator_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.boundtype , packet1.path_type , packet1.lat_dev , packet1.vert_dev );
    mavlink_msg_path_indicator_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_path_indicator_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_path_indicator_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.boundtype , packet1.path_type , packet1.lat_dev , packet1.vert_dev );
    mavlink_msg_path_indicator_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PATH_INDICATOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PATH_INDICATOR) != NULL);
#endif
}

static void mavlink_test_dlr(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_force_sensor_data(system_id, component_id, last_msg);
    mavlink_test_aux_output(system_id, component_id, last_msg);
    mavlink_test_controller_state(system_id, component_id, last_msg);
    mavlink_test_gnss_pseudo_range_phase_shift(system_id, component_id, last_msg);
    mavlink_test_gnss_epoch_time(system_id, component_id, last_msg);
    mavlink_test_gnss_standard_ephemeris(system_id, component_id, last_msg);
    mavlink_test_gnss_glnoass_ephemeris(system_id, component_id, last_msg);
    mavlink_test_gnss_cmd_request_all_data(system_id, component_id, last_msg);
    mavlink_test_gnss_cmd_request_data_list(system_id, component_id, last_msg);
    mavlink_test_wea_info_data(system_id, component_id, last_msg);
    mavlink_test_mqtt_command_subscribe(system_id, component_id, last_msg);
    mavlink_test_mqtt_command_unsubscribe(system_id, component_id, last_msg);
    mavlink_test_gnss_relative_navigation(system_id, component_id, last_msg);
    mavlink_test_nose_boom(system_id, component_id, last_msg);
    mavlink_test_faust_setpoints(system_id, component_id, last_msg);
    mavlink_test_inner_loop_setpoint(system_id, component_id, last_msg);
    mavlink_test_outer_loop_setpoint(system_id, component_id, last_msg);
    mavlink_test_faust_ctrl_mode_status(system_id, component_id, last_msg);
    mavlink_test_task_sequence(system_id, component_id, last_msg);
    mavlink_test_owf_mission_status(system_id, component_id, last_msg);
    mavlink_test_gps_gga_ntrip_data(system_id, component_id, last_msg);
    mavlink_test_landing_geometry(system_id, component_id, last_msg);
    mavlink_test_relative_navigation(system_id, component_id, last_msg);
    mavlink_test_log_status_check(system_id, component_id, last_msg);
    mavlink_test_weather_station_data(system_id, component_id, last_msg);
    mavlink_test_hil_distance_sensor(system_id, component_id, last_msg);
    mavlink_test_wepilot_status(system_id, component_id, last_msg);
    mavlink_test_wepilot_vehiclestate(system_id, component_id, last_msg);
    mavlink_test_hil_vehicle(system_id, component_id, last_msg);
    mavlink_test_engine_status(system_id, component_id, last_msg);
    mavlink_test_controller_reference(system_id, component_id, last_msg);
    mavlink_test_hil_sbus2(system_id, component_id, last_msg);
    mavlink_test_slung_load_data(system_id, component_id, last_msg);
    mavlink_test_elmo_ctrl_status(system_id, component_id, last_msg);
    mavlink_test_dlr_winch_status(system_id, component_id, last_msg);
    mavlink_test_path_indicator(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // DLR_TESTSUITE_H
