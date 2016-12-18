#include <iostream>
using namespace std;

struct Node {
  int data;
  Node * next;
};

class Queue {
  Node * front;
  Node * rear;

public:
  Queue() {
    front = rear = NULL;
  }

  void enqueue(int data) {
    cout << "enqueue start\n";
    Node * elm = getNode(data);
    if(isEmpty()) {
      cout << "first insert\n";
      front = rear = elm;
      return;
    } else {
      rear->next = elm;
      rear = elm;
    }
  }

  void dequeue() {
    if(isEmpty()) {
      cout << "Queue empty" << endl;
      return;
    }
    cout << front->data << " removed\n";
    Node * temp = front;
    front = front->next;
    delete [] temp;
  }

  void printQueue() {
    if(isEmpty()) {
      cout << "Queue empty\n";
    } else {
      Node * tmp = front;
      while(tmp != NULL) {cout << tmp->data << " "; tmp = tmp->next;}
      cout << endl;
    }
  }

private:
  bool isEmpty() {
    return (front == NULL && rear == NULL);
  }

  Node * getNode(int data) {
    Node * node = new Node();
    node->data = data;
    node->next = NULL;
    return node;
  }
};

int main() {
  Queue q = Queue();
  q.dequeue();
  q.enqueue(6);
  q.enqueue(4);
  q.enqueue(5);
  q.printQueue();
  q.dequeue();
  // q.dequeue();
  q.printQueue();
}