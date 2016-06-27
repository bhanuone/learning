/* Stack implementation using an array
    - Bhanu Prakash P
      31/5/2016
*/
#include <iostream>
using namespace std;

#define STACKSIZE 200
typedef struct
{
  int size = 0;
  int items[STACKSIZE];
} Stack;

// push an element
void push(Stack * sp, int ele) {
  if(sp->size == STACKSIZE) {
    cout << "Stack overflow" << endl;    
  }
  else {
    sp->items[sp->size++] = ele;
  }  
}

// pop an element
int pop(Stack * sp) {
  if(sp->size == 0) {
    cout << "Stack underflow" << endl;
    return -1;
  }
  else {
    return sp->items[--sp->size];
  }
}
int main(int argc, char const *argv[])
{
  Stack s; //stack declaration
  Stack * sp; //pointer to the stack
  sp = &s; // pointing to the stack
  cout << endl << "Pushing 200 elements" << endl;
  for(int i = 0; i < 200; i++) {
    push(sp, i);
  }
  // push 1 more for stack overflow
  push(sp, 89);
  cout << endl << "Popping all elements" << endl << endl;
  for (int i = 199; i >= 0; i--)
  {
    cout << pop(sp) << " ";
  }
  cout << endl << endl;
  // pop 1 more item for stack underflow
  pop(sp);
  return 0;
}