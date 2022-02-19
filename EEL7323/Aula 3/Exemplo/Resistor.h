/*
 * FACIN/PUCRS
 * Porto Alegre, 8 de agosto de 2007
 *
 * Exemplo de classe em C++: modelagem de um resistor
 *
 * Autor: Eduardo Augusto Bezerra <Eduardo.Bezerra@pucrs.br>
 * Data da ultima alteracao: 08/08/2007
 *
 * Compilador:  * Compilador: g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
 * linha de comando: g++ -o Resistor Resistor.cpp -lm
 * executar com : ./Resistor
 *
 * Arquivo: Resistor.h Definicao da classe (interface)
 */

#include <iostream>
#include <math.h>

using namespace std;

//declaracao da classe
class Resistor{
        //declaracao dos atributos privados
        int cor1, cor2, cor3;
        int tolerancia;
        int valor;
        bool temValorValido;    // false ou true
public:
     //declaracao dos metodos publicos
     Resistor();  // construtor
     Resistor(int, int, int);  // construtor
     Resistor(int, int, int, int);  // construtor
     void setCor1(int);
     void setCor2(int);
     void setCor3(int);
     void setTolerancia(int);
     int getCor1();
     int getCor2();
     int getCor3();
     int getTolerancia();
     void calculaValorResistor();
     int getValor();
     bool getTemValorValido();
};
