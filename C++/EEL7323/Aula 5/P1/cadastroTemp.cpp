
/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 14/12/2021
 * Arquivo: cadastroTemperatura.cpp
 * Descricao: Cadastro de temperaturas em vetores
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o teste teste.cpp
 *
 */
#include "cadastroTemp.h"

void cadastroTemp::setTemp(){
    for(int i = 0; i <= NT; i++)
                {
                    if(i == NT)
                    {
                        cout << "Memória cheia, exclua leituras de temperatura para liberar espaco." << endl;
                        break;
                    }
                    
                    if(vTemperatura[i].getValid() == false)
                    {
                        vTemperatura[i].readSensor();
                        vTemperatura[i].setValid(true);
                        break;
                    }
                }
}

void cadastroTemp::exTemp(float min, float max){
    for(int i = 0; i <= NT; i++){
        if(min <= vTemperatura[i].getValue() && vTemperatura[i].getValue() < max){
            vTemperatura[i].~Temperatura();
        }
    }
}

void cadastroTemp::consultTemp(float min, float max){
    for(int i = 0; i <= NT; i++){
        if(min < vTemperatura[i].getValue() && vTemperatura[i].getValue() < max){
            cout << "Temperatura: " << vTemperatura[i].getValue() << endl;
            vTemperatura[i].getData();

        }
            
    }
}

void cadastroTemp::listTemp(){
    cout << "Lista de temperatuas medidas: " << endl;
    for(int i = 0; i <= NT; i++){
        if(vTemperatura[i].getValid() == true){
            cout << i << "- " << vTemperatura[i].getValue() << endl;
            vTemperatura[i].getData();
        }

    }

}
