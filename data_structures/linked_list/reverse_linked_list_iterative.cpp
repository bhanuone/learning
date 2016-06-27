#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * next;
};
Node * head =  new Node();

void Reverse();
void Insert(int value);
void Print();
int main(int argc, char const *argv[])
{
  head = NULL;
  Insert(5);
  Insert(4);
  Insert(3);
  Insert(2);
  Insert(1);
  Print();
  Reverse();
  Print();
  Reverse();
  Print();
  return 0;
}

void Reverse() {  
  Node * current, * prev, * next;
  current = head;
  prev = NULL;
  while(current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

void Insert(int value) {
  Node * temp1 = new Node();
  temp1->data = value;
  temp1->next = head;
  head = temp1;
}

void Print() {
  Node * temp = head;
  while(temp != NULL) {
    cout << temp->data <<  " ";
    temp = temp->next;
  }
  cout << endl;
}