#include <iostream>
#include "modulo.h"
using namespace std;

int main(int argc, char** argv)
{
	int n;
	cout << "digite um valor: " << endl;
	cin >> n;
	cout << "Fatorial de " << n << ": " << fatorial(n) << endl;
	cout << "Area do quadrado de lado " << n << " e: " << area_quadrado(n) << endl;
	return 0;
}