/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 13/11/2021
 * Arquivo: Aluno.h
 * Descricao: Exercicio referente a aula 4
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */


#include "Aluno.h"




Aluno::Aluno(){
    matricula =	0;
	id = 0;
	nota1 = 0;
	nota2 = 0;

}
Aluno::~Aluno(){
    matricula =	0;
	id = 0;
	nota1 = 0;
	nota2 = 0;

}

void Aluno::setIdentidade(int newMatricula){
	id = newMatricula;
}
void Aluno::setMatricula(int newMatricula){
    matricula = newMatricula;
}
void Aluno::setNota1(int newNota1){
    nota1 = newNota1;
}
void Aluno::setNota2(int newNota2){
    nota2 = newNota2;
}

int Aluno::getIdentidade(){
	return id;
}
int Aluno::getMatricula(){
    return matricula;
}
int Aluno::getNota1(){
    return nota1;
}
int Aluno::getNota2(){
    return nota2;
}
float Aluno::getMedia(){
   float media = (Aluno::getNota1() + Aluno::getNota2())/2;
	return media;

}