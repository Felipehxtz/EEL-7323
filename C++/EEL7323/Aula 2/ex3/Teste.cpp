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

#include "Calculo.cpp"

int main() {

   Calculo calc;
   float op;
    
   
   
   cout << "Entre com o operando 1: ";
   cin >> op;
   calc.setOperando1(op);// leva o valor op para calculadora.cpp
   
   cout << "Entre com o operando 2: ";
   cin >> op;
   calc.setOperando2(op);// leva o valor op para calculadora.cpp
   
   cout << endl << calc.getOperando1() << " + " << calc.getOperando2() << " = " 
   << calc.resultadoOperacao1() << endl;
   cout << endl << calc.getOperando1() << " - " << calc.getOperando2() << " = " 
   << calc.resultadoOperacao2() << endl;
   cout << endl << calc.getOperando1() << " * " << calc.getOperando2() << " = " 
   << calc.resultadoOperacao3() << endl;
   cout << endl << calc.getOperando1() << " / " << calc.getOperando2() << " = " 
   << calc.resultadoOperacao4() << endl;
   return 0;
}