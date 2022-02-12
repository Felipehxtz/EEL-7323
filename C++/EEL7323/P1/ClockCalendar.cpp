#ifndef ClockCalendar_H
#define ClockCalendar_H
#include "Clock.cpp"
#include "Calendar.cpp"
#include <iostream>
using namespace std;

class ClockCalendar : public Clock, public Calendar {

public:
    ClockCalendar ();
    void setClockCalendar(int, int, int, int, int, int);
    // int getClockCalendar();
};
ClockCalendar::ClockCalendar(): Calendar (), Clock (){

}

void ClockCalendar::setClockCalendar(int dia, int mes, int ano, int hr, int mn, int sg){
    setCalendar(dia, mes, ano);
    setClock(hr, mn, sg);
    
}
/*
void ClockCalendar::advance(){
    bool wasPm = isPm;
    Clock::advance();
    if(wasPm && !isPm){
        Calendar::advance();
    }
    
}*/

#endif
