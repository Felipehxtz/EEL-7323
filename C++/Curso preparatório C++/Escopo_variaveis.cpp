#include <iostream>
using namespace std;
int num_global = 12;//variavel global
void foo()
{
	int num = 10;// variavel local
	static int num_static = 1;
// static mantem o valor da variavel mesmo depois de sair dela
	cout << "variavel local: " << num << endl;
	cout << "variavel global: " << num_global << endl;
	num_static++;
	cout << "variavel estatica: " << num_static << endl;
}

int main(int argc, char** argv)
{
	foo();
	foo();
	foo();
	return 0;
}