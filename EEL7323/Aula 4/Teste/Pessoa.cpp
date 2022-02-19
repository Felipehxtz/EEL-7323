/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: Pessoa.h
 * Descricao: Exercicio referente � aula 4
 *
 * Compilado no Falcon C++
 *
 *
 */
#include <iostream>
#include<string>
#include "Pessoa.h"


Pessoa::Pessoa(){
	dtn = "";
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

std::string Pessoa::getNascimento(){
	return dtn;
}