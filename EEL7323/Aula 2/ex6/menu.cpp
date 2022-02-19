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
#include "Aluno.cpp"
//#include "Aluno.h"
using namespace std;

int main(){
    
    int MAX = 20;
    Aluno cadastroAlunos[MAX];
    std::string newNome;
    int newMatricula, newNota1, newNota2, operacao, posicao;
    bool end = false;
    
    while(!end){

        cout << endl << "Escolha a operacao desejada: " << endl;
        cout << "Digite [1] para cadastrar novo aluno" << endl;
        cout << "Digite [2] para consultar aluno" << endl;
        cout << "Digite [3] para listar todos os alunos" << endl;
        cout << "Digite [4] para excluir um aluno" << endl;
        cout << "Digite [5] para alterar dados de um anulo" << endl;
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
                
                if(cadastroAlunos[i].getNome() == ""){
                    cout << "Nome: "<< endl;
                    cin >> newNome;
                    cadastroAlunos[i].setNome(newNome);
                    cout << "Matricula: " << endl;
                    cin >> newMatricula;
                    cadastroAlunos[i].setMatricula(newMatricula);
                    cout << "Nota da prova 1: " << endl;
                    cin >> newNota1;
                    cadastroAlunos[i].setNota1(newNota1);
                    cout << "Nota da prova 2: " << endl;
                    cin >> newNota2;
                    cadastroAlunos[i].setNota2(newNota2);
                    break;
                }
            };
            break;
        case 2:
            cout << "Digite o numero de matricula do aluno: " << endl;
            cin >> newMatricula;
            posicao = -1;//perguntat para o bruno
            for(int i = 0; i <= MAX; i++){
                if(newMatricula == cadastroAlunos[i].getMatricula())
                    posicao = i;
                };

            if(posicao != -1){
                cout << "Aluno consultado eh: " << endl;
                cout << "-> " << cadastroAlunos[posicao].getNome() << endl;
                cout << "-> " << cadastroAlunos[posicao].getMatricula() << endl;
                cout << "-> " << cadastroAlunos[posicao].getNota1() << endl;
                cout << "-> " << cadastroAlunos[posicao].getNota2() << endl;
                cout << "-> " << cadastroAlunos[posicao].getMedia() << endl;
                break;
                }
                cout << "Matricula nao encontrada." << endl;
                break;
                
            break;    
        case 3:
            cout << "Lista de alunos: " << endl;
            for(int i = 0; i <= MAX; i++){
                    if(cadastroAlunos[i].getNome() != ""){
                        cout << "Nome: -> " << cadastroAlunos[i].getNome() << endl;
                        cout << "Matricula -> " << cadastroAlunos[i].getMatricula() << endl;
                        cout << "Nota 1 -> " << cadastroAlunos[i].getNota1() << endl;
                        cout << "Nota 2 -> " << cadastroAlunos[i].getNota2() << endl;
                        cout << "Media -> " << cadastroAlunos[i].getMedia() << endl;
                    }
                else 
                    break;
                    
                    
            };
            break;
        case 4:
            cout << "Digite o numero de matricula do aluno a ser excluido: " << endl;
            cin >> newMatricula;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newMatricula == cadastroAlunos[i].getMatricula()){
                    posicao = i;
            }
                };
                if(posicao != -1){
                    cadastroAlunos[posicao].~Aluno();
                }
                else{
                    cout << "numero de matricula nao encontrado." << endl;
                }
            
            break;
        case 5:
            cout << "Digite o numero de matricula do aluno: " << endl;
            cin >> newMatricula;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newMatricula == cadastroAlunos[i].getMatricula()){
                    posicao = i;
                }
            };    
                if(posicao != -1){
                    cout << "Digite um novo nome: " << endl;
                    cin >> newNome;
                    cadastroAlunos[posicao].setNome(newNome);
                    cout << "Digite nova nota da Prova 1: " << endl;
                    cin >> newNota1;
                    cadastroAlunos[posicao].setNota1(newNota1);
                    cout << "Digite nova nota da Prova 2: " << endl;
                    cin >> newNota2;
                    cadastroAlunos[posicao].setNota2(newNota2);
                    break;
                }
                else
                    cout << "Matricula nao encontrada." << endl;
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
