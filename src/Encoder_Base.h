#ifndef ENCODER_BASE_H
#define ENCODER_BASE_H

#ifdef __cplusplus
#include <iostream>
#else
#include <stdint.h>
#include <stdbool.h>
#endif

// Function declaration for C
#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Default pulses per revolution value.
 * 
 */
#define DEFAULT_PULSES_PER_REVOLUTION 200



#ifdef __cplusplus
}
#endif

// Class declaration for C++
#ifdef __cplusplus
class Encoder_Base
{
protected:
    uint16_t _pulses_per_revolution;

    volatile uint32_t _last_counter_value;  // Previous encoder timer counter value
    volatile bool _direction;               // Encoder timer counting up or down
    volatile int32_t _speed_raw;             // Pulses per period of time
    volatile int32_t _position_raw;          // Total pulses
    volatile uint32_t _time_period_us;      // Time period in [μs] to make speed calculations
public:
    Encoder_Base();
    ~Encoder_Base();

    virtual bool getDirection() = 0;
    virtual int32_t getPositionRaw() = 0;
    virtual int32_t getSpeedRaw() = 0;
    virtual float getPosition() = 0;
    virtual float getSpeed() = 0;

    virtual void update() = 0;
};
#endif


#endif /*ENCODER_BASE_H*/
