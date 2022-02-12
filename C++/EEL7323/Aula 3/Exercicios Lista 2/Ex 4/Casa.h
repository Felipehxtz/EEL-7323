/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 13/11/2021
 * Arquivo: Casa.h
 * Descricao: Exercicio 4 da aula 3 sobre construtores
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include <iostream>
#include<string>
using namespace std;

class Porta{
    bool porta;
public:
    Porta();
    ~Porta();
    void setPorta(bool);
    bool getPorta();
};

class Janela{
    bool janela;
public:
    Janela();
    ~Janela();
    void setJanela(bool);
    bool getJanela();
};   

class Casa{
    Porta p;
    Janela j;
public:
    Casa();
    ~Casa();
    void setPorta(bool);
    void setJanela(bool);
    bool getPorta();
    bool getJanela();
};