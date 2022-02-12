/*
 * Autor: Eduardo Augusto Bezerra
 * Instituicao: UFSC
 * Data: 04/11/2021
 * Arquivo: Calculadora.h
 * Descricao: Exercicio 1 da aula 2
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include <iostream>
using namespace std;

class Calculadora {
         char operacao;
         int operando1, operando2, resultado;
             
   public:
         Calculadora();
         void setOperacao(char);
         void setOperando1(int);
         void setOperando2(int);
         int getOperando1();
         int getOperando2();
         char getOperacao();
         int resultadoOperacao();
};

