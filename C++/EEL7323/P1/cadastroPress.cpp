/*
 * file: cadastroPress.cpp
 *
 * Descricao:  Cadastro de pressao em vetores
 *
 * Autor: Felipe Hugo
 * Data: 09/12/2021
 * 
 * Ultima Alteracao: Felipe Hugo
 * Data da ultima alteracao: 14/12/2021
 *
 */
#include "cadastroPress.h"

void cadastroPress::setPress(){
    for(int i = 0; i <= NP; i++)
                {
                    if(i == NP)
                    {
                        cout << "Memória cheia, exclua leituras de Pressao para liberar espaco." << endl;
                        break;
                    }
                    
                    if(vPressao[i].getValid() == false)
                    {
                        vPressao[i].readSensor();
                        vPressao[i].setValid(true);
                        break;
                    }
                }
}

void cadastroPress::exPress(float min, float max){
    for(int i = 0; i <= NP; i++){
        if(min <= vPressao[i].getValue() && vPressao[i].getValue() < max){
            vPressao[i].~Pressao();
        }
    }
}

void cadastroPress::consultPress(float min, float max){
    for(int i = 0; i <= NP; i++){
        if(min < vPressao[i].getValue() && vPressao[i].getValue() < max){
            cout << "Pressao: " << vPressao[i].getValue() << endl;
            vPressao[i].getData();

        }
            
    }
}

void cadastroPress::listPress(){
    cout << "Lista de Pressao medidas: " << endl;
    for(int i = 0; i <= NP; i++){
        if(vPressao[i].getValid() == true){
            cout << i << "- " << vPressao[i].getValue() << endl;
            vPressao[i].getData();
        }

    }

}