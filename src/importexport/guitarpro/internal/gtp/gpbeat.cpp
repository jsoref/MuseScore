#include "gpbeat.h"

namespace Ms {
std::pair<int, GPRhytm::RhytmType> GPBeat::lenth() const
{
    return _rhythm->length();
}

GPRhytm::Tuplet GPBeat::tuplet() const
{
    return _rhythm->tuplet();
}
}
