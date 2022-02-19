#include <iostream>
using namespace std;

class Clock{
protected:
    int hr, min, sec; 
    bool isPm;
public:
    Clock();
    void setClock(int h, int m, int s, bool pm);
    void getClock(int& h, int& m, int& s, bool& pm);
    void advance ();
};    
//int h, int m, int s, bool pm
/*hr = h;
    min = m;
    sec = s;
    isPm = pm;*/
Clock::Clock(){
    
}
void Clock::setClock(int h, int m, int s, bool pm){
    hr = h;
    min = m;
    sec = s;
    isPm = pm;
} 
void Clock::getClock(int& h, int& m, int& s, bool& pm){
    h = hr;
    m = min;
    s = sec;
    pm = isPm;
}

void Clock::advance(){
        sec++;
        if(sec >= 60){
            sec = 0;
            min++;
            if(min >= 60){
                min = 0;
                hr++;
                if(hr >= 13){
                    hr = 1;
                }
                if(isPm && hr >= 12){//passou  da meia noite, virou o dia
                    hr = 0;
                    isPm = !isPm;// muda para AM
                }else
                    if(!isPm && hr >= 12){
                        
                        isPm = !isPm;
                    }
            }
        }
}
