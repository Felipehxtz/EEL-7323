#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;	 	
}; 

int getIdade(Pessoa pessoas[], char nome[])
{
	int tam = sizeof(pessoas);
	
	for(int i = 0; i < tam; i++)
	{
		if(strcmp(nome, pessoas[i].nome) == 0)
			return pessoas[i].idade;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	/*
	Pessoa p1 = {"Felipe", "46452375865", 24};//p1 é um objeto da classe Pessoa
	//strcpy(p1.nome, "Felipe");
	//strcpy(p1.cpf, "46452375865");
	//p1.idade = 24;
	cout << "Nome: " << p1.nome << endl;	
	cout << "Cpf: " << p1.cpf << endl;
	cout << "Idade: " << p1.idade << endl;
	*/
	Pessoa pessoas[3]
	{
		{"Felipe", "46452375865", 24},
		{"Jaqueline", "12345678952", 28},
		{"Bruna", "35795185245", 29},	
	};
	cout << "Nome: " << pessoas[1].nome << endl;
	int idade = getIdade(pessoas, "Jaqueline");
	if(idade != -1)
	{
		cout << "Idade da Jaque: " << idade << endl;
    }
    else
	{
		cout << "Pessoa n encontrada" << endl;
	}
	return 0;
}