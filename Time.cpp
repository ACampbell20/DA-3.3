/*#include "Time.h"
#include <iostream>
using namespace std;

void testTimeOutStreamOperator()
{
    Time t1;
    Time t2(9, 5, 3);
    Time t3(14, 45, 30);

    cout << "t1 = " << t1 << endl;
    cout << "t2 = " << t2 << endl;
    cout << "t3 = " << t3 << endl;
}*/

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
