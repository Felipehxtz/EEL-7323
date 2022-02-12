#include <iostream>
using namespace std; //namespace
int main()
{
	/*
	Autor:
	Instituição:
	Data:
	Descrição:
	Data da ultima altreação:
	*/
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
	//cout << "Hello world\n";
	return 0;
	*/
}