/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 14/12/2021
 * Arquivo: cadastroTemp.h
 * Descricao: Classe para Cadastro de temperaturas em vetores
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */
static const int NT = 20;
#include "Temperatura.cpp"
class cadastroTemp: virtual public Temperatura{

    
    bool valid;
public:
    Temperatura vTemperatura[NT];
    //void defID(int);
    //int readID();
    void setTemp(); 
    void exTemp(float, float);
    void consultTemp(float, float);
    void listTemp();  

};

