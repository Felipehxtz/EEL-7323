#include "Fila.cpp"
//UTILIZADO PARA TESTAR A IMPLEMENTAÇÃO DA FILA. PODE SER USADO PARA TESTAR A LISTA
int main(){

    cout << "Hellow World" << endl;
    Fila fila;
    //int saida;
    cout << "testando" << endl;
    fila.insertAfterLast(5,"Felipe");
    fila.insertAfterLast(10,"Hugo");
    fila.insertAfterLast(15,"Costa");
    cout << "O valor é: " << fila.readFirstID() << endl;
    cout << "O valor é: " << fila.readFirstDate() << endl; 
    fila.removeFirst();
    cout << "O valor é: " << fila.readFirstID() << endl;
    cout << "O valor é: " << fila.readFirstDate() << endl;
    fila.removeFirst();
    cout << "O valor é: " << fila.readFirstID() << endl;
    cout << "O valor é: " << fila.readFirstDate() << endl;


return 0;
}