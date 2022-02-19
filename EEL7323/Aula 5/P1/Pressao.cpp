/*
 * file: Pressao.cpp
 *
 * Descricao: Implementacao da Classe Pressao utilizada para realizar a leitura do sensor de Pressao, e data data/hora da leitura realizada.
 *
 * Autor: Eduardo Augusto Bezerra
 * Data: 09/12/2021
 * 
 * Ultima Alteracao: Felipe Hugo
 * Data da ultima alteracao: 14/12/2021
 *
 */

#include "Pressao.h" 
#include <cstdlib>   // para usar srand() e rand()
#include <ctime>     // para usar time()



void Pressao::readSensor(){
	
	dataHora.setClockCalendar(16, 12, 2021, 19, 47, 0);
	// Simulacao de leitura de sensor
	srand (static_cast <unsigned> (time(0)));
	setValor(static_cast <float> (rand()) / static_cast <float> (RAND_MAX));
}

void Pressao::getData(){
	int d, me, a, h, m, s;
	 dataHora.getCalendar(d, me, a);
	 cout << d << "/" << me << "/" << a << endl;
	 dataHora.getClock(h, m, s);
	 cout << h << ":" << m << ":" << s << endl; 
}

void Pressao::setValid(bool newValid){
	valid = newValid;
}
bool Pressao::getValid(){
	return valid;
}

Pressao::Pressao(){
	valid = false;
}
Pressao::~Pressao(){
	valid = false;
}

float Pressao::getValue(){
	return getValor();
}

void Pressao::setIdent(int ident){
    setID(ident);
}
int Pressao::getIdent(){
    return getID();
}
