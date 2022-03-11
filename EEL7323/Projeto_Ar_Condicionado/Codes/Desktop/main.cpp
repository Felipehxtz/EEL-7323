/************************************************************
 * Arquivo main.cpp - Interface Desktop para se obter dados do uControlador
 *
 *
 *
 * Author: Felipe Hugo
 * Date: 03/03/2022
 * 
 * Last change: 
 * Date: 
 * 
 *************************************************************/

#include "UartLinux.cpp"
#include "Lista.cpp"

int main(){
   int operacao;
   int i = 0;
   string data1;
   Lista  lista;
   string data_uart[265];
   Uart *ptr1;             // Uart.cpp
   ptr1 = new UartLinux(); // UartLinux.cpp

   ptr1->openSerial(1);     // UartLinux.cpp
   //cout << ptr1->sendCommand() << endl;
   lista.insertBeforeFirst("0001","01/01/2022", "18:30:00");
   //cout << "valor: " << lista.readFirstID() << endl;
   //cout << "valor: " << lista.readFirstDate() << endl;
   //cout << "valor: " << lista.readFirstHour() << endl;
   lista.insertBeforeFirst("0001","02/02/2022", "18:30:00");
   //cout << "valor: " << lista.readFirstID() << endl;
   //cout << "valor: " << lista.readFirstDate() << endl;
   //cout << "valor: " << lista.readFirstHour() << endl;
   lista.insertBeforeFirst("0001","10/03/2022", "18:30:00");
   lista.insertBeforeFirst("0001","25/05/2022", "18:30:00");
   lista.insertBeforeFirst("0001","30/06/2022", "18:30:00");
   //cout << "valor: " << lista.readFirstID() << endl;
   //cout << "valor: " << lista.readFirstDate() << endl;
   //cout << "valor: " << lista.readFirstHour() << endl;
   
   while(true){
      if(/*porta serial conectada*/){
         while( != NULL){
            
            ptr1->sendCommand() << endl;
            string data_uart[i] = ptr1;
            i++;
                    
         }
         lista.insertBeforeFirst(string data_uart[i],string data_uart[i], string data_uart[i]);

      }
      cout << "Digite 1 para listar todos os eventos em um determinado intervalo de tempo" << endl;
      cout << "Digite 2 para obter tempo total que o sistema se manteve ligado" << endl;
      cin >> operacao;
      switch (operacao)
      {  
         //case 1: 
         // ptr1->sendCommand() << endl;
            //delete ptr1;
         case 1:
            cout << "Digite a data: " << endl;
            cout << "OBS: Sera listado todos os eventos da data selecionada ate a mais antiga." << endl;
            cin >> data1;
            //cout << "data1: " << data1 << endl;
            lista.listSelect(data1);
            break;
         case 2:
            break;


  default:
      break;
  }

  
  }
  delete ptr1;
  return 0; // success

}

