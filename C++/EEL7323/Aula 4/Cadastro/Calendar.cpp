#include <iostream>
using namespace std;

class Calendar {
protected:
    int mo, day, yr;
public:
    Calendar ();
    void setCalendar (int m, int d, int y);
    void getCalendar (int& m, int& d, int& y);
    void advance ();
};
//int m, int d, int y
/*yr = y;
    mo = m;
    day = d;*/
Calendar::Calendar(){
    
}
void Calendar::setCalendar(int m,int d, int y){
    yr = y;
    mo = m;
    day = d;
}
void Calendar::getCalendar(int& m, int& d, int& y){
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