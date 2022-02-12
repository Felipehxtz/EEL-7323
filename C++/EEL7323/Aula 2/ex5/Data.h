/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 09/11/2021
 * Arquivo: Pessoa.h
 * Descricao: Exercicio 5 da aula 2
 *
 * Compilado no Visual Studio
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


struct Data{
   
         int dia, mes, ano;

         Data();
         void setDia(int);
         void setMes(int);
         void setAno(int);
         int getDia();
         int getMes();
         int getAno();
         
         
};