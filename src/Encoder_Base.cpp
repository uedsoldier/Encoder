#include "Encoder_Base.h"

Encoder_Base::Encoder_Base(): _direction(false), _pulse_count(0), _pulses_per_revolution(DEFAULT_PULSES_PER_REVOLUTION)
{
}

Encoder_Base::~Encoder_Base()
{
}
