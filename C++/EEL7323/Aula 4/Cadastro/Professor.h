/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: Professor.h
 * Descricao: Exercicio referente � aula 4
 *
 * Compilado no Falcon C++
 *
 *
 */

#include <iostream>
#include<string>
#include "Pessoa.h"


class Professor: public Pessoa{
    int identidade;
    
public:
    Professor();
    ~Professor();
    void setIdentidade(int);
    int getIdentidade();
    

};
