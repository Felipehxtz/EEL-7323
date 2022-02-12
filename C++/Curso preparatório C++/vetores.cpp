#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	/*
	int vetor[100];
	for(int i = 0; i < 100; i++)
	{
		vetor[i] = i; 
	}
	for(int i = 0; i < 100; i++)
	{
		cout << vetor[i] << endl;   	
	} 
	cout << sizeof(vetor) << endl;
// inteiros tem 4 bytes
// char tem 1 byte...
	*/
	
	//char nome[] = {'f', 'e', 'l', 'i','p','e' '/0'};
	//cout << nome << endl;
	char nome[] = "Felipe";
	int i = 0;
	do{
		cout << nome[i];
		
	}while(nome[i++]);
	return 0;
}