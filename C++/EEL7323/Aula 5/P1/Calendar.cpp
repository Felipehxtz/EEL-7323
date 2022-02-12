#include <iostream>
using namespace std;

class Calendar {
protected:
    int day, mo, yr;
public:
    Calendar ();
    void setCalendar (int d, int m, int y);
    void getCalendar (int& d, int& m, int& y);
    void advance ();
};

Calendar::Calendar(){
    
}
void Calendar::setCalendar(int d,int m, int y){
    yr = y;
    mo = m;
    day = d;
}
void Calendar::getCalendar(int& d, int& m, int& y){
    y = yr;
    m = mo;
    d = day;
}
void Calendar::advance(){
    day++;
    if(day >= 30){
        day = 1;
		mo++;
        if(mo >= 12){
            mo = 1;
			yr++;
        }
    }
}
//referencia altera diretamente a variavel