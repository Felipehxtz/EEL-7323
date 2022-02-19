	#include <iostream>
	using namespace std;
	/*
	Autor: Felipe Hugo Costa de Oliveira
	Instituição: Universidade Federal de Santa Catarina
	Data: 31/10/2021
	Descrição: Exercícios sobre ponteiros
	Data da ultima altreação:
	*/
	
	
	
	
	
	int main(int argc, char *argv[])
	{
		int a[10];
		a[0] = 0;
		a[1] = 1;
		int* pa;
		//a = pa; isso não é valido
		//a++; isso não é valido
		
		pa = a;//pa aponta para o endereço de mem a[0], inicio do vetor
		pa = &a[0];//linha de cima faz a mesma coisa que essa
		cout << a << endl;
		cout << *pa << endl;
		cout << *(a+1) << endl;//a[i] pode ser escrito como *(a+i)
		cout << a[1] << endl;
		pa++;// faz ponteiro apontar para o proximo end de mem
		cout << pa << endl;// imprime o proximo end de mem
		cout << *pa << endl;// imprime o a[1]
		
			/* Q4
		int x[100][100];
		int* p = x[0];
		
		for(int i = 1; i < 10001; i++)
		{
			*p = i;
			*(p++);

		}
		for(int j = 0; j < 100; j++)
		{
			for(int k = 0; k < 100; k++)
			{
				cout << x[j][k];
			}
			cout << endl;
		} 
		*/  	
		return 0;
	}
	
	
	
	
	
	
	
	
	/*
	void swap(int* x, int* y)
	{
		int aux;
		aux = *x;
		*x = *y;
		*y = aux;
		
	}
	
	
	int main()
	{
		int i = 10;
		int* x;
		int j = 20;
		int* y;
		x = &i;
		y = &j;
		swap(x, y);
		cout << "Valores de i e j agora sao: " << endl;
		cout << i << endl;
		cout << j << endl;
		return 0;
	}
	*/
	
	
	
	/*
	typedef struct {
		int largura;
		int altura;
		unsigned *bits;
	} Image;
	
int main() {
	Image pic1;
	Image *pImage = &pic1;
	pic1.largura = 100;
	cout << "pic1.largura == " << pic1.largura << endl;
	cout << "pImage->largura == " << pImage->largura << endl;
	cout << "(*pImage).largura == " << (*pImage).largura << endl;
	cout << "(&pic1)->largura == " << (&pic1)->largura << endl;
	// -> e' o operador ponteiro para membro de struct, class, union
	// Quais as saidas apos a execucao da instrucao abaixo?
	(*pImage).largura = 50;
	cout << "pic1.largura == " << pic1.largura << endl;
	cout << "pImage->largura == " << pImage->largura << endl;
	cout << "(*pImage).largura == " << (*pImage).largura << endl;
	cout << "(&pic1)->largura == " << (&pic1)->largura << endl;
	*/
	
	/*
	int main(int argc, char *argv[])
	{
	int x, *p;
	x = 10;
	*p = 50;
	cout << "p: " << p << endl;
	p = &x;
	cout << "p: " << *p << endl;
	p = &x;
	cout << "p: " << p << endl;
	*/
	
	/*	
	int x, *p, **q;
	p = &x;
	q = &p;
	x = 10;
	cout << " q = " << **q<< endl;
	*/
	
	
	
	/*
	int y, *p, x;//declaração de variável
    y = 0;
	p = &y;//p aponta para o endereço de y
	x = *p;//x recebe valor da variável apontada por p, no caso y
	x = 4;
	(*p)++;//soma 1 na variável apontada por p
	x--;
	(*p) += x;// faz a operação y + x
	cout << "y = " << y;
	return(0);
	*/
	
	/*
	int * p;
	int a = 3;
	*p = a;
	(*p)++;//muda o valor da variável apontada pelo ponteiro
	cout << "ponteiro: " << *p << endl;
	cout << "ponteiro: " << *p << endl;
    *(p++);// muda o valor da memoria apontado pelo ponteiro
	cout << "ponteiro: " << *p << endl;
	*(p+10);//???
	cout << "ponteiro: " << *(p+10) << endl;
	*/
	