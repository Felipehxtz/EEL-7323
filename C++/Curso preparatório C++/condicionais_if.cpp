#include <iostream>
 using namespace std;
 
 int main(int argc, char** argv)
 {
	 int dinheiro = 20;
	 /*if(dinheiro > 10){cout << "autorizado";}
	 	else{cout << "n autorizado";}
	 if(dinheiro == 10){cout << "autorizado";}		
	 	 else{cout << "n autorizado";}*/
	if((dinheiro % 2 == 0 ) && (dinheiro < 20))
	{ 
		cout << "n e par e menor que 20";
	}		
	else{ cout << "dinheiro nao e par ou menor que 20";}
	 		
	 return 0;
 } 