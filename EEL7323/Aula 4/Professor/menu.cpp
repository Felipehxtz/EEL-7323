/*
 * Autor: Felipe Hugo Costa de Oliveira
 * Instituicao: UFSC
 * Data: 23/11/2021
 * Arquivo: menu.cpp
 * Descricao: Exercicio referente � aula 4
 *
 * Compilado no Falcon C++
 *
 *
 */
#include <iostream>
#include<string>
#include "Professor.cpp"
//#include "Professor.cpp"
using namespace std;
static const int MAX = 20;
int main(){
    
    
    Professor cadastroProfessores[MAX];
    std::string newNome;
    int newIdentidade, operacao, posicao;
    bool end = false;
    
    while(!end){

        cout << endl << "Escolha a operacao desejada: " << endl;
        cout << "Digite [1] para cadastrar novo Professor" << endl;
        cout << "Digite [2] para consultar Professor" << endl;
        cout << "Digite [3] para listar todos os Professores" << endl;
        cout << "Digite [4] para excluir um Professor" << endl;
        cout << "Digite [5] para alterar dados de um Professor" << endl;
        cout << "Digite [6] para sair do programa" << endl;
        cin >> operacao;
        switch (operacao)
        {
        case 1:
            for(int i = 0; i <= MAX; i++){
                if(i == 20){
                    cout << "nao ha mais vagas." << endl;
                    break;
                }
                
                if(cadastroProfessores[i].getNome() == ""){
                    cout << "Nome: "<< endl;
                    cin >> newNome;
                    cadastroProfessores[i].setNome(newNome);
                    cout << "Identidade: " << endl;
                    cin >> newIdentidade;
                    cadastroProfessores[i].setIdentidade(newIdentidade);
                    break;
                }
            };
            break;
        case 2:
            cout << "Digite o numero de identidade do Professor: " << endl;
            cin >> newIdentidade;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newIdentidade == cadastroProfessores[i].getIdentidade())
                    posicao = i;
                };

            if(posicao != -1){
                cout << "Professor consultado eh: " << endl;
                cout << "-> " << cadastroProfessores[posicao].getNome() << endl;
                cout << "-> " << cadastroProfessores[posicao].getIdentidade() << endl;
                break;
                }
                cout << "Identidade nao encontrada." << endl;
                break;
                
            break;    
        case 3:
            cout << "Lista de Professores: " << endl;
            for(int i = 0; i <= MAX; i++){
                    if(cadastroProfessores[i].getNome() != ""){
                        cout << "Nome: -> " << cadastroProfessores[i].getNome() << endl;
                        cout << "Identidade -> " << cadastroProfessores[i].getIdentidade() << endl;
                        
                    }
                else 
                    break;
                    
                    
            };
            break;
        case 4:
            cout << "Digite o numero de identidade do Professor a ser excluido: " << endl;
            cin >> newIdentidade;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newIdentidade == cadastroProfessores[i].getIdentidade()){
                    posicao = i;
            }
                };
                if(posicao != -1){
                    cadastroProfessores[posicao].~Professor();
                }
                else{
                    cout << "numero de identidade nao encontrado." << endl;
                }
            
            break;
        case 5:
            cout << "Digite o numero de identidade do Professor: " << endl;
            cin >> newIdentidade;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newIdentidade == cadastroProfessores[i].getIdentidade()){
                    posicao = i;
                }
            };    
                if(posicao != -1){
                    cout << "Digite um novo nome: " << endl;
                    cin >> newNome;
                    cadastroProfessores[posicao].setNome(newNome);
                    break;
                }
                else
                    cout << "Identidade nao encontrada." << endl;
            break;
        case 6:
            end = true;
            break;

        default:
            cout << "Nenhuma opção selecionada, tente novamente" << endl;
            break;    
        }
        
        
        }
    return 0;
    }
