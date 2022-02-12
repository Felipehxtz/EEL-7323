/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: Professor.cpp
 * Descricao: Exercicio referente � aula 4
 *
 * Compilado no Falcon C++
 *
 *
 */

#include <iostream>
#include<string>
#include "Professor.h"
#include "Pessoa.cpp"


Professor::Professor(){
    identidade = 0;
	//nome = "";
	

}
Professor::~Professor(){
    identidade = 0;
	//nome = "";


}

void Professor::setIdentidade(int newIdentidade){
    identidade = newIdentidade;
}

int Professor::getIdentidade(){
    return identidade;
}

