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
#include "Aluno.cpp"
#include "Professor.cpp"
#include "Aluno.h"
#include "Professor.h"
using namespace std;
static const int MAX = 20;

int main(){
    
   Aluno cadastroAlunos[MAX];
   Professor cadastroProfessores[MAX];
   std::string newNome, newData;
   int newMatricula, newNota1, newNota2, operacao, posicao;
   bool end = false;
   
   
    while(!end){

        cout << endl << "Escolha a operacao desejada: " << endl;
        cout << "Digite [1] para fazer login" << endl;
        cout << "Digite [2] para fazer logout" << endl;
        cout << "Digite [3] para incluir aluno" << endl;//+2 campos
        cout << "Digite [4] para excluir um aluno" << endl;
        cout << "Digite [5] para alterar dados de um aluno" << endl;//+2 campos
        cout << "Digite [6] para consultar um aluno" << endl;
        cout << "Digite [7] para listar todos os alunos" << endl;
        cout << "Digite [8] para incluir professor" << endl;
        cout << "Digite [9] para excluir um professor" << endl;
        cout << "Digite [10] para alterar dados de um professor" << endl;
        cout << "Digite [11] para consultar um professor" << endl;
        cout << "Digite [12] para listar todos os professores" << endl;
		cin >> operacao;
		if(operacao == 1){
			
		}
        switch (operacao)
        {
        case 1:
            //Terminar depois
                     
            break;
        case 2:
            //Terminar depois
                
                
            break;    
        case 3:
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
                    cout << "Digite sua identidade: " << endl;
                    cin >> newMatricula;
                    cadastroAlunos[i].setIdentidade(newMatricula);
                    break;
                }
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
                    cout << "Digite sua identidade: " << endl;
                    cin >> newMatricula;
                    cadastroAlunos[posicao].setIdentidade(newMatricula);
                    break;
                }
                else
                    cout << "Matricula nao encontrada." << endl;
            
            break;
        case 6:
        	cout << "Digite o numero de matricula do aluno: " << endl;
            cin >> newMatricula;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newMatricula == cadastroAlunos[i].getMatricula())
                    posicao = i;
                };

            if(posicao != -1){
                cout << "Aluno consultado eh: " << endl;
                cout << "Nome-> " << cadastroAlunos[posicao].getNome() << endl;
                cout << "Data de nascimento-> " << cadastroAlunos[posicao].getNascimento() << endl;
                cout << "Matricula-> " << cadastroAlunos[posicao].getMatricula() << endl;
                cout << "Nota p1-> " << cadastroAlunos[posicao].getNota1() << endl;
                cout << "Nota p2-> " << cadastroAlunos[posicao].getNota2() << endl;
                cout << "Media-> " << cadastroAlunos[posicao].getMedia() << endl;
                //cout << "Cadastrado pelo professor-> " << endl;
                newMatricula = cadastroAlunos[posicao].getIdentidade();
                posicao = -1;
            	for(int i = 0; i <= MAX; i++){
                	if(newMatricula == cadastroProfessores[i].getIdentidade())
                   	    posicao = i;
                	};

            	if(posicao != -1){
                	cout << "Cadastrado pelo professor->" << endl;
                	cout << "Nome-> " << cadastroProfessores[posicao].getNome() << endl;
                	cout << "Nascimento-> " << cadastroProfessores[posicao].getNascimento() << endl;
                	cout << "Indentidade-> " << cadastroProfessores[posicao].getIdentidade() << endl;
                	break;
                }
                cout << "Identidade nao encontrada." << endl;
                break;
                
                }
                cout << "Matricula nao encontrada." << endl;
                break;
        	
        	break;
        case 7:
        	cout << "Lista de alunos: " << endl;
            for(int i = 0; i <= MAX; i++){
                    if(cadastroAlunos[i].getNome() != ""){
                        cout << "Nome: -> " << cadastroAlunos[i].getNome() << endl;
                        cout << "Data de nascimento: " << cadastroAlunos[i].getNascimento() << endl;
                        cout << "Matricula -> " << cadastroAlunos[i].getMatricula() << endl;
                        cout << "Nota 1 -> " << cadastroAlunos[i].getNota1() << endl;
                        cout << "Nota 2 -> " << cadastroAlunos[i].getNota2() << endl;
                        cout << "Media -> " << cadastroAlunos[i].getMedia() << endl;
                        cout << "Cadastrado pelo professor-> " << endl;
                		newMatricula = cadastroAlunos[i].getIdentidade();
                		posicao = -1;
            			for(int j = 0; j <= MAX; j++){
               			 	  if(newMatricula == cadastroProfessores[j].getIdentidade()){
                   	   	   	   	    posicao = j;
								}
               	   	    };

            			if(posicao != -1){
               	   	   	    cout << "Cadastrado pelo professor->" << endl;
               	   	   	    cout << "Nome-> " << cadastroProfessores[posicao].getNome() << endl;
               	   	   	    cout << "Nascimento-> " << cadastroProfessores[posicao].getNascimento() << endl;
               	   	   	    cout << "Indentidade-> " << cadastroProfessores[posicao].getIdentidade() << endl;
               	   	   	    break;
    					}
               	   	    cout << "Identidade nao encontrada." << endl;
               	   	    break;
                   	   }
                		else 
                    		break;
                    
                    
            };
        	
        	break;
        case 8:
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
                    cin >> newMatricula;
                    cadastroProfessores[i].setIdentidade(newMatricula);
                    break;
                }
            };
        	
        	break;
        case 9:
        	cout << "Digite o numero de identidade do Professor a ser excluido: " << endl;
            cin >> newMatricula;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newMatricula == cadastroProfessores[i].getIdentidade()){
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
        case 10:
        	cout << "Digite o numero de identidade do Professor: " << endl;
            cin >> newMatricula;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newMatricula == cadastroProfessores[i].getIdentidade()){
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
        case 11:
        	cout << "Digite o numero de identidade do Professor: " << endl;
            cin >> newMatricula;
            posicao = -1;
            for(int i = 0; i <= MAX; i++){
                if(newMatricula == cadastroProfessores[i].getIdentidade())
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
        case 12:
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
		   	
	
	
	
	
	
	
	
	
	/*case 6:
            end = true;
            break;

        default:
            cout << "Nenhuma opção selecionada, tente novamente" << endl;
            break;    
        }
        
        */
        }
    
    }
    return 0;
}
