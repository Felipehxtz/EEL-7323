/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 13/11/2021
 * Arquivo: Aluno.h
 * Descricao: Exercicio 6 da aula 2
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include <iostream>
#include<string>
//#include "Pessoa.h"
#include "Pessoa.h"


class Aluno: public Pessoa{
    int matricula, id, nota1, nota2;
    float media;
    
public:
    Aluno();
    ~Aluno();
    void setMatricula(int);
    void setIdentidade(int);
    void setNota1(int);
    void setNota2(int);
    int getIdentidade();
    int getMatricula();
    int getNota1();
    int getNota2();
    float getMedia();


};