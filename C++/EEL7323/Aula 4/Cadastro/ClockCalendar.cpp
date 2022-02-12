#include "Clock.cpp"
#include "Calendar.cpp"
#include <iostream>
using namespace std;

class ClockCalendar : public Clock, public Calendar {
public:
    ClockCalendar ();
    void advance ();
};
ClockCalendar::ClockCalendar(){
}

void ClockCalendar::advance(){
    bool wasPm = isPm;
    Clock::advance();
    if(wasPm && !isPm){
        Calendar::advance();
    }
    
}

//int mt, int d, int y, int h, int m, int s, bool pm
//int mt, int d, int y, int h, int m, int s, bool pm
//: Clock (h, m, s, pm), Calendar (mt, d, y)