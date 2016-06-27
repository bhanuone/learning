#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * next;
};

void Insert(Node ** head, int position, int data) {
  Node * temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL;
  if(position == 1) {
    temp1->next = *head; 
    *head = temp1;
    return;
  }
  Node * temp2 = *head;
  for(int i = 0; i < position - 2; i++) {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void Delete(Node ** head, int position) {
  Node * temp = *head;
  if(position == 1) {
    *head = temp->next;
    delete temp;
    return;   
  }
  for(int i = 0; i < position - 2; i++) {
    temp = temp->next;
  }
  Node * temp1 = temp->next;
  Node * temp2 = temp1->next;  
  temp->next = temp2;
  delete temp1;
}

void Print(Node ** head) {
  Node * temp = *head;
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}


int main() {
  Node * head = new Node();
  head = NULL;
  Insert(&head, 1, 2); //2 
  Insert(&head, 2, 5); //2, 5
  Insert(&head, 1, 6); //6, 2, 5  
  Insert(&head, 2, 4); //6, 4, 2, 5
  Insert(&head, 1, 7); //7, 6, 4, 2, 5
  Insert(&head, 3, 9); //7, 6, 9, 4, 2, 5
  Insert(&head, 5, 10);//7, 6, 9, 4, 10, 2, 5
  Print(&head);
  Delete(&head, 2);
  Print(&head);
}