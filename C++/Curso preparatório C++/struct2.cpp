#include <iostream>
using namespace std;

struct pessoa
{
//struct é público por padrão, mas podemos deixa-lo como privado como 
//nas inhas abaixo
//Também pode ser chamado de encapsulamento(public, private, protect)
//private: 
	int idade;
	pessoa(int idade);
	
	void setIdade(int idade)
	{
		this->idade = idade;
	}
	int getIdade()
	{
		return idade;
	}
};
pessoa::pessoa(int idade)// :: operador de escopo, separa prototipo 
//do construtor
{
	this->idade = idade;// esse atributo recebe idade
}
int main(int argc, char *argv[])
{
	pessoa p(20);
	//p.setIdade(20);
	cout << p.getIdade() << endl;;   	
	return 0;
}