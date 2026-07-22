#include "Time.h"
#include <iomanip>

Time::Time()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

int Time::getHours() const
{
    return hours;
}

int Time::getMinutes() const
{
    return minutes;
}

int Time::getSeconds() const
{
    return seconds;
}

ostream& operator<<(ostream& out, const Time& t)
{
    out << setfill('0')
        << setw(2) << t.hours << ":"
        << setw(2) << t.minutes << ":"
        << setw(2) << t.seconds;

    return out;
}
