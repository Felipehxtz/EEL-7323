//
// Created by felipe on 17/03/2022.
//
#include <string>
#include <iostream>
#include <stdio.h>
#include "Dados.cpp"
#include "CMD_Ar.cpp"
#include "native-lib.cpp"
int main(){
//Simulando que dados do controlador tenham estejam chegando pela variável new_sm
float new_simu, simu;
string temp;
Dados dados;
CMD_Ar comandos;
Myprint imprime;
simu = new_simu;
imprime.setPrint("Bem vindo!")
while(true){
    if(simu != new_simu){
        dados.setTemperature(new_sm);
        temp = dados.getTemperature();
        imprime.setPrint(temp);
        comandos.setCommand(new_simu);
    }
}
return 0;
}
