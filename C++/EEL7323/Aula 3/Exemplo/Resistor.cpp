/*
 * FACIN/PUCRS
 * Porto Alegre, 8 de agosto de 2007
 *
 * Exemplo de classe em C++: modelagem de um resistor
 *
 * Autor: Eduardo Augusto Bezerra <Eduardo.Bezerra@pucrs.br>
 * Data da ultima alteracao: 08/08/2007
 *
 * Compilador: g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
 * linha de comando: g++ -o Resistor Resistor.cpp -lm
 * executar com : ./Resistor
 *
 * Arquivo: Resistor.cpp Implementacao das funcoes da classe Resistor,
 *                       e programa de teste da classe (main())
 */

#include "Resistor.h"
Resistor::Resistor(){
    temValorValido = false;
}
Resistor::Resistor(int c1, int c2, int c3){
   cor1 = c1; cor2 = c2; cor3 = c3;
   calculaValorResistor();
   temValorValido = true;
}
Resistor::Resistor(int c1, int c2, int c3, int tol){
   cor1 = c1; cor2 = c2; cor3 = c3; tolerancia = tol;
   calculaValorResistor();
   temValorValido = true;
}
void Resistor::setCor1(int novaCor){
    temValorValido = false;
    cor1 = novaCor;
}
void Resistor::setCor2(int novaCor){
    temValorValido = false;
    cor2 = novaCor;
}
void Resistor::setCor3(int novaCor){
    cor3 = novaCor;
}
int Resistor::getCor1(){
        return cor1;
}
int Resistor::getCor2(){
        return cor2;
}
int Resistor::getCor3(){
        return cor3;
}
void Resistor::setTolerancia(int novaCor){
    tolerancia = novaCor;
}
int Resistor::getTolerancia(){
        return tolerancia;
}
void Resistor::calculaValorResistor(){
   valor = ((cor1 * 10) + cor2) * (int)pow(10, cor3);
   temValorValido = true;
}
bool Resistor::getTemValorValido(){
   return temValorValido;
}
int Resistor::getValor(){
        return valor;
}

int main(){

       Resistor r1(2, 3, 3, 10);
       Resistor r2;
       Resistor r3(2, 3, 3);
       int cor;

//        r2 = r1;

        if (r1.getTemValorValido())
                cout << "Valor R1 = " << r1.getValor() << " ohms " << " +/- "
                        << r1.getTolerancia() << "%" << endl;
        else
                cout << "ERRO!! E' preciso calcular o valor do resistor()";

        if (r2.getTemValorValido())
                cout << "Valor R2 = " << r2.getValor() << " ohms " << " +/- "
                        << r2.getTolerancia() << "%" << endl;
        else
                cout << "ERRO!! E' preciso calcular o valor do resistor()";




        cout << endl << "Primeira faixa [0..9]: ";
        cin >> cor;
        r2.setCor1(cor);
        cout << "Segunda faixa [0..9]: ";
        cin >> cor;
        r2.setCor2(cor);
        cout << "Terceira faixa [0..9]: ";
        cin >> cor;
        r2.setCor3(cor);
        cout << "Tolerancia: ";
        cin >> cor;
        r2.setTolerancia(cor);
        r2.calculaValorResistor();
        if (r2.getTemValorValido())
                cout << "Valor R2 = " << r2.getValor() << " ohms " << " +/- "
                        << r2.getTolerancia() << "%" << endl;
        else
                cout << "ERRO!! E' preciso calcular o valor do resistor()";
       return 0;
}
