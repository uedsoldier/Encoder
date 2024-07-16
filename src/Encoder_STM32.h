/**
 * @file Encoder_STM32.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef ENCODER_STM32_H
#define ENCODER_STM32_H

#include "Encoder_Base.h"

class Encoder_STM32: public Encoder_Base
{
private:
    TIM_HandleTypeDef _htim;    // STM32 specific Hardware timer instance
public:
    Encoder_STM32(TIM_HandleTypeDef htim);
    ~Encoder_STM32();

    void update();
    bool getDirection();
    int32_t getPositionRaw();
    int32_t getSpeedRaw();
    float getPosition();
    float getSpeed();
};








#endif /*ENCODER_STM32_H*/