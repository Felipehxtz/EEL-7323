/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: Pessoa.h
 * Descricao: Exercicio referente à aula 4
 *
 * Compilado no Falcon C++
 *
 *
 */

#include <iostream>
#include<string>
using namespace std;

class Pessoa{
    
    std::string nome, dnt;
public:
    Pessoa();
    ~Pessoa();
    void setNome(std::string);
    void setNascimento(std::string);
    std::string getNome();
    std::string getNascimento();
    

};

Pessoa::Pessoa(){
	dnt = "";
	nome = "";
}
Pessoa::~Pessoa(){
	dtn = "";
	nome = "";
}

void Pessoa::setNome(std::string newNome){
	nome = newNome;
}

void Pessoa::setNascimento(std::string newNascimento){
	dtn = newNascimento;
}

std::string Pessoa::getNome(){
	return nome;
}

std::strig Pessoa::getNascimento(){
	return dtn;
}