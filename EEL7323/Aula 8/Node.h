#include "headers.h"
class Node {
int val;//ID
int hour, min, sec, day, mon, year;//Date/hour
Node* next;
public:
Node(int dat, int hr, int mn, int s, int d, int m, int yr, Node* nxt);
int getVal();
int getDate();
Node* getNext();
void setVal(int dat);
void setDate(int hr, int mn, int s, int d, int m, int yr)
void setNext(Node* nxt);
};