/*
   File Node.h

   Class Node

   Class Node stores integer values for a linked list.
   
   This file has the Node's interface (header file).

   Eduardo Augusto Bezerra <eduardo.bezerra@ufsc.br>
   Departamento de Engenharia Eletrica

   Data da criacao: Abril de 2006.
   Data da ultima alteracao: 8 de outubro de 2015.

*/
#include <iostream>
#include <stdio.h>
#include <string>

//#include "headers.h"
using namespace std;
class Node {

    int ID;
    string Date;
    Node* next;

  public:
         
    Node(int newID, string newDate, Node* nxt);
    int getID();
    string getDate();
    Node* getNext();
    void setID(int newID);
    void setDate(string newDate);
    void setNext(Node* nxt);
};