/*
   File Lista.cpp

   Class List stores Nodes (class Node) in a linked list.
   
   This file has the implementation for class List

   Class list is definition for a linked list, having the following operations:

   1. Initialize the list to an empty list.
   2. Free the nodes of a list.
   3. Determine whether a list is empty.
   4. Add a node with a given value into the list following
      the first node with another given value.
   5. Add a node with a given value to the front of the list.
   6. Add a node with a given value to the end of the list.
   7. Delete the first node from the list.

   Eduardo Augusto Bezerra <eduardo.bezerra@ufsc.br>
   Departamento de Engenharia Eletrica

   Data da criacao: Abril de 2006.
   Data da ultima alteracao: 8 de outubro de 2015.

*/
#include <iostream>
#include <cstring>
#include "Lista.h"

Lista::Lista() {
   head = 0;
}

Lista::~Lista() {
  Node* cursor = head;
  while(head) {
    cursor = cursor->getNext();
    delete head;
    head = cursor;
  }
  head = 0; // Officially empty
} 


void Lista::insertBeforeFirst(string newID, string newDate, string newHour){
  head = new Node(newID, newDate, newHour, head);
}


void Lista::listSelect(std::string newDate) {
  Node* aux = head;
  string aux2 = aux->getDate();
  
  
   
   //cout << "func:" << strcasecmp(newDate.c_str(), aux2.c_str()) << endl;
  while(aux != 0){
   if(strcasecmp(newDate.c_str(), aux2.c_str()) < 0 ){
      cout << "nao encontrei, proximo." << endl;
      aux = aux->getNext();
      aux2 = aux->getDate();
   }
   else{
      while(aux != 0){
            cout << "ID: " << aux->getID() << endl;
            cout << "Data: " << aux->getDate() << endl;
            cout << "Hora: " << aux ->getHour() << endl;
            aux = aux->getNext();
   }
      
   }
  }
  
}
