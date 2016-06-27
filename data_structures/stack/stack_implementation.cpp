#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * below;
};
class Stack {
  Node * top = NULL;

  Node * getNewNode(int value) {
    Node * newNode = new Node();
    newNode->data = value;
    newNode->below = NULL;
    return newNode;
  }
public:
  void push(int value) {
    Node * newNode = getNewNode(value);
    if(top == NULL) {
      top = newNode;
      return;
    }
    newNode->below = top;
    top = newNode;
  }

  void pop() {
    if(top == NULL) {
      cout << "stack underflow" << endl;
      return;
    }
    Node * tempTop = top;
    top = top->below;
    // int popped = tempTop->data;
    delete tempTop;
    // return popped;
  }

  bool isEmpty() {
    if(top == NULL) return true;
    return false;
  }

  void print() {
    Node * temp = top;
    while(temp != NULL) {
      cout << temp->data << " ";
      temp = temp->below;
    }
    cout << endl;
  }

  void peek() {
    if(!isEmpty()) {
      cout << "Top elm: " << top->data << endl;
      return;
    }
    cout << "Stack empty." << endl;
  }
};

int main(int argc, char const *argv[])
{
  Stack stk;
  stk.push(7);
  stk.print();
  stk.push(6);
  stk.print();
  stk.push(3);
  stk.print();
  stk.peek();
  stk.pop();
  stk.print();
  stk.pop();
  stk.print();
  stk.pop();
  stk.pop();
  stk.peek();

  return 0;
}