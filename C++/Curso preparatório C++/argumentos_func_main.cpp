#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	//char* array = new char[100];
	//cout << "argv[0]: " << argv[0] << endl;
	cout << "Quantidade de argumentos: " << argc << endl;
	cout << "Argumentos passados: " << endl;
	for(int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	return 0;
}