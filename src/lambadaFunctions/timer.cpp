#include "timer.h"

void Timer::Run() {}

void Timer::Stop() {}

void Timer::ScheduleWithInterval(const std::chrono::milliseconds ms_interval, const std::function<void()> func) {}
