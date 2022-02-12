#include <iostream>
using namespace std;

void mensagem(int n)
{
	cout << "numero: " << n << endl;
}
void mensagem()
{
	cout << "hello world" << endl;
}

int main(int argc, char** argv)
{
	mensagem(10);
	mensagem();
	return 0;
}