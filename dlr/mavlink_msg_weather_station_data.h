#pragma once
// MESSAGE WEATHER_STATION_DATA PACKING

#define MAVLINK_MSG_ID_WEATHER_STATION_DATA 537


typedef struct __mavlink_weather_station_data_t {
 uint64_t time_usec; /*< [us] Timestamp (time since system boot).*/
 uint64_t gnss_time_usec; /*< [us] GNSS timestamp of observation.*/
 int32_t lat; /*< [degE7] Latitude (WGS84, EGM96 ellipsoid) of weather station.*/
 int32_t lon; /*< [degE7] Longitude (WGS84, EGM96 ellipsoid) of weather station.*/
 int32_t alt; /*< [mm] Altitude (WGS84, MSL) of weather station.*/
 uint16_t windspeed; /*< [mm/s] Horizontal windspeed.*/
 int16_t winddirection; /*< [mrad] Winddirection true north.*/
 int16_t wind_vertical_speed; /*< [mm/s] Vertical windspeed.*/
 uint16_t windspeed_mean; /*< [mm/s] 10min mean value of horizontal windspeed.*/
 int16_t winddirection_mean; /*< [mrad] 10min mean value of winddirection true north.*/
 int16_t wind_vertical_speed_mean; /*< [mm/s] 10min mean value of vertial windspeed.*/
 int16_t gusts_speed; /*< [mm/s] 10min mean gust value of horizontal wind.*/
 int16_t temperature; /*< [cdegC] Air temperature.*/
 uint16_t pressure; /*< [hPa] Static air pressure in hPa.*/
 uint16_t density; /*< [g/m^3] Air density.*/
 uint16_t speed_of_sound; /*< [cm/s] Air speed of sound.*/
 uint8_t has10min; /*<  Wind observation at least for 10min achieved, mean values are valid 10min means.*/
 uint8_t rel_hum; /*< [%] Air relative humidity in percent.*/
} mavlink_weather_station_data_t;

#define MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN 52
#define MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN 52
#define MAVLINK_MSG_ID_537_LEN 52
#define MAVLINK_MSG_ID_537_MIN_LEN 52

#define MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC 38
#define MAVLINK_MSG_ID_537_CRC 38



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WEATHER_STATION_DATA { \
    537, \
    "WEATHER_STATION_DATA", \
    18, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_weather_station_data_t, time_usec) }, \
         { "windspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_weather_station_data_t, windspeed) }, \
         { "winddirection", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_weather_station_data_t, winddirection) }, \
         { "wind_vertical_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_weather_station_data_t, wind_vertical_speed) }, \
         { "windspeed_mean", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_weather_station_data_t, windspeed_mean) }, \
         { "winddirection_mean", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_weather_station_data_t, winddirection_mean) }, \
         { "wind_vertical_speed_mean", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_weather_station_data_t, wind_vertical_speed_mean) }, \
         { "gusts_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_weather_station_data_t, gusts_speed) }, \
         { "has10min", NULL, MAVLINK_TYPE_UINT8_T, 0, 50, offsetof(mavlink_weather_station_data_t, has10min) }, \
         { "gnss_time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_weather_station_data_t, gnss_time_usec) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_weather_station_data_t, temperature) }, \
         { "pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_weather_station_data_t, pressure) }, \
         { "density", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_weather_station_data_t, density) }, \
         { "rel_hum", NULL, MAVLINK_TYPE_UINT8_T, 0, 51, offsetof(mavlink_weather_station_data_t, rel_hum) }, \
         { "speed_of_sound", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_weather_station_data_t, speed_of_sound) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_weather_station_data_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_weather_station_data_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_weather_station_data_t, alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WEATHER_STATION_DATA { \
    "WEATHER_STATION_DATA", \
    18, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_weather_station_data_t, time_usec) }, \
         { "windspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_weather_station_data_t, windspeed) }, \
         { "winddirection", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_weather_station_data_t, winddirection) }, \
         { "wind_vertical_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_weather_station_data_t, wind_vertical_speed) }, \
         { "windspeed_mean", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_weather_station_data_t, windspeed_mean) }, \
         { "winddirection_mean", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_weather_station_data_t, winddirection_mean) }, \
         { "wind_vertical_speed_mean", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_weather_station_data_t, wind_vertical_speed_mean) }, \
         { "gusts_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_weather_station_data_t, gusts_speed) }, \
         { "has10min", NULL, MAVLINK_TYPE_UINT8_T, 0, 50, offsetof(mavlink_weather_station_data_t, has10min) }, \
         { "gnss_time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_weather_station_data_t, gnss_time_usec) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_weather_station_data_t, temperature) }, \
         { "pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_weather_station_data_t, pressure) }, \
         { "density", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_weather_station_data_t, density) }, \
         { "rel_hum", NULL, MAVLINK_TYPE_UINT8_T, 0, 51, offsetof(mavlink_weather_station_data_t, rel_hum) }, \
         { "speed_of_sound", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_weather_station_data_t, speed_of_sound) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_weather_station_data_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_weather_station_data_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_weather_station_data_t, alt) }, \
         } \
}
#endif

/**
 * @brief Pack a weather_station_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param windspeed [mm/s] Horizontal windspeed.
 * @param winddirection [mrad] Winddirection true north.
 * @param wind_vertical_speed [mm/s] Vertical windspeed.
 * @param windspeed_mean [mm/s] 10min mean value of horizontal windspeed.
 * @param winddirection_mean [mrad] 10min mean value of winddirection true north.
 * @param wind_vertical_speed_mean [mm/s] 10min mean value of vertial windspeed.
 * @param gusts_speed [mm/s] 10min mean gust value of horizontal wind.
 * @param has10min  Wind observation at least for 10min achieved, mean values are valid 10min means.
 * @param gnss_time_usec [us] GNSS timestamp of observation.
 * @param temperature [cdegC] Air temperature.
 * @param pressure [hPa] Static air pressure in hPa.
 * @param density [g/m^3] Air density.
 * @param rel_hum [%] Air relative humidity in percent.
 * @param speed_of_sound [cm/s] Air speed of sound.
 * @param lat [degE7] Latitude (WGS84, EGM96 ellipsoid) of weather station.
 * @param lon [degE7] Longitude (WGS84, EGM96 ellipsoid) of weather station.
 * @param alt [mm] Altitude (WGS84, MSL) of weather station.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_weather_station_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint16_t windspeed, int16_t winddirection, int16_t wind_vertical_speed, uint16_t windspeed_mean, int16_t winddirection_mean, int16_t wind_vertical_speed_mean, int16_t gusts_speed, uint8_t has10min, uint64_t gnss_time_usec, int16_t temperature, uint16_t pressure, uint16_t density, uint8_t rel_hum, uint16_t speed_of_sound, int32_t lat, int32_t lon, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, gnss_time_usec);
    _mav_put_int32_t(buf, 16, lat);
    _mav_put_int32_t(buf, 20, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_uint16_t(buf, 28, windspeed);
    _mav_put_int16_t(buf, 30, winddirection);
    _mav_put_int16_t(buf, 32, wind_vertical_speed);
    _mav_put_uint16_t(buf, 34, windspeed_mean);
    _mav_put_int16_t(buf, 36, winddirection_mean);
    _mav_put_int16_t(buf, 38, wind_vertical_speed_mean);
    _mav_put_int16_t(buf, 40, gusts_speed);
    _mav_put_int16_t(buf, 42, temperature);
    _mav_put_uint16_t(buf, 44, pressure);
    _mav_put_uint16_t(buf, 46, density);
    _mav_put_uint16_t(buf, 48, speed_of_sound);
    _mav_put_uint8_t(buf, 50, has10min);
    _mav_put_uint8_t(buf, 51, rel_hum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN);
#else
    mavlink_weather_station_data_t packet;
    packet.time_usec = time_usec;
    packet.gnss_time_usec = gnss_time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.windspeed = windspeed;
    packet.winddirection = winddirection;
    packet.wind_vertical_speed = wind_vertical_speed;
    packet.windspeed_mean = windspeed_mean;
    packet.winddirection_mean = winddirection_mean;
    packet.wind_vertical_speed_mean = wind_vertical_speed_mean;
    packet.gusts_speed = gusts_speed;
    packet.temperature = temperature;
    packet.pressure = pressure;
    packet.density = density;
    packet.speed_of_sound = speed_of_sound;
    packet.has10min = has10min;
    packet.rel_hum = rel_hum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEATHER_STATION_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC);
}

/**
 * @brief Pack a weather_station_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param windspeed [mm/s] Horizontal windspeed.
 * @param winddirection [mrad] Winddirection true north.
 * @param wind_vertical_speed [mm/s] Vertical windspeed.
 * @param windspeed_mean [mm/s] 10min mean value of horizontal windspeed.
 * @param winddirection_mean [mrad] 10min mean value of winddirection true north.
 * @param wind_vertical_speed_mean [mm/s] 10min mean value of vertial windspeed.
 * @param gusts_speed [mm/s] 10min mean gust value of horizontal wind.
 * @param has10min  Wind observation at least for 10min achieved, mean values are valid 10min means.
 * @param gnss_time_usec [us] GNSS timestamp of observation.
 * @param temperature [cdegC] Air temperature.
 * @param pressure [hPa] Static air pressure in hPa.
 * @param density [g/m^3] Air density.
 * @param rel_hum [%] Air relative humidity in percent.
 * @param speed_of_sound [cm/s] Air speed of sound.
 * @param lat [degE7] Latitude (WGS84, EGM96 ellipsoid) of weather station.
 * @param lon [degE7] Longitude (WGS84, EGM96 ellipsoid) of weather station.
 * @param alt [mm] Altitude (WGS84, MSL) of weather station.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_weather_station_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint16_t windspeed, int16_t winddirection, int16_t wind_vertical_speed, uint16_t windspeed_mean, int16_t winddirection_mean, int16_t wind_vertical_speed_mean, int16_t gusts_speed, uint8_t has10min, uint64_t gnss_time_usec, int16_t temperature, uint16_t pressure, uint16_t density, uint8_t rel_hum, uint16_t speed_of_sound, int32_t lat, int32_t lon, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, gnss_time_usec);
    _mav_put_int32_t(buf, 16, lat);
    _mav_put_int32_t(buf, 20, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_uint16_t(buf, 28, windspeed);
    _mav_put_int16_t(buf, 30, winddirection);
    _mav_put_int16_t(buf, 32, wind_vertical_speed);
    _mav_put_uint16_t(buf, 34, windspeed_mean);
    _mav_put_int16_t(buf, 36, winddirection_mean);
    _mav_put_int16_t(buf, 38, wind_vertical_speed_mean);
    _mav_put_int16_t(buf, 40, gusts_speed);
    _mav_put_int16_t(buf, 42, temperature);
    _mav_put_uint16_t(buf, 44, pressure);
    _mav_put_uint16_t(buf, 46, density);
    _mav_put_uint16_t(buf, 48, speed_of_sound);
    _mav_put_uint8_t(buf, 50, has10min);
    _mav_put_uint8_t(buf, 51, rel_hum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN);
#else
    mavlink_weather_station_data_t packet;
    packet.time_usec = time_usec;
    packet.gnss_time_usec = gnss_time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.windspeed = windspeed;
    packet.winddirection = winddirection;
    packet.wind_vertical_speed = wind_vertical_speed;
    packet.windspeed_mean = windspeed_mean;
    packet.winddirection_mean = winddirection_mean;
    packet.wind_vertical_speed_mean = wind_vertical_speed_mean;
    packet.gusts_speed = gusts_speed;
    packet.temperature = temperature;
    packet.pressure = pressure;
    packet.density = density;
    packet.speed_of_sound = speed_of_sound;
    packet.has10min = has10min;
    packet.rel_hum = rel_hum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEATHER_STATION_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN);
#endif
}

/**
 * @brief Pack a weather_station_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (time since system boot).
 * @param windspeed [mm/s] Horizontal windspeed.
 * @param winddirection [mrad] Winddirection true north.
 * @param wind_vertical_speed [mm/s] Vertical windspeed.
 * @param windspeed_mean [mm/s] 10min mean value of horizontal windspeed.
 * @param winddirection_mean [mrad] 10min mean value of winddirection true north.
 * @param wind_vertical_speed_mean [mm/s] 10min mean value of vertial windspeed.
 * @param gusts_speed [mm/s] 10min mean gust value of horizontal wind.
 * @param has10min  Wind observation at least for 10min achieved, mean values are valid 10min means.
 * @param gnss_time_usec [us] GNSS timestamp of observation.
 * @param temperature [cdegC] Air temperature.
 * @param pressure [hPa] Static air pressure in hPa.
 * @param density [g/m^3] Air density.
 * @param rel_hum [%] Air relative humidity in percent.
 * @param speed_of_sound [cm/s] Air speed of sound.
 * @param lat [degE7] Latitude (WGS84, EGM96 ellipsoid) of weather station.
 * @param lon [degE7] Longitude (WGS84, EGM96 ellipsoid) of weather station.
 * @param alt [mm] Altitude (WGS84, MSL) of weather station.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_weather_station_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint16_t windspeed,int16_t winddirection,int16_t wind_vertical_speed,uint16_t windspeed_mean,int16_t winddirection_mean,int16_t wind_vertical_speed_mean,int16_t gusts_speed,uint8_t has10min,uint64_t gnss_time_usec,int16_t temperature,uint16_t pressure,uint16_t density,uint8_t rel_hum,uint16_t speed_of_sound,int32_t lat,int32_t lon,int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, gnss_time_usec);
    _mav_put_int32_t(buf, 16, lat);
    _mav_put_int32_t(buf, 20, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_uint16_t(buf, 28, windspeed);
    _mav_put_int16_t(buf, 30, winddirection);
    _mav_put_int16_t(buf, 32, wind_vertical_speed);
    _mav_put_uint16_t(buf, 34, windspeed_mean);
    _mav_put_int16_t(buf, 36, winddirection_mean);
    _mav_put_int16_t(buf, 38, wind_vertical_speed_mean);
    _mav_put_int16_t(buf, 40, gusts_speed);
    _mav_put_int16_t(buf, 42, temperature);
    _mav_put_uint16_t(buf, 44, pressure);
    _mav_put_uint16_t(buf, 46, density);
    _mav_put_uint16_t(buf, 48, speed_of_sound);
    _mav_put_uint8_t(buf, 50, has10min);
    _mav_put_uint8_t(buf, 51, rel_hum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN);
#else
    mavlink_weather_station_data_t packet;
    packet.time_usec = time_usec;
    packet.gnss_time_usec = gnss_time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.windspeed = windspeed;
    packet.winddirection = winddirection;
    packet.wind_vertical_speed = wind_vertical_speed;
    packet.windspeed_mean = windspeed_mean;
    packet.winddirection_mean = winddirection_mean;
    packet.wind_vertical_speed_mean = wind_vertical_speed_mean;
    packet.gusts_speed = gusts_speed;
    packet.temperature = temperature;
    packet.pressure = pressure;
    packet.density = density;
    packet.speed_of_sound = speed_of_sound;
    packet.has10min = has10min;
    packet.rel_hum = rel_hum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEATHER_STATION_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC);
}

/**
 * @brief Encode a weather_station_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param weather_station_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_weather_station_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_weather_station_data_t* weather_station_data)
{
    return mavlink_msg_weather_station_data_pack(system_id, component_id, msg, weather_station_data->time_usec, weather_station_data->windspeed, weather_station_data->winddirection, weather_station_data->wind_vertical_speed, weather_station_data->windspeed_mean, weather_station_data->winddirection_mean, weather_station_data->wind_vertical_speed_mean, weather_station_data->gusts_speed, weather_station_data->has10min, weather_station_data->gnss_time_usec, weather_station_data->temperature, weather_station_data->pressure, weather_station_data->density, weather_station_data->rel_hum, weather_station_data->speed_of_sound, weather_station_data->lat, weather_station_data->lon, weather_station_data->alt);
}

/**
 * @brief Encode a weather_station_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param weather_station_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_weather_station_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_weather_station_data_t* weather_station_data)
{
    return mavlink_msg_weather_station_data_pack_chan(system_id, component_id, chan, msg, weather_station_data->time_usec, weather_station_data->windspeed, weather_station_data->winddirection, weather_station_data->wind_vertical_speed, weather_station_data->windspeed_mean, weather_station_data->winddirection_mean, weather_station_data->wind_vertical_speed_mean, weather_station_data->gusts_speed, weather_station_data->has10min, weather_station_data->gnss_time_usec, weather_station_data->temperature, weather_station_data->pressure, weather_station_data->density, weather_station_data->rel_hum, weather_station_data->speed_of_sound, weather_station_data->lat, weather_station_data->lon, weather_station_data->alt);
}

/**
 * @brief Encode a weather_station_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param weather_station_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_weather_station_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_weather_station_data_t* weather_station_data)
{
    return mavlink_msg_weather_station_data_pack_status(system_id, component_id, _status, msg,  weather_station_data->time_usec, weather_station_data->windspeed, weather_station_data->winddirection, weather_station_data->wind_vertical_speed, weather_station_data->windspeed_mean, weather_station_data->winddirection_mean, weather_station_data->wind_vertical_speed_mean, weather_station_data->gusts_speed, weather_station_data->has10min, weather_station_data->gnss_time_usec, weather_station_data->temperature, weather_station_data->pressure, weather_station_data->density, weather_station_data->rel_hum, weather_station_data->speed_of_sound, weather_station_data->lat, weather_station_data->lon, weather_station_data->alt);
}

/**
 * @brief Send a weather_station_data message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (time since system boot).
 * @param windspeed [mm/s] Horizontal windspeed.
 * @param winddirection [mrad] Winddirection true north.
 * @param wind_vertical_speed [mm/s] Vertical windspeed.
 * @param windspeed_mean [mm/s] 10min mean value of horizontal windspeed.
 * @param winddirection_mean [mrad] 10min mean value of winddirection true north.
 * @param wind_vertical_speed_mean [mm/s] 10min mean value of vertial windspeed.
 * @param gusts_speed [mm/s] 10min mean gust value of horizontal wind.
 * @param has10min  Wind observation at least for 10min achieved, mean values are valid 10min means.
 * @param gnss_time_usec [us] GNSS timestamp of observation.
 * @param temperature [cdegC] Air temperature.
 * @param pressure [hPa] Static air pressure in hPa.
 * @param density [g/m^3] Air density.
 * @param rel_hum [%] Air relative humidity in percent.
 * @param speed_of_sound [cm/s] Air speed of sound.
 * @param lat [degE7] Latitude (WGS84, EGM96 ellipsoid) of weather station.
 * @param lon [degE7] Longitude (WGS84, EGM96 ellipsoid) of weather station.
 * @param alt [mm] Altitude (WGS84, MSL) of weather station.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_weather_station_data_send(mavlink_channel_t chan, uint64_t time_usec, uint16_t windspeed, int16_t winddirection, int16_t wind_vertical_speed, uint16_t windspeed_mean, int16_t winddirection_mean, int16_t wind_vertical_speed_mean, int16_t gusts_speed, uint8_t has10min, uint64_t gnss_time_usec, int16_t temperature, uint16_t pressure, uint16_t density, uint8_t rel_hum, uint16_t speed_of_sound, int32_t lat, int32_t lon, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, gnss_time_usec);
    _mav_put_int32_t(buf, 16, lat);
    _mav_put_int32_t(buf, 20, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_uint16_t(buf, 28, windspeed);
    _mav_put_int16_t(buf, 30, winddirection);
    _mav_put_int16_t(buf, 32, wind_vertical_speed);
    _mav_put_uint16_t(buf, 34, windspeed_mean);
    _mav_put_int16_t(buf, 36, winddirection_mean);
    _mav_put_int16_t(buf, 38, wind_vertical_speed_mean);
    _mav_put_int16_t(buf, 40, gusts_speed);
    _mav_put_int16_t(buf, 42, temperature);
    _mav_put_uint16_t(buf, 44, pressure);
    _mav_put_uint16_t(buf, 46, density);
    _mav_put_uint16_t(buf, 48, speed_of_sound);
    _mav_put_uint8_t(buf, 50, has10min);
    _mav_put_uint8_t(buf, 51, rel_hum);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_STATION_DATA, buf, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC);
#else
    mavlink_weather_station_data_t packet;
    packet.time_usec = time_usec;
    packet.gnss_time_usec = gnss_time_usec;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.windspeed = windspeed;
    packet.winddirection = winddirection;
    packet.wind_vertical_speed = wind_vertical_speed;
    packet.windspeed_mean = windspeed_mean;
    packet.winddirection_mean = winddirection_mean;
    packet.wind_vertical_speed_mean = wind_vertical_speed_mean;
    packet.gusts_speed = gusts_speed;
    packet.temperature = temperature;
    packet.pressure = pressure;
    packet.density = density;
    packet.speed_of_sound = speed_of_sound;
    packet.has10min = has10min;
    packet.rel_hum = rel_hum;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_STATION_DATA, (const char *)&packet, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC);
#endif
}

/**
 * @brief Send a weather_station_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_weather_station_data_send_struct(mavlink_channel_t chan, const mavlink_weather_station_data_t* weather_station_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_weather_station_data_send(chan, weather_station_data->time_usec, weather_station_data->windspeed, weather_station_data->winddirection, weather_station_data->wind_vertical_speed, weather_station_data->windspeed_mean, weather_station_data->winddirection_mean, weather_station_data->wind_vertical_speed_mean, weather_station_data->gusts_speed, weather_station_data->has10min, weather_station_data->gnss_time_usec, weather_station_data->temperature, weather_station_data->pressure, weather_station_data->density, weather_station_data->rel_hum, weather_station_data->speed_of_sound, weather_station_data->lat, weather_station_data->lon, weather_station_data->alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_STATION_DATA, (const char *)weather_station_data, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_weather_station_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint16_t windspeed, int16_t winddirection, int16_t wind_vertical_speed, uint16_t windspeed_mean, int16_t winddirection_mean, int16_t wind_vertical_speed_mean, int16_t gusts_speed, uint8_t has10min, uint64_t gnss_time_usec, int16_t temperature, uint16_t pressure, uint16_t density, uint8_t rel_hum, uint16_t speed_of_sound, int32_t lat, int32_t lon, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, gnss_time_usec);
    _mav_put_int32_t(buf, 16, lat);
    _mav_put_int32_t(buf, 20, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_uint16_t(buf, 28, windspeed);
    _mav_put_int16_t(buf, 30, winddirection);
    _mav_put_int16_t(buf, 32, wind_vertical_speed);
    _mav_put_uint16_t(buf, 34, windspeed_mean);
    _mav_put_int16_t(buf, 36, winddirection_mean);
    _mav_put_int16_t(buf, 38, wind_vertical_speed_mean);
    _mav_put_int16_t(buf, 40, gusts_speed);
    _mav_put_int16_t(buf, 42, temperature);
    _mav_put_uint16_t(buf, 44, pressure);
    _mav_put_uint16_t(buf, 46, density);
    _mav_put_uint16_t(buf, 48, speed_of_sound);
    _mav_put_uint8_t(buf, 50, has10min);
    _mav_put_uint8_t(buf, 51, rel_hum);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_STATION_DATA, buf, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC);
#else
    mavlink_weather_station_data_t *packet = (mavlink_weather_station_data_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->gnss_time_usec = gnss_time_usec;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->windspeed = windspeed;
    packet->winddirection = winddirection;
    packet->wind_vertical_speed = wind_vertical_speed;
    packet->windspeed_mean = windspeed_mean;
    packet->winddirection_mean = winddirection_mean;
    packet->wind_vertical_speed_mean = wind_vertical_speed_mean;
    packet->gusts_speed = gusts_speed;
    packet->temperature = temperature;
    packet->pressure = pressure;
    packet->density = density;
    packet->speed_of_sound = speed_of_sound;
    packet->has10min = has10min;
    packet->rel_hum = rel_hum;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_STATION_DATA, (const char *)packet, MAVLINK_MSG_ID_WEATHER_STATION_DATA_MIN_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN, MAVLINK_MSG_ID_WEATHER_STATION_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE WEATHER_STATION_DATA UNPACKING


/**
 * @brief Get field time_usec from weather_station_data message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_weather_station_data_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field windspeed from weather_station_data message
 *
 * @return [mm/s] Horizontal windspeed.
 */
static inline uint16_t mavlink_msg_weather_station_data_get_windspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field winddirection from weather_station_data message
 *
 * @return [mrad] Winddirection true north.
 */
static inline int16_t mavlink_msg_weather_station_data_get_winddirection(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field wind_vertical_speed from weather_station_data message
 *
 * @return [mm/s] Vertical windspeed.
 */
static inline int16_t mavlink_msg_weather_station_data_get_wind_vertical_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field windspeed_mean from weather_station_data message
 *
 * @return [mm/s] 10min mean value of horizontal windspeed.
 */
static inline uint16_t mavlink_msg_weather_station_data_get_windspeed_mean(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Get field winddirection_mean from weather_station_data message
 *
 * @return [mrad] 10min mean value of winddirection true north.
 */
static inline int16_t mavlink_msg_weather_station_data_get_winddirection_mean(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field wind_vertical_speed_mean from weather_station_data message
 *
 * @return [mm/s] 10min mean value of vertial windspeed.
 */
static inline int16_t mavlink_msg_weather_station_data_get_wind_vertical_speed_mean(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field gusts_speed from weather_station_data message
 *
 * @return [mm/s] 10min mean gust value of horizontal wind.
 */
static inline int16_t mavlink_msg_weather_station_data_get_gusts_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field has10min from weather_station_data message
 *
 * @return  Wind observation at least for 10min achieved, mean values are valid 10min means.
 */
static inline uint8_t mavlink_msg_weather_station_data_get_has10min(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  50);
}

/**
 * @brief Get field gnss_time_usec from weather_station_data message
 *
 * @return [us] GNSS timestamp of observation.
 */
static inline uint64_t mavlink_msg_weather_station_data_get_gnss_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field temperature from weather_station_data message
 *
 * @return [cdegC] Air temperature.
 */
static inline int16_t mavlink_msg_weather_station_data_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  42);
}

/**
 * @brief Get field pressure from weather_station_data message
 *
 * @return [hPa] Static air pressure in hPa.
 */
static inline uint16_t mavlink_msg_weather_station_data_get_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  44);
}

/**
 * @brief Get field density from weather_station_data message
 *
 * @return [g/m^3] Air density.
 */
static inline uint16_t mavlink_msg_weather_station_data_get_density(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  46);
}

/**
 * @brief Get field rel_hum from weather_station_data message
 *
 * @return [%] Air relative humidity in percent.
 */
static inline uint8_t mavlink_msg_weather_station_data_get_rel_hum(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  51);
}

/**
 * @brief Get field speed_of_sound from weather_station_data message
 *
 * @return [cm/s] Air speed of sound.
 */
static inline uint16_t mavlink_msg_weather_station_data_get_speed_of_sound(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field lat from weather_station_data message
 *
 * @return [degE7] Latitude (WGS84, EGM96 ellipsoid) of weather station.
 */
static inline int32_t mavlink_msg_weather_station_data_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field lon from weather_station_data message
 *
 * @return [degE7] Longitude (WGS84, EGM96 ellipsoid) of weather station.
 */
static inline int32_t mavlink_msg_weather_station_data_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field alt from weather_station_data message
 *
 * @return [mm] Altitude (WGS84, MSL) of weather station.
 */
static inline int32_t mavlink_msg_weather_station_data_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Decode a weather_station_data message into a struct
 *
 * @param msg The message to decode
 * @param weather_station_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_weather_station_data_decode(const mavlink_message_t* msg, mavlink_weather_station_data_t* weather_station_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    weather_station_data->time_usec = mavlink_msg_weather_station_data_get_time_usec(msg);
    weather_station_data->gnss_time_usec = mavlink_msg_weather_station_data_get_gnss_time_usec(msg);
    weather_station_data->lat = mavlink_msg_weather_station_data_get_lat(msg);
    weather_station_data->lon = mavlink_msg_weather_station_data_get_lon(msg);
    weather_station_data->alt = mavlink_msg_weather_station_data_get_alt(msg);
    weather_station_data->windspeed = mavlink_msg_weather_station_data_get_windspeed(msg);
    weather_station_data->winddirection = mavlink_msg_weather_station_data_get_winddirection(msg);
    weather_station_data->wind_vertical_speed = mavlink_msg_weather_station_data_get_wind_vertical_speed(msg);
    weather_station_data->windspeed_mean = mavlink_msg_weather_station_data_get_windspeed_mean(msg);
    weather_station_data->winddirection_mean = mavlink_msg_weather_station_data_get_winddirection_mean(msg);
    weather_station_data->wind_vertical_speed_mean = mavlink_msg_weather_station_data_get_wind_vertical_speed_mean(msg);
    weather_station_data->gusts_speed = mavlink_msg_weather_station_data_get_gusts_speed(msg);
    weather_station_data->temperature = mavlink_msg_weather_station_data_get_temperature(msg);
    weather_station_data->pressure = mavlink_msg_weather_station_data_get_pressure(msg);
    weather_station_data->density = mavlink_msg_weather_station_data_get_density(msg);
    weather_station_data->speed_of_sound = mavlink_msg_weather_station_data_get_speed_of_sound(msg);
    weather_station_data->has10min = mavlink_msg_weather_station_data_get_has10min(msg);
    weather_station_data->rel_hum = mavlink_msg_weather_station_data_get_rel_hum(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN? msg->len : MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN;
        memset(weather_station_data, 0, MAVLINK_MSG_ID_WEATHER_STATION_DATA_LEN);
    memcpy(weather_station_data, _MAV_PAYLOAD(msg), len);
#endif
}
