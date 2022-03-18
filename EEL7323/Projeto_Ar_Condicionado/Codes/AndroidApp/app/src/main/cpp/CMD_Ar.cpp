//
// Created by felipe on 17/03/2022.
//
#include "CMD_Ar.h"
CMD_Ar::CMD_Ar(){
    comando = "";
}
CMD_Ar::~CMD_Ar(){
    comando = "";
}
void CMD_Ar::setCommand(string newCommand){
    switch (newCommand) {//comandos para o ar condicionado
        case "16": {
            comando = "0000";
            break;
        }
        case "17": {
            comando = "1000";
            break;
        }
        case "18": {
            comando = "0100";
            break;
        }
        case "19": {
            comando = "1100";
            break;
        }
        case "20": {
            comando = "0010";
            break;
        }
        case "21": {
            comando = "1010";
            break;
        }
        case "22": {
            comando = "0110";
            break;
        }
        case "23": {
            comando = "1110";
            break;
        }
        case "24": {
            comando = "0001";
            break;
        }
        case "25": {
            comando = "1001";
            break;
        }
        case "26": {
            comando = "0101";
            break;
        }
        case "27": {
            comando = "1101";
            break;
        }
        case "28": {
            comando = "0011";
            break;
        }
        case "29": {
            comando = "1011";
            break;
        }
        case "30": {
            comando = "0111";
            break;
        }


    }

}
