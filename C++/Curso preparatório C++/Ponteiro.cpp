#include <iostream>
using namespace std;
/*void foo(int* n)
{
	*n = 20;
}
*/

int my_strlen(char * str)
{
	int tam = 0;
	while(*str != '/0')
	{
		str++;
		tam++;
	}
	return tam;
}

char * my_strcat(char * dest, char * orig)
{
	char * resultado = NULL;
	int tam_dest = my_strlen(dest);
	int tam_orig = my_strlen(orig);
	resultado = new char[tam_destdest + tam_orig];
	while(*dest != '0')
	{
		*resultado = *dest;
		*resultado++
		*dest++
	}
	return resultado;
}




int main(int argc, char* argv[])
{
	
	char * nome1 = new char[100];
	char * nome2 = new char[100];
	char * resultado;
	cout << "Digite o primeiro nome: ";
	cin >> nome1;
	cout << "Digite o segundo nome: ";
	cin >> nome2;
	//cout << my_strlen(nome1) << endl;
	cout << "Resultado: " << my_strcat(nome1, nome2) << endl;
	/*int var = 10;
	int* pvar;
	pvar = &var;// &var: endereço da variavel var
	foo(pvar); 
	cout << *pvar << endl;
	*/
	
	/*int* vet = new int[10];
	int aux[10];
	
	*(vet + 0) = 10;
	*(vet + 1) = 20;
	*(vet + 2) = 30;
	aux[0] = 10;
	aux[1] = 20;
	aux[2] = 30;
	for(int i = 0; i < sizeof(aux)/sizeof(int); i++)
		cout << aux[i] << endl;
		//sizeof(aux)/sizeof(int) = 4*4/4
	cout << *(aux) << endl;
	cout << *(aux + 1) << endl;
	cout << *(aux + 2) << endl;
	*/
	/*cout << "Digite um numero: ";
	cin >> aux[0];
	//cin >> *(aux + 0);
	cout << "Voce digitou: " << aux[0] << endl;
	cout << "Digite outro numero: ";
	cin >> *(aux + 1);
	cout << "Voce digitou: " << *(aux + 1);
	delete[] vet;
	
	
	int array[] = {1,2,3,4,5};
	int* parray = &array[0];
	int i = 0;
	while(i < 5)
	{
		cout << *parray << endl;
		parray++;
		i++;
	}
	*/
	
	return 0;
}