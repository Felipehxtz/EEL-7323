/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 09/11/2021
 * Arquivo: Pessoa.h
 * Descricao: Exercicio 4 da aula 2
 *
 * Compilado no Visual Studio
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


struct Pessoa{
   

         
         std::string nome;
        
         int idade, peso;

         Pessoa();
         void setNome(std::string);
         void setIdade(int);
         void setPeso(int);
         std::string getNome();
         int getIdade();
         int getPeso();
         
         
};