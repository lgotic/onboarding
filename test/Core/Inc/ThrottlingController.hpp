/**
 * \ingroup grp_event_type
 * \class ThrottlingController
 * \brief Event throttling controller implementation
 */
#include <stdint.h>
#include "ThrottlingRecord.hpp"
#include <array>
class ThrottlingController
{
public:
  /** \publicsection */
  /**
   * \brief Constructor for ThrottlingController class.
   */
  ThrottlingController();

  /**
   * \brief This method checks if event of type eventType should be throttled at
   *        the time of calling this method.
   *
   * \param[in] eventType Type of event for which to check throttling.
   * \return  True if event should be throttled, false otherwise.
   */
  bool shuldThrottle(Event::Type eventType);

  /**
   * \brief Marks event as sent. This resets passed time of a events throttling
   *        record.
   *
   * \param[in] eventType Event type.
   */
  void markAsSent(Event::Type eventType);

  /**
   * \brief Updates passedTime of all throttling records that it contains. This
   *        method should be called regularly, for example on every systick.
   *
   * \param[in] inc How many time in ms passed since the last call of this
   *                method.
   */
  void updateTimes(uint32_t inc);

private:
  /** \privatesection */
  /** \brief Array of event throttling records, stores information about events throttling */
  std::array<ThrottlingRecord, 3> throttlingRecords = {
    ThrottlingRecord(Event::Type::BUTTON_PRESSED, 1000),
	ThrottlingRecord(Event::Type::THROTTLING_DOWN, 1000),
	ThrottlingRecord(Event::Type::THROTTLING_UP, 1000)
  };


};

