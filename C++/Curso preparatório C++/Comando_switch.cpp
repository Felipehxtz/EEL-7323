#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
/*	int num = 12;
	switch(num)
	{
		case 9:
		   	cout << "numero 9";
			break;
		case 10:
			cout << "numero 10";
			break;
		case 11: 
			cout << "numero 11";
			break;
		default:
			cout << "numero nao encontrado";
	}
//case (apenas constantes, não permitido operações)
*/	
	   int num1, num2, resultado;
	   char op;
	   cout << "Digite o primeiro valor:" << endl;	
	   cin >> num1;
	   cout << "Digite o segundo valor:" << endl;
	   cin >> num2;
	   cout << "Digite a operacao desejada:" << endl;
	   cin >> op;
	   switch(op)
	   {
	   	case '+':
	   		resultado = num1 + num2;
	   		cout << "Soma:" << resultado << endl;
	   		break;
	   	case '-':
	   		resultado = num1 - num2;
	   		cout << "Subtracao:" << resultado << endl;
	   		break;
	   	case '*':
	   		resultado = num1 * num2;
	   		cout << "Multiplicacao:" << resultado << endl;
	   		break;
	   	case '/':
	   		if(num2 != 0)
			   {
				 resultado = num1 / num2;
                 cout << "Divisao:" << resultado << endl;
	   		   }
	   		   else{ cout << "divisao por zero";}
	   		break;
	   	default:
	   		cout << "ERRO, TENTE NOVAMENTE";
	   		
	   }
	return 0;
}