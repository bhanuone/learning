#include <iostream>
#include <vector>
using namespace std;

int getRoot(int * A, int i) {
  while(A[i] != i) {
    i = A[i];
  }
  return i;
}

void WeightedUnion(int a, int b, int * A, int * S) {
  int rootA = getRoot(A, a);
  int rootB = getRoot(A, b);
  if(S[rootA] > S[rootB]) {
    A[rootB] = rootA;
    S[rootA] += S[rootB];
  } else {
    A[rootA] = rootB;
    S[rootB] += S[rootA];
  }
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
  int S[10];
  for(int i = 0; i < 10; i++) {
    A[i] = i;
    S[i] = 1;
  }
  WeightedUnion(0, 1, A, S);
  WeightedUnion(1, 9, A, S);
  WeightedUnion(2, 3, A, S);
  WeightedUnion(5, 4, A, S);
  WeightedUnion(6, 4, A, S);
  WeightedUnion(3, 6, A, S);
  WeightedUnion(7, 8, A, S);
  WeightedUnion(8, 9, A, S);
  WeightedUnion(9, 3, A, S);
  find(1, 3, A);
  find(5, 0, A);
  find(2, 8, A);
  for(int i = 0; i < 10; i++) {cout << S[i] << " ";}
  cout << endl;
  return 0;
}
