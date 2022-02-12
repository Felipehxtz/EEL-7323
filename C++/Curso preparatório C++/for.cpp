#include <iostream>
using namespace std;
int main(int argc, char** argv)

{
	int n;
	int  fact = 1;
//for(parte1; parte2; parte3)parte1:executada 1 vez; parte2: condição; parte3: incremento
	/*for(n=1; n <= 100; n++)	
	{
		cout << n << endl;		
	}
	*/
	cout << " digite um valor:" << endl;
	cin >> n;
	for(n; n != 0; n--)
	{
		fact = fact*n;
	} 
	cout << "O fatorial do valor escolhido e: " << fact << endl;
	return 0;
}