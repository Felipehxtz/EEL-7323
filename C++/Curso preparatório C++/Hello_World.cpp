#include <iostream>
using namespace std; //namespace
int main()
{
	/*
	Autor:
	Institui��o:
	Data:
	Descri��o:
	Data da ultima altrea��o:
	*/
	int y, *p, x;//declara��o de vari�vel
    y = 0;
	p = &y;//p aponta para o endere�o de y
	x = *p;//x recebe valor da vari�vel apontada por p, no caso y
	x = 4;
	(*p)++;//soma 1 na vari�vel apontada por p
	x--;
	(*p) += x;// faz a opera��o y + x
	cout << "y = " << y;
	return(0);
	/*
	int * p;
	int a = 3;
	*p = a;
	(*p)++;//muda o valor da vari�vel apontada pelo ponteiro
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