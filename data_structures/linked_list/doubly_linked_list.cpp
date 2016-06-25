#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * next;
  Node * prev;
};

Node * head;

Node * GetNewNode(int value) {
  Node * newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

// insert element at head
void InsertAtHead(int value) {
  Node * newNode = GetNewNode(value);
  if(head == NULL) {
    head = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

// insert element at tail
void InsertAtTail(int value) {
  if(head == NULL) {
    InsertAtHead(value);
    return;
  }
  Node * newNode = GetNewNode(value);
  Node * temp = head;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  newNode->prev = temp;
  temp->next = newNode;
}

// print from head to tail
void Print() {
  Node * temp = head;
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

// print in reverse order 
void ReversePrint() {
  Node * temp = head;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->prev;
  }
  cout << endl;
}

// driver
int main(int argc, char const *argv[])
{
  InsertAtHead(2);Print();ReversePrint();
  InsertAtHead(5);Print();ReversePrint();
  InsertAtTail(9);Print();ReversePrint();
  InsertAtHead(12);Print();ReversePrint();
  InsertAtTail(53);Print();ReversePrint();
  return 0;
}