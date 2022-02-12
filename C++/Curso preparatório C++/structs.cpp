#include <iostream>
# include <string.h>
using namespace std;

typedef struct pessoa
{
	char nome[100];
	int idade;
	
}t_pessoa;

int main(int argc, char *argv[])
{
	/*
	t_pessoa p;
	strcpy(p.nome, "felipe");
	p.idade = 26;
	cout << "Nome: " << p.nome << endl;
	cout << "Idade: " << p.idade << endl;
	*/
	t_pessoa* p;
	p->idade = 26;//-> para acessar ponteiros em struct
	
	return 0;
}