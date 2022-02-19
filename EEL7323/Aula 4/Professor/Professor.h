/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: Professor.h
 * Descricao: Exercicio referente à aula 4
 *
 * Compilado no Falcon C++
 *
 *
 */

#include <iostream>
#include<string>
using namespace std;

class Professor{
    int identidade;
    std::string nome;
public:
    Professor();
    ~Professor();
    void setNome(std::string);
    void setIdentidade(int);
    std::string getNome();
    int getIdentidade();
    

};

