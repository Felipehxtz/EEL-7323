/*
 * Autor: Eduardo Augusto Bezerra
 * Instituicao: UFSC
 * Data: 04/11/2021
 * Arquivo: Calculadora.cpp
 * Descricao: Exercicio 1 da aula 2
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include "Calculadora.h"

Calculadora::Calculadora(){
}

void Calculadora::setOperacao(char newOperacao){
   operacao = newOperacao;// newOperacao recebe operacao do teste.cpp e passa o 
   //valor para operacao(o segundo operacao pertence a Calculadora.h
}

void Calculadora::setOperando1(int newOperando){
   operando1 = newOperando;// newOperando recebe op do teste.cpp e passa o 
   //valor para operando1
}

void Calculadora::setOperando2(int newOperando){
   operando2 = newOperando;// newOperando recebe op do teste.cpp e passa o
   //valor para operando2
}


int Calculadora::getOperando1(){
   return operando1;
}

int Calculadora::getOperando2(){
   return operando2;
}

char Calculadora::getOperacao(){
   return operacao;
}

int Calculadora::resultadoOperacao(){

   switch (operacao) {
   
      case '+': resultado = operando1 + operando2;
                break;
   
      case '-': resultado = operando1 - operando2;
                break;

      case '*': resultado = operando1 * operando2;
                break;

      case '/': resultado = operando1 / operando2;
                break;
                
      default: cout << "Erro: Operacao invalida!";
   
   }
   
   return resultado;
}
         
         
     
