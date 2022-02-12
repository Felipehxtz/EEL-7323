#ifndef PRESSAO_H
#define PRESSAO_H
/*
 * file: Pressao.h
 *
 * Descricao: Classe Pressao utilizada para realizar a leitura do sensor de Pressao, e data data/hora da leitura realizada.
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

class Pressao : virtual public Sensor, public ClockCalendar{
	    ClockCalendar dataHora;
		bool valid;// guarda a informação se o valor é valido ou não
		
	public:	
		void getData();
		float getValue();
		void readSensor();
		Pressao();
    	~Pressao();
    	void setValid(bool);
    	bool getValid();
		void setIdent(int);
		int getIdent();
};
#endif
