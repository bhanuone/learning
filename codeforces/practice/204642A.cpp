#include <iostream>

using namespace std;


bool isDistinct(int year) {
  bool distinct = true;
  int A[4];
  int i = 3;
  int tmp = year;
  while(year > 0) {
    int digit = year % 10;
    A[i--] = digit;
    year /= 10;
  }
  for(int j = 0; j < 4; j++) {
    for(int k = 0; k < 4; k++) {
      if(j != k) {
        if(A[j] == A[k]) {
          distinct = false;
          break;
        }
      }
    }
  }
  return distinct;
}

int main() {
  int N;
  cin >> N;
  bool found = false;
  while(!found) {
    found = isDistinct(++N);
  } 
  cout << N << endl;
  return 0;
}