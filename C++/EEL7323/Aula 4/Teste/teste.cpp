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
#include "Professor.cpp"
//#include "Aluno.h"
using namespace std;
static const int MAX = 20;
//////////////////////////////teste herança Professor//////////////////

int main(){
    
    
    Professor cadastroProfessores[MAX];
    std::string newNome,newData;
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
                    cout << "Data de nascimento: " << endl;
                    cin >> newData;
                    cadastroProfessores[i].setNascimento(newData);
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
                cout << "Nome-> " << cadastroProfessores[posicao].getNome() << endl;
                cout << "Nascimento-> " << cadastroProfessores[posicao].getNascimento() << endl;
                cout << "Indentidade-> " << cadastroProfessores[posicao].getIdentidade() << endl;
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
                        cout << "Data de nascimento: " << cadastroProfessores[i].getNascimento() << endl;
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
                    cout << "Digite nova data de nascimento: " << endl;
                    cin >> newData;
                    cadastroProfessores[posicao].setNascimento(newData); 
                    break;
                }
                else
                    cout << "Identidade nao encontrada." << endl;
            break;
        case 6:
            end = true;
            break;

        default:
            cout << "Nenhuma opÃ§Ã£o selecionada, tente novamente" << endl;
            break;    
        }
        
        
        }
    return 0;
    }




//////////////////////////////test herança Aluno//////////////////
/*
int main(){
    
    
    Aluno cadastroAlunos[MAX];
    std::string newNome, newData;
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
                    cout << "Data de nascimento: " << endl;
                    cin >> newData;
                    cadastroAlunos[i].setNascimento(newData);
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
                cout << "-> " << cadastroAlunos[posicao].getNascimento() << endl;
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
                        cout << "Data de nascimento: " << cadastroAlunos[i].getNascimento() << endl;
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
                    cout << "Digite uma nova data de nascimento: " << endl;
                    cin >> newData;
                    cadastroAlunos[posicao].setNascimento(newData);
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
            cout << "Nenhuma opcao selecionada, tente novamente" << endl;
            break;    
        }
        
        
        }
    return 0;
    }

	*/