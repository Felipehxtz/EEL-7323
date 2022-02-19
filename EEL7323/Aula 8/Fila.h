#include "Node.cpp"
class List {
Node* head;
public:
List();
~List();
//void insertBeforeFirst(int dat);
void insertAfterLast(int dat);
int readFirst();
int removeFirst();
void insertionSort(int value);//??
int removeNode(int dat);
void listAll();
};