/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 07/11/2021
 * Arquivo: Pessoa.cpp
 * Descricao: Exercicio 4 da aula 2
 *
 * Compilado no Visual Studio
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */


#include "Pessoa.h"


Pessoa::Pessoa()
{

}

void Pessoa::setNome(std::string newNome)
{
   nome = newNome;// newOperando recebe op do teste.cpp e passa o 
   //valor para operando1
}

void Pessoa::setIdade(int newIdade)
{
   idade = newIdade;// newOperando recebe op do teste.cpp e passa o
   //valor para operando2
}

void Pessoa::setPeso(int newPeso)
{
   peso = newPeso;// newOperando recebe op do teste.cpp e passa o
   //valor para operando2
}

std::string Pessoa::getNome()
{
   return nome;
}

int Pessoa::getIdade()
{
   return idade;
}

int Pessoa::getPeso()
{
   return peso;
}
