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
         
         float operando1, operando2, resultado;
             
   public:
         Calculo();
         void setOperando1(float);
         void setOperando2(float);
         float getOperando1();
         float getOperando2();
         float resultadoOperacao1();
         float resultadoOperacao2();
         float resultadoOperacao3();
         float resultadoOperacao4();
};