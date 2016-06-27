#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * next;
};

// function for inserting a value at the beginning of the linked list
 void Insert(Node ** head, int value) {
  Node * temp = new Node();
  temp->data = value;
  temp->next = *head;
  *head = temp;
}

void Print(Node * head) {
  Node * temp = head;
  cout << "list is: ";
  while(head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}
int main() {  
  Node * head = NULL;  
  int n;
  cout << "Enter no of elements: " << endl;
  cin >> n;  
  for(int i = 0; i < n; i++) {
    int value;
    cout << "Enter value to be inserted: ";
    cin >> value;
    Insert(&head, value);
    Print(head);
  }  
  return 0;
}
