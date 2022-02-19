/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: Professor.cpp
 * Descricao: Exercicio referente à aula 4
 *
 * Compilado no Falcon C++
 *
 *
 */

#include <iostream>
#include<string>
#include "Professor.h"
using namespace std;

Professor::Professor(){
    identidade = 0;
	nome = "";
	

}
Professor::~Professor(){
    identidade = 0;
	nome = "";


}
void Professor::setNome(std::string newNome){
    nome = newNome;
}
void Professor::setIdentidade(int newIdentidade){
    identidade = newIdentidade;
}

std::string Professor::getNome(){
    return nome;
}
int Professor::getIdentidade(){
    return identidade;
}

