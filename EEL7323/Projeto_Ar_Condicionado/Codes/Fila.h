/*
   File List.h

   Header file for class list

   Class List stores Nodes (class Node) in a linked list.
   
   This file has the List's interface (header file).

   Class list is definition for a linked list, having the following operations:

   1. Initialize the list to an empty list.
   2. Free the nodes of a list.
   3. Determine whether a list is empty.
   4. (NOT YET!) Add a node with a given value into the list following
      the first node with another given value.
   5. Add a node with a given value to the front of the list.
   6. Add a node with a given value to the end of the list.
   7. Delete the first node from the list.

   Eduardo Augusto Bezerra <eduardo.bezerra@ufsc.br>
   Departamento de Engenharia Eletrica

   Data da criacao: Abril de 2006.
   Data da ultima alteracao: 8 de outubro de 2015.

*/

#include "Nodo.cpp"
#include <stdio.h>

class Fila {

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