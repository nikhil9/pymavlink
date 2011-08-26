// MESSAGE SAFETY_SET_ALLOWED_AREA PACKING

#define MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA 53

typedef struct __mavlink_safety_set_allowed_area_t
{
 float p1x; ///< x position 1 / Latitude 1
 float p1y; ///< y position 1 / Longitude 1
 float p1z; ///< z position 1 / Altitude 1
 float p2x; ///< x position 2 / Latitude 2
 float p2y; ///< y position 2 / Longitude 2
 float p2z; ///< z position 2 / Altitude 2
 uint8_t target_system; ///< System ID
 uint8_t target_component; ///< Component ID
 uint8_t frame; ///< Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.
} mavlink_safety_set_allowed_area_t;

/**
 * @brief Pack a safety_set_allowed_area message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param frame Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.
 * @param p1x x position 1 / Latitude 1
 * @param p1y y position 1 / Longitude 1
 * @param p1z z position 1 / Altitude 1
 * @param p2x x position 2 / Latitude 2
 * @param p2y y position 2 / Longitude 2
 * @param p2z z position 2 / Altitude 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_safety_set_allowed_area_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t target_system, uint8_t target_component, uint8_t frame, float p1x, float p1y, float p1z, float p2x, float p2y, float p2z)
{
	msg->msgid = MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA;

	put_float_by_index(p1x, 0,  MAVLINK_PAYLOAD(msg)); // x position 1 / Latitude 1
	put_float_by_index(p1y, 4,  MAVLINK_PAYLOAD(msg)); // y position 1 / Longitude 1
	put_float_by_index(p1z, 8,  MAVLINK_PAYLOAD(msg)); // z position 1 / Altitude 1
	put_float_by_index(p2x, 12,  MAVLINK_PAYLOAD(msg)); // x position 2 / Latitude 2
	put_float_by_index(p2y, 16,  MAVLINK_PAYLOAD(msg)); // y position 2 / Longitude 2
	put_float_by_index(p2z, 20,  MAVLINK_PAYLOAD(msg)); // z position 2 / Altitude 2
	put_uint8_t_by_index(target_system, 24,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 25,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint8_t_by_index(frame, 26,  MAVLINK_PAYLOAD(msg)); // Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.

	return mavlink_finalize_message(msg, system_id, component_id, 27, 91);
}

/**
 * @brief Pack a safety_set_allowed_area message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param frame Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.
 * @param p1x x position 1 / Latitude 1
 * @param p1y y position 1 / Longitude 1
 * @param p1z z position 1 / Altitude 1
 * @param p2x x position 2 / Latitude 2
 * @param p2y y position 2 / Longitude 2
 * @param p2z z position 2 / Altitude 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_safety_set_allowed_area_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t target_component,uint8_t frame,float p1x,float p1y,float p1z,float p2x,float p2y,float p2z)
{
	msg->msgid = MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA;

	put_float_by_index(p1x, 0,  MAVLINK_PAYLOAD(msg)); // x position 1 / Latitude 1
	put_float_by_index(p1y, 4,  MAVLINK_PAYLOAD(msg)); // y position 1 / Longitude 1
	put_float_by_index(p1z, 8,  MAVLINK_PAYLOAD(msg)); // z position 1 / Altitude 1
	put_float_by_index(p2x, 12,  MAVLINK_PAYLOAD(msg)); // x position 2 / Latitude 2
	put_float_by_index(p2y, 16,  MAVLINK_PAYLOAD(msg)); // y position 2 / Longitude 2
	put_float_by_index(p2z, 20,  MAVLINK_PAYLOAD(msg)); // z position 2 / Altitude 2
	put_uint8_t_by_index(target_system, 24,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 25,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint8_t_by_index(frame, 26,  MAVLINK_PAYLOAD(msg)); // Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 27, 91);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

/**
 * @brief Pack a safety_set_allowed_area message on a channel and send
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param frame Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.
 * @param p1x x position 1 / Latitude 1
 * @param p1y y position 1 / Longitude 1
 * @param p1z z position 1 / Altitude 1
 * @param p2x x position 2 / Latitude 2
 * @param p2y y position 2 / Longitude 2
 * @param p2z z position 2 / Altitude 2
 */
static inline void mavlink_msg_safety_set_allowed_area_pack_chan_send(mavlink_channel_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t target_component,uint8_t frame,float p1x,float p1y,float p1z,float p2x,float p2y,float p2z)
{
	msg->msgid = MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA;

	put_float_by_index(p1x, 0,  MAVLINK_PAYLOAD(msg)); // x position 1 / Latitude 1
	put_float_by_index(p1y, 4,  MAVLINK_PAYLOAD(msg)); // y position 1 / Longitude 1
	put_float_by_index(p1z, 8,  MAVLINK_PAYLOAD(msg)); // z position 1 / Altitude 1
	put_float_by_index(p2x, 12,  MAVLINK_PAYLOAD(msg)); // x position 2 / Latitude 2
	put_float_by_index(p2y, 16,  MAVLINK_PAYLOAD(msg)); // y position 2 / Longitude 2
	put_float_by_index(p2z, 20,  MAVLINK_PAYLOAD(msg)); // z position 2 / Altitude 2
	put_uint8_t_by_index(target_system, 24,  MAVLINK_PAYLOAD(msg)); // System ID
	put_uint8_t_by_index(target_component, 25,  MAVLINK_PAYLOAD(msg)); // Component ID
	put_uint8_t_by_index(frame, 26,  MAVLINK_PAYLOAD(msg)); // Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.

	mavlink_finalize_message_chan_send(msg, chan, 27, 91);
}
#endif // MAVLINK_USE_CONVENIENCE_FUNCTIONS


/**
 * @brief Encode a safety_set_allowed_area struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param safety_set_allowed_area C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_safety_set_allowed_area_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_safety_set_allowed_area_t* safety_set_allowed_area)
{
	return mavlink_msg_safety_set_allowed_area_pack(system_id, component_id, msg, safety_set_allowed_area->target_system, safety_set_allowed_area->target_component, safety_set_allowed_area->frame, safety_set_allowed_area->p1x, safety_set_allowed_area->p1y, safety_set_allowed_area->p1z, safety_set_allowed_area->p2x, safety_set_allowed_area->p2y, safety_set_allowed_area->p2z);
}

/**
 * @brief Send a safety_set_allowed_area message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param frame Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.
 * @param p1x x position 1 / Latitude 1
 * @param p1y y position 1 / Longitude 1
 * @param p1z z position 1 / Altitude 1
 * @param p2x x position 2 / Latitude 2
 * @param p2y y position 2 / Longitude 2
 * @param p2z z position 2 / Altitude 2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_safety_set_allowed_area_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t frame, float p1x, float p1y, float p1z, float p2x, float p2y, float p2z)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 27);
	mavlink_msg_safety_set_allowed_area_pack_chan_send(chan, msg, target_system, target_component, frame, p1x, p1y, p1z, p2x, p2y, p2z);
}

#endif

// MESSAGE SAFETY_SET_ALLOWED_AREA UNPACKING


/**
 * @brief Get field target_system from safety_set_allowed_area message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_safety_set_allowed_area_get_target_system(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field target_component from safety_set_allowed_area message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_safety_set_allowed_area_get_target_component(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field frame from safety_set_allowed_area message
 *
 * @return Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.
 */
static inline uint8_t mavlink_msg_safety_set_allowed_area_get_frame(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field p1x from safety_set_allowed_area message
 *
 * @return x position 1 / Latitude 1
 */
static inline float mavlink_msg_safety_set_allowed_area_get_p1x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  0);
}

/**
 * @brief Get field p1y from safety_set_allowed_area message
 *
 * @return y position 1 / Longitude 1
 */
static inline float mavlink_msg_safety_set_allowed_area_get_p1y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  4);
}

/**
 * @brief Get field p1z from safety_set_allowed_area message
 *
 * @return z position 1 / Altitude 1
 */
static inline float mavlink_msg_safety_set_allowed_area_get_p1z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  8);
}

/**
 * @brief Get field p2x from safety_set_allowed_area message
 *
 * @return x position 2 / Latitude 2
 */
static inline float mavlink_msg_safety_set_allowed_area_get_p2x(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  12);
}

/**
 * @brief Get field p2y from safety_set_allowed_area message
 *
 * @return y position 2 / Longitude 2
 */
static inline float mavlink_msg_safety_set_allowed_area_get_p2y(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  16);
}

/**
 * @brief Get field p2z from safety_set_allowed_area message
 *
 * @return z position 2 / Altitude 2
 */
static inline float mavlink_msg_safety_set_allowed_area_get_p2z(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_float(msg,  20);
}

/**
 * @brief Decode a safety_set_allowed_area message into a struct
 *
 * @param msg The message to decode
 * @param safety_set_allowed_area C-struct to decode the message contents into
 */
static inline void mavlink_msg_safety_set_allowed_area_decode(const mavlink_message_t* msg, mavlink_safety_set_allowed_area_t* safety_set_allowed_area)
{
#if MAVLINK_NEED_BYTE_SWAP
	safety_set_allowed_area->p1x = mavlink_msg_safety_set_allowed_area_get_p1x(msg);
	safety_set_allowed_area->p1y = mavlink_msg_safety_set_allowed_area_get_p1y(msg);
	safety_set_allowed_area->p1z = mavlink_msg_safety_set_allowed_area_get_p1z(msg);
	safety_set_allowed_area->p2x = mavlink_msg_safety_set_allowed_area_get_p2x(msg);
	safety_set_allowed_area->p2y = mavlink_msg_safety_set_allowed_area_get_p2y(msg);
	safety_set_allowed_area->p2z = mavlink_msg_safety_set_allowed_area_get_p2z(msg);
	safety_set_allowed_area->target_system = mavlink_msg_safety_set_allowed_area_get_target_system(msg);
	safety_set_allowed_area->target_component = mavlink_msg_safety_set_allowed_area_get_target_component(msg);
	safety_set_allowed_area->frame = mavlink_msg_safety_set_allowed_area_get_frame(msg);
#else
	memcpy(safety_set_allowed_area, MAVLINK_PAYLOAD(msg), 27);
#endif
}
