/*
   File Fila.cpp

   

*/
#include <iostream>
#include "Fila.h"

Fila::Fila() {
   head = 0;
}

Fila::~Fila() {
  Node* cursor = head;
  while(head) {
    cursor = cursor->getNext();
    delete head;
    head = cursor;
  }
  head = 0; // Officially empty
} 

/*
void List::insertBeforeFirst(int dat) {
  head = new Node(dat, head);
}
*/

void Fila::insertAfterLast(string newID, string newDate, string newHour) {
  Node* p = head;
  Node* q = head;

  if (head == 0) // lista está vazia?
     head = new Node(newID, newDate, newHour, head);
  else {
     while (q != 0) {
        p = q;
        q = p->getNext();
     }
     p->setNext(new Node(newID, newDate, newHour,0));
  }
}


string Fila::readFirstID() {
   return head->getID(); 
}

string Fila::readFirstDate(){
   return head->getDate();
}

string Fila::readFirstHour(){
   return head->getHour();
}

string Fila::removeFirst() {
  string retID = "";
  string retDate;
  if (head != 0){
     cout << "Removendo: " << head << endl;
     cout << "e fica:" << head->getID() << endl;
     cout << "e tambem:" << head->getDate() << endl;
     retID = head->getID();
     retDate = head->getDate();
     Node* oldHead = head;
     head = head->getNext();
     delete oldHead;
  }
  return retID;
}

