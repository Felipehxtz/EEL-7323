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
#include <stdio.h>
#include "Pessoa.cpp"
using namespace std;
Pessoa pes;

void printpessoa()
{
    
    cout << "O nome da pessoa eh: " << pes.getNome() << endl;
    cout << "A idade da pessoa eh: " << pes.getIdade() << endl;
    cout << "O peso da pessoa eh: " << pes.getPeso() << endl;
}


int main() {

   
    std::string newName;
    int age, weight;
    cout << "Digite o nome da pessoa: " << endl;
    cin >> newName;
    pes.setNome(newName); 
    cout << "Digite a idade: " << endl;
    cin >> age;
    pes.setIdade(age);
    cout << "Digite o peso: " << endl;
    cin >> weight;
    pes.setPeso(weight);
    printpessoa();

    return 0;
}
  
