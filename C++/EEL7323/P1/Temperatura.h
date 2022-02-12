#ifndef TEMPERATURA_H
#define TEMPERATURA_H

/*
 * file: Temperatura.h
 *
 * Descricao: Classe Temperatura utilizada para realizar a leitura do sensor de temperatura, e data data/hora da leitura realizada.
 *
 * Autor: Eduardo Augusto Bezerra
 * Data: 09/12/2021
 * 
 * Ultima Alteracao: Felipe Hugo
 * Data da ultima alteracao: 16/12/2021
 *
 */

#include "Sensor.cpp"
#include "ClockCalendar.cpp"

class Temperatura : virtual public Sensor, public ClockCalendar{
	    ClockCalendar dataHora;
		bool valid; // guarda a informação se o valor é valido ou não
	public:
		void setIdent(int);
		int getIdent();
		float getValue();
		void readSensor();
		void getData();
		Temperatura();
    	~Temperatura();
    	void setValid(bool);
    	bool getValid(); 
    	 

		
};
#endif