/*
 * ThrottlingRecord.h
 *
 *  Created on: 20. srp 2022.
 *      Author: Luka
 */

#ifndef APPLICATION_USER_THROTTLINGRECORD_H_
#define APPLICATION_USER_THROTTLINGRECORD_H_
#include <stdint.h>
/**
 * \ingroup grp_event_type
 * \class ThrottlingRecord
 * \brief ThrottlingRecord class in an entry for one event throttling
 */

namespace Event {

	enum Type {
		BUTTON_PRESSED = 0,
		THROTTLING_DOWN = 1,
		THROTTLING_UP = 2
	};
};

class ThrottlingRecord
{
public:
  /** \publicsection */
  /**
   * \brief Deleted default constructor.
   *
   */
  ThrottlingRecord() = delete;

  /**
   * \brief Constructor for ThrottlingRecord class.
   *
   * \param[in] eventType     To what event is this record tracking throttling.
   * \param[in] throttleTime  Minimum time in ms that must pass before next
   *                          event of type eventType can be sent.
   */
  ThrottlingRecord(Event::Type eventType, uint32_t throttleTime);

  /**
   * \brief Getter for eventType.
   *
   * \return  eventType.
   */
  Event::Type getEventType();

  /**
   * \brief Getter for passedTime.
   *
   * \return passedTime (ms).
   */
  uint32_t getPassedTime();

  /**
   * \brief Setter for passedTime.
   *
   * \param[in] passedTime Passed time (ms).
   */
  void setPassedTime(uint32_t passedTime);

  /**
   * \brief This method checks if event should be throttled at the time of
   *        calling this method.
   *
   * \return  True if event should be throttled, false otherwise.
   */
  bool shuldThrottle();
private:
  /** \privatesection */
  /** \brief Event type. */
  const Event::Type eventType;
  /** \brief Minimum time in ms that must pass before next event of type eventType can be sent. */
  const uint32_t    throttleTime;
  /** \brief Passed time in ms since last event of type eventType was sent. */
  uint32_t          passedTimeCont;

};

#endif
