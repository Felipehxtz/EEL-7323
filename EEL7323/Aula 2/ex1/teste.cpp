/*
 * Autor: Eduardo Augusto Bezerra
 * Instituicao: UFSC
 * Data: 04/11/2021
 * Arquivo: teste.cpp
 * Descricao: Exercicio 1 da aula 2
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include "Calculadora.cpp"

int main() {

   Calculadora calc;
   char operacao;
   int op;
    
   cout << "Entre com a operacao desejada (+, -, *, /): ";
   cin >> operacao;
   calc.setOperacao(operacao);// leva o valor operacao para calculadora.cpp
   
   cout << "Entre com o operando 1: ";
   cin >> op;
   calc.setOperando1(op);// leva o valor op para calculadora.cpp
   
   cout << "Entre com o operando 2: ";
   cin >> op;
   calc.setOperando2(op);// leva o valor op para calculadora.cpp
   
   cout << endl << calc.getOperando1() << " " << calc.getOperacao() << " " 
        << calc.getOperando2() << " = " << calc.resultadoOperacao() << endl;

   return 0;
}

