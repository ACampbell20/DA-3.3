#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();
    Time(int h, int m, int s);

    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    friend ostream& operator<<(ostream& out, const Time& t);
};

#endif
