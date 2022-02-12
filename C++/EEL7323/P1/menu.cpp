/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: menu.cpp
 * Descricao: Menu 
 *
 * Compilado no Falcon C++
 *
 *
 */
#include "cadastroPress.cpp"
#include "cadastroTemp.cpp"
#include <iostream>

int main(){
    cadastroTemp cadastroTemperatura;
    cadastroPress cadastroPressao;
    int operacao, newValue;
    bool end;
    float min, max;
    end = false;
    cout << "Digite o numero de identificacao do sensor: " << endl;
    cin >> newValue;
    cadastroTemperatura.setIdent(newValue);
    cout << "ID sensor: " << cadastroTemperatura.getIdent() << endl;
    
    while(!end){
        cout << endl << "Escolha a operacao desejada: " << endl;
        cout << "Digite [1] para ler o sensor de temperatura" << endl;
        cout << "Digite [2] para excluir faixa de temperatura" << endl;
        cout << "Digite [3] para consultar faixa de temperatura" << endl;//+2 campos
        cout << "Digite [4] para listar todas as temperatuas medidas" << endl;
        cout << "Digite [5] para ler sensor de pressao" << endl;//+2 campos
        cout << "Digite [6] para excluir faixa de pressao" << endl;
        cout << "Digite [7] para consultar faixa de pressao" << endl;
        cout << "Digite [8] para listar todas as pressoes medidas" << endl;
        cin >> operacao;
        switch (operacao)
        {
            case 1:
                
                cadastroTemperatura.setTemp();
                break;
            case 2:
                cout << "Digite faixa de temperatura a ser excluida: " << endl;
                cout << "Valor minimo: " << endl;
                cin >> min;
                cout << "Valor maximo: " << endl;
                cin >> max;
                cadastroTemperatura.exTemp(min, max);
                
                break;
            case 3:
                cout << "Digite faixa de temperatura a ser consultada: " << endl;
                cout << "Valor minimo: " << endl;
                cin >> min;
                cout << "Valor maximo: " << endl;
                cin >> max;
                cadastroTemperatura.consultTemp(min, max);
                
                
                break;
            case 4:
                cadastroTemperatura.listTemp();
                
                break;
            case 5:
                cadastroPressao.setPress();
                
                break;
            case 6:
                cout << "Digite faixa de pressao a ser excluida: " << endl;
                cout << "Valor minimo: " << endl;
                cin >> min;
                cout << "Valor maximo: " << endl;
                cin >> max;
                cadastroPressao.exPress(min, max);
                
                break;
            case 7:
                cout << "Digite faixa de pressao a ser consultada: " << endl;
                cout << "Valor minimo: " << endl;
                cin >> min;
                cout << "Valor maximo: " << endl;
                cin >> max;
                cadastroPressao.consultPress(min, max);
                
                break;
            case 8:
                cadastroPressao.listPress();
                
                break;
            
        }
    }






}
