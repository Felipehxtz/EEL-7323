/*
 * file: Temperatura.cpp
 *
 * Descricao: Implementacao da Classe Temperatura utilizada para realizar a leitura do sensor de temperatura, e data data/hora da leitura realizada.
 *
 * Autor: Eduardo Augusto Bezerra
 * Data: 09/12/2021
 * 
 * Ultima Alteracao: Felipe Hugo
 * Data da ultima alteracao: 16/12/2021
 *
 */

#include "Temperatura.h" 
#include <cstdlib>   // para usar srand() e rand()
#include <ctime>     // para usar time()


void Temperatura::readSensor(){
	dataHora.setClockCalendar(16, 12, 2021, 19, 47, 0);
	// Simulacao de leitura de sensor
	srand (static_cast <unsigned> (time(0)));
	//readSensor Lê sensor e chama setValor para passar o valor lido para valor.
	setValor(static_cast <float> (rand()) / static_cast <float> (RAND_MAX));
}

void Temperatura::getData(){
	 int d, me, a, h, m, s;
	 dataHora.getCalendar(d, me, a);
	 cout << d << "/" << me << "/" << a << endl;
	 dataHora.getClock(h, m, s);
	 cout << h << ":" << m << ":" << s << endl; 
}

void Temperatura::setValid(bool newValid){
	valid = newValid;
}
bool Temperatura::getValid(){
	return valid;
}

Temperatura::Temperatura(){
	
	valid = false;
}
Temperatura::~Temperatura(){
	
	valid = false;
}

float Temperatura::getValue(){
	return getValor();
}

void Temperatura::setIdent(int ident){
    setID(ident);
}
int Temperatura::getIdent(){
    return getID();
}