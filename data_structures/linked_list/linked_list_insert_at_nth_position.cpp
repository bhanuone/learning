#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node * next;  
};

Node * head = new Node();

void Insert(int value, int position) {    
  Node * temp1 = new Node();
  temp1->data = value;
  temp1->next = NULL;  
  if(position == 1) {
    temp1->next = head;
    head = temp1;
    return;
  }
  Node * temp2 = head;
  for(int i = 0; i < position - 2; i++) {    
    temp2 = temp2->next; // traverse upto n - 1 node
  }
  temp1->next = temp2->next;
  temp2->next = temp1;  
}

void Print() {
  Node * temp = head;  
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main(int argc, char const *argv[])
{  
  head = NULL;  
  Insert(2, 1);  
  Insert(5, 2);
  Insert(6, 1);
  Insert(4, 2);
  Insert(7, 1);  
  Insert(9, 3);
  Insert(10, 5); 
  Print();
  return 0;
}
