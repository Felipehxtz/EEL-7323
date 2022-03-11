#include <iostream>
#include <stdio.h>
#include <string>

class Convert_to_str{
    
        std::string fullHour, fullDate;
    public:
        Convert_to_str();
        ~Convert_to_str();
        void conv_to_str(int hr,int min,int sec,int dia,int mes,int ano);
        std::string getStringHour();
        std::string getStringDate();
        

};