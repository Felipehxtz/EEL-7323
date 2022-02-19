#ifndef PESSOA_H
#define PESSOA_H
/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: Pessoa.h
 * Descricao: Exercicio referente � aula 4
 *
 * Compilado no Falcon C++
 *
 *
 */

#include <iostream>
#include<string>
using namespace std;

class Pessoa{
    
    std::string nome;
    std::string dtn;
public:
    Pessoa();
    ~Pessoa();
    void setNome(std::string);
    void setNascimento(std::string);
    std::string getNome();
    std::string getNascimento();
    

};
#endif
