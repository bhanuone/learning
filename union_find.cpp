#include <iostream>
#include <vector>
using namespace std;

int getRoot(int * A, int i) {
  while(A[i] != i) {
    i = A[i];
  }
  return i;
}

void Union(int a, int b, int * A) {
  int rootA = getRoot(A, a);
  int rootB = getRoot(A, b);
  A[rootA] = rootB;
}

bool find(int a, int b, int * A) {
  if(getRoot(A, a) == getRoot(A, b)) {
    cout << a << " and " << b << " are connected" << endl;
  } else {
    cout << a << " and " << b << " not connected" << endl;
  }
}

int main() {
  int A[10];
  for(int i = 0; i < 10; i++) {
    A[i] = i;
  }
  Union(0, 1, A);
  Union(1, 2, A);
  Union(2, 3, A);
  Union(3, 4, A);
  Union(4, 5, A);
  Union(5, 6, A);
  Union(6, 7, A);
  Union(7, 8, A);
  Union(8, 9, A);
  find(0, 9, A);
  find(9, 0, A);
  find(0, 0, A);
  return 0;
}
