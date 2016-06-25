#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * next;
};

void Insert(Node ** head, int value);
void Print(Node * head);
void PrintReverse(Node * head);
int main(int argc, char const *argv[])
{
  Node * head =  new Node();
  head = NULL;
  Insert(&head, 5);
  Insert(&head, 4);
  Insert(&head, 3);
  Insert(&head, 2);
  Insert(&head, 1);
  Print(head);  
  PrintReverse(head);  
  return 0;
}

void Insert(Node ** head, int value) {
  Node * temp1 = new Node();
  temp1->data = value;
  temp1->next = *head;
  *head = temp1;
}

void Print(Node * head) {
  Node * temp = head;
  if(temp == NULL) {cout << endl;return;}
  cout << temp->data << " ";
  Print(temp->next); // recursive call
}

void PrintReverse(Node * head) {  
  if(head == NULL) {cout << endl;return;}
  PrintReverse(head->next); // recursive call
  cout << head->data << " ";
}