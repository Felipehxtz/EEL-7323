#include "Convert_to_str.h"

Convert_to_str::Convert_to_str(){

}
Convert_to_str::~Convert_to_str(){
    
}

void Convert_to_str:: conv_to_str(int hr,int min,int sec,int dia,int mes,int ano){
    std::string str_convh(std::to_string(hr));
    std::string str_convmi(std::to_string(min));
    std::string str_convs(std::to_string(sec));
    std::string str_convd(std::to_string(dia));
    std::string str_convm(std::to_string(mes));
    std::string str_convy(std::to_string(ano));
    fullHour = str_convh + ":" + str_convmi + ":" + str_convs;
    fullDate = str_convd + "/" + str_convm + "/" + str_convy;
}

std::string Convert_to_str::getStringHour(){
    return fullHour;
}        

std::string Convert_to_str::getStringDate(){
    return fullDate;
}
        
