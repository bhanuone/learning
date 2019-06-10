#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N];
  bool adjusted = false;
  for(int i = 0; i < N; i++) cin >> A[i]; 
  while(!adjusted) {
    for(int j = N - 1; j > 0; j--)  {
      int diff = A[j] - A[j - 1];
      if(diff < 0) {
        A[j] -= diff;
        A[j - 1] += diff; 
      }
    }
    adjusted = true;
    for(int j = 0; j < N - 1; j++) {
      if(A[j] > A[j + 1]) {
        adjusted = false;
        break;
      }
    }
  }
  for(int j = 0; j < N; j++) {
    cout << A[j] << " ";
  }
  cout << endl;
  return 0;
}