#include <iostream>
using namespace std;

int local_max(int A[][5], int column) {
  int max = A[column][0], max_index = 0;
  for(int i = 0; i < 5; i++) {
    if(A[column][i] > max) {
      max = A[column][i];
      max_index = i;
    }
  }
  return max_index;
}

int main() {
  const int m = 5,n = 5;
  int A[][n] = {
                {1, 27, 3, 4, 5},
                {6, 7, 8, 9, 1000},
                {111, 12, 13, 14, 15},
                {16, 17, 18, 109, 20},
                {21, 22, 23, 24, 2}
              };
  int j = m / 2;
  int steps = 0;
  while(1) {
    steps += 1;
    int i = local_max(A, j);
    if(i < 5 && j < 5) {
      if(A[j][i] >= A[j + 1][i] && A[j - 1][i] <= A[j][i]) {
        cout << A[j][i] << endl;
        cout << "steps " << steps << endl;
        break;
      } else if(A[j + 1][i] > A[j][i] && A[j - 1][i] < A[j][i]) {
        j = j + 1;
      } else {
        j = j - 1;
      }
    } else {
      cout << "steps " << steps << endl;
      break;
    }
  }
  return 0;
}