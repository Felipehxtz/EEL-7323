#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	/*int var = 10;
	int* p1, * p2;
	p1 = &var;
	p2 = &var;
	*p2 = 20;//altera o valor contido no endere�o de var
	*p1 = 15;
	
	cout << var << endl;
	//cout << p1 << endl;
	//cout << p2 << endl;
	*/
	const double PI = 3.1415;
	const int vet[] = {1,2,3};
	const int* p1;// n�o � possivel alterar o VALOR apontado pelo ponteiro
	int const* p2;// n�o � possivel alterar o VALOR apontado pelo ponteiro
	int* const p3 = new int[3];//n�o � poss�vel alterar o ENDERE�O apontado pelo ptr
	const char* const p4 = "Felipe";//N�o podemo mudar o VALOR nem ENDERE�O
	*p3 = 1;
	*(p3 + 1) = 2;
	*(p3 + 2) = 3;
	cout << *p3 << endl;
	cout << *(p3 + 1) << endl;
	cout << *(p3 + 2) << endl;
	cout  << PI << endl;
	return 0;
}