//
// Created by felipe on 17/03/2022.
//
#ifndef ANDROIDAPP_COMMAND_H
#define ANDROIDAPP_COMMAND_H
#include <string>
#include <iostream>
#include <stdio.h>
class Command{
public:
    virtual void setCommand(string newCommand) = 0;

};
#endif //ANDROIDAPP_COMMAND_H
