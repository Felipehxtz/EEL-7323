/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 07/11/2021
 * Arquivo: Calculo.h
 * Descricao: Exercicio 2 da aula 2
 *
 * Compilado no Falcon C++
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include <iostream>
using namespace std;

class Calculo {
         
         int operando1, operando2, resultado;
             
   public:
         Calculo();
         void setOperando1(int);
         void setOperando2(int);
         int getOperando1();
         int getOperando2();
         int resultadoOperacao1();
         int resultadoOperacao2();
         int resultadoOperacao3();
         int resultadoOperacao4();
};