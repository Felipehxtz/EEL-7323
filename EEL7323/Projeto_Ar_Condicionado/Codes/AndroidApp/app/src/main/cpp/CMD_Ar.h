//
// Created by felipe on 17/03/2022.
//

#ifndef ANDROIDAPP_CMD_AR_H
#define ANDROIDAPP_CMD_AR_H
#include <string>
#include <iostream>
#include <stdio.h>
#include "Command.cpp"
class CMD_Ar: public Command{
    string comando;
public:
    CMD_Ar();
    ~CMD_Ar();
    void setCommand(string);//envia comando para o ar condicionado
};
#endif //ANDROIDAPP_CMD_AR_H
