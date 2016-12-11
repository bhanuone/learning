#include <iostream>

using namespace std;

class Queue {
  static const int n = 10;
  int A[n], front = -1, rear = -1;
public:
  void enqueue(int el) {
    if(full()) {
      cout << "Queue is full" << endl;
      return;
    }
    if(empty()) {
      rear = front = 0;
      A[rear] = el;
    } else {
      rear = (rear + 1) % n;
      A[rear] = el;
      // front = (front + 1) % n;
      // A[front] = el;
    }
  }

  int dequeue() {
    if(empty()) {
      cout << "Queue is empty." << endl;
      return -1;
    }
    int removed = A[front];
    cout << "removed: " << A[front] << endl;
    if(front ==  rear) {
      front = rear = -1;
    } else {
      front = (front + 1) % n;
    }
    return removed;
  }

  void next() {
    if(empty()) {
      return;
    }
    cout << A[front] << endl;
  }

  void print() {
    if(empty()) {
      cout << "Queue empty" << endl;
      return;
    }
    int count = (rear+n-front)%n + 1;
    cout<<"Queue       : ";
    for(int i = 0; i <count; i++)
    {
      int index = (front+i) % n; // Index of element while travesing circularly from front
      cout<<A[index]<<" ";
    }
    cout<<"\n\n";
  }
private:
  bool empty() {
    // cout << front << " " << rear << endl;
    return (front == -1 && rear == -1);
  }

  bool full() {
    return (rear + 1) % n == front;
  }
};

int main(int argc, char const *argv[])
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.dequeue();
  q.dequeue();
  q.enqueue(5);
  q.dequeue();
  q.enqueue(6);
  q.dequeue();
  q.enqueue(7);
  q.enqueue(8);
  q.print();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.next();
  q.dequeue();
  q.dequeue();
  q.print();
  // q.next();
  return 0;
}