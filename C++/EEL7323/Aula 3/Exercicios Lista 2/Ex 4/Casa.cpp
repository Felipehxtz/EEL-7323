/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 13/11/2021
 * Arquivo: Casa.cpp
 * Descricao: Exercicio 4 da aula 3 sobre construtores
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */
#include "Casa.h"
Porta::Porta(){

}
Janela::Janela(){

}
Casa::Casa(){
    
}
void Porta::setPorta(bool situacao1){
    porta = situacao1;
}
bool Porta::getPorta(){
    return porta;
}


void Janela::setJanela(bool situacao2){
    janela = situacao2;
}
bool Janela::getJanela(){
    return janela;
}



