#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	/*int var = 10;
	int* p1, * p2;
	p1 = &var;
	p2 = &var;
	*p2 = 20;//altera o valor contido no endereço de var
	*p1 = 15;
	
	cout << var << endl;
	//cout << p1 << endl;
	//cout << p2 << endl;
	*/
	const double PI = 3.1415;
	const int vet[] = {1,2,3};
	const int* p1;// não é possivel alterar o VALOR apontado pelo ponteiro
	int const* p2;// não é possivel alterar o VALOR apontado pelo ponteiro
	int* const p3 = new int[3];//não é possível alterar o ENDEREÇO apontado pelo ptr
	const char* const p4 = "Felipe";//Não podemo mudar o VALOR nem ENDEREÇO
	*p3 = 1;
	*(p3 + 1) = 2;
	*(p3 + 2) = 3;
	cout << *p3 << endl;
	cout << *(p3 + 1) << endl;
	cout << *(p3 + 2) << endl;
	cout  << PI << endl;
	return 0;
}