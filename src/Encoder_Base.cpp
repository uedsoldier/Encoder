#include "Encoder_Base.h"

/**
 * @brief Construct a new Encoder_Base::Encoder_Base object
 * 
 */
Encoder_Base::Encoder_Base(): _direction(false), _last_counter_value(0), _pulses_per_revolution(DEFAULT_PULSES_PER_REVOLUTION), _position_raw(0), _speed_raw(0)
{
}

/**
 * @brief Destroy the Encoder_Base::Encoder_Base object
 * 
 */
Encoder_Base::~Encoder_Base()
{
}

/**
 * @brief 
 * 
 * @param time_period_us 
 */
void Encoder_Base::setTimePeriod_us(uint32_t time_period_us){
    _time_period_us = time_period_us;
}