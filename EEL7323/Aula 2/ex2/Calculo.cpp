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


#include "Calculo.h"

Calculo::Calculo(){
}

void Calculo::setOperando1(int newOperando){
   operando1 = newOperando;// newOperando recebe op do teste.cpp e passa o 
   //valor para operando1
}

void Calculo::setOperando2(int newOperando){
   operando2 = newOperando;// newOperando recebe op do teste.cpp e passa o
   //valor para operando2
}


int Calculo::getOperando1(){
   return operando1;
}

int Calculo::getOperando2(){
   return operando2;
}

int Calculo::resultadoOperacao1(){

   resultado = operando1 + operando2;
   return resultado;
   }   
int Calculo::resultadoOperacao2(){   
	resultado = operando1 - operando2;
	return resultado;
}
int Calculo::resultadoOperacao3(){
    resultado = operando1 * operando2;
	return resultado;
}
int Calculo::resultadoOperacao4(){
    resultado = operando1 / operando2;
	return resultado;
}    
                
      
   
 