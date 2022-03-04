/*
   File Fila.h

*/

#include "Nodo.cpp"
#include <stdio.h>

class Fila{

  Node* head; //aponta para o primeiro elemento da lista

public:
  Fila();
  ~Fila();
  //void insertBeforeFirst(int dat);
  void insertAfterLast(int newID, string newDate); //Add new at row
  int readFirstID();
  string readFirstDate();
  int removeFirst(); //Remove first at row
  //void insertionSort(int value);
  //int removeNode(int dat);
  //void listAll();
};