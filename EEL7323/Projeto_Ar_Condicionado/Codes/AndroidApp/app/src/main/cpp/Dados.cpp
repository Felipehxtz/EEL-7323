//
// Created by felipe on 17/03/2022.
//
#include "Dados.h"
Dados::Dados(){
    str_Temp = "";
    Temperature = 20;
}
~Dados(){
    str_Temp = "";
    Temperature = 0;
}

void Dados::setTemperature(float newTemp){
    Temperature = newTemp;

}
string Dados::getTemperature(){
    std::string str_convtemp(std::to_string(Temperature));
    str_Temp = "Bem vindo! Temperatura atual é: " + str_convtemp + "°C";
    return str_Temp;
}
