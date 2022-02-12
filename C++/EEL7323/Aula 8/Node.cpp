#include "Node.h"
// Constructor - initializes the node
//
Node::Node(int dat, int hr, int mn, int s, int d, int m, int yr, Node* nxt){
val = dat;
hour = hr;
min = mn;
sec = s;
day = d; 
mon = m;
year = yr;
next = nxt;
}
// getVal returns the integer value stored in the node
//
int Node::getVal(){
return val;
}
//getDate returns the date and time
int Node::getDate(){
    cout << "Date: " << hour << ":" <<  min << ":" << sec << " - " << day << "/" << mon << "/" << year << endl;
    return 0;
}
// getNext returns a pointer for the next node in the linked list
//
Node* Node::getNext(){
return next;
}
// setVal stores the integer value in the node
//
void Node::setVal(int dat){
val = dat;
}
void Node::setDate(int hr, int mn, int s, int d, int m, int yr){
     hour = hr;
     min = mn;
     sec = s;
     day = d; 
     mon = m;
     year = yr;

}
// setNext stores the pointer to the next node in the list in the "next" field
//
void Node::setNext(Node* nxt){
next = nxt;
}