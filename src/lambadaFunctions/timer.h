#include <chrono>
#include <functional>

class Timer{
    public:
        void Run();
        void Stop();
        void ScheduleWithInterval(const std::chrono::milliseconds ms_interval, const std::function<void()> func);
};