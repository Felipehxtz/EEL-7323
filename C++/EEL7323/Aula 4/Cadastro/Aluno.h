/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 13/11/2021
 * Arquivo: Aluno.h
 * Descricao: Exercicio referente a aula 4
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include <iostream>
#include <string>
#include "ClockCalendar.cpp"
#include "Pessoa.cpp"


class Aluno: public Pessoa, public ClockCalendar{
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
