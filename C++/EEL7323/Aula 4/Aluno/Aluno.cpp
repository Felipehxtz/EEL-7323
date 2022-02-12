/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 13/11/2021
 * Arquivo: Aluno.h
 * Descricao: Exercicio 6 da aula 2
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */

#include <iostream>
#include<string>
#include "Aluno.h"
using namespace std;

Aluno::Aluno(){
    matricula =	0;
	nome = "";
	nota1 = 0;
	nota2 = 0;

}
Aluno::~Aluno(){
    matricula =	0;
	nome = "";
	nota1 = 0;
	nota2 = 0;

}
void Aluno::setNome(std::string newNome){
    nome = newNome;
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
std::string Aluno::getNome(){
    return nome;
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
