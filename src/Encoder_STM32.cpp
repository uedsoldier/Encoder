/**
 * @file Encoder_STM32.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-07-15
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "Encoder_STM32.h"

Encoder_STM32::Encoder_STM32(TIM_HandleTypeDef htim) : _htim(htim)
{
}

Encoder_STM32::~Encoder_STM32()
{
}

/**
 * @brief 
 * 
 */
void Encoder_STM32::update()
{
    int32_t temp_counter = __HAL_TIM_GET_COUNTER(_htim);
    static bool first_time = false;
    if (!first_time)
    {
        first_time = true;
        _speed_raw = 0;
    }
    else
    {
        _direction = getDirection();
        if (temp_counter == _last_counter_value)
        {
            _speed_raw = 0;
        }
        else if (temp_counter > _last_counter_value)
        {
            if (_direction)
            {
                _speed_raw = -_last_counter_value - (__HAL_TIM_GET_AUTORELOAD(_htim) - temp_counter);
            }
            else
            {
                _speed_raw = temp_counter - _last_counter_value;
            }
        }
        else
        {
            if (_direction)
            {
                _speed_raw = temp_counter - _last_counter_value;
            }
            else
            {
                _speed_raw = temp_counter + (__HAL_TIM_GET_AUTORELOAD(_htim) -_last_counter_value);
            }
        }
    }
    _position_raw += _speed_raw;
    _last_counter_value = temp_counter;  
}

bool Encoder_STM32::getDirection(){
    return __HAL_TIM_IS_TIM_COUNTING_DOWN(_htim);
}


int32_t Encoder_STM32::getPositionRaw(){
    return _position_raw;
}

int32_t Encoder_STM32::getSpeedRaw(){
    return _speed_raw;
}

float Encoder_STM32::getPosition(){
    return (float)getPositionRaw()/(float)_pulses_per_revolution;
}

float Encoder_STM32::getSpeed(){
    
}