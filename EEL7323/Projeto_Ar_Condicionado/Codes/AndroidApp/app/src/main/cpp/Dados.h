//
// Created by felipe on 17/03/2022.
//
#include <string>
#include <iostream>
#include <stdio.h>

#ifndef ANDROIDAPP_DADOS_H
#define ANDROIDAPP_DADOS_H
class Dados{
    float Temperature;
    string str_Temp;
public:
    Dados();
    ~Dados();
    void setTemperature(float newTemp);
    string getTemperature();


};
#endif //ANDROIDAPP_DADOS_H
