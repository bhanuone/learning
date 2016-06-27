#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node * next;
};

Node * head = new Node();

void Insert(int value) {  
  Node * temp = new Node();
  temp->data = value;  
  temp->next = head;
  head = temp;
}

void Print() {
  Node * temp = head;
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void Reverse(Node * np) {
  if(np->next == NULL) {
    head = np;
    return;
  }
  Reverse(np->next);
  np->next->next = np;
  np->next = NULL;
}

int main(int argc, char const *argv[])
{
  head = NULL;
  Insert(7);
  Insert(4);
  Insert(5);
  Insert(6);
  Print();
  Reverse(head);
  Print();
  return 0;
}