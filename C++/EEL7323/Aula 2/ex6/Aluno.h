/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 13/11/2021
 * Arquivo: Aluno.h
 * Descricao: Exercicio 6 da aula 2
 *
 * Compilado Falcon C++
 *
 *
 */

#include <iostream>
#include<string>
using namespace std;

class Aluno{
    int matricula, nota1, nota2;
    float media;
    std::string nome;
public:
    Aluno();
    ~Aluno();
    void setNome(std::string);
    void setMatricula(int);
    void setNota1(int);
    void setNota2(int);
    std::string getNome();
    int getMatricula();
    int getNota1();
    int getNota2();
    float getMedia();


};