#include "Encoder_Base.h"

Encoder_Base::Encoder_Base(): _direction(false), _last_counter_value(0), _pulses_per_revolution(DEFAULT_PULSES_PER_REVOLUTION), _position_raw(0), _speed_raw(0)
{
}

Encoder_Base::~Encoder_Base()
{
}
