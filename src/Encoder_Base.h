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

    volatile bool _direction;
    volatile int32_t _pulse_count;
public:
    Encoder_Base();
    ~Encoder_Base();

    virtual bool getDirection() = 0;
    virtual int32_t getPosition() = 0;
};
#endif


#endif /*ENCODER_BASE_H*/
