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

void Calculo::setOperando1(float newOperando){
   operando1 = newOperando;// newOperando recebe op do teste.cpp e passa o 
   //valor para operando1
}

void Calculo::setOperando2(float newOperando){
   operando2 = newOperando;// newOperando recebe op do teste.cpp e passa o
   //valor para operando2
}


float Calculo::getOperando1(){
   return operando1;
}

float Calculo::getOperando2(){
   return operando2;
}

float Calculo::resultadoOperacao1(){

   resultado = operando1 + operando2;
   return resultado;
   }   
float Calculo::resultadoOperacao2(){   
	resultado = operando1 - operando2;
	return resultado;
}
float Calculo::resultadoOperacao3(){
    resultado = operando1 * operando2;
	return resultado;
}
float Calculo::resultadoOperacao4(){
    resultado = operando1 / operando2;
	return resultado;
}    
                
      
   
 