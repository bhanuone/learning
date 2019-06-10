#include <iostream>

using namespace std;


bool valid(char A[], char B[], int n) {
  bool check = true;
  for(int i = 0; i < n; i++) {
    if(A[i] != B[i]) {
      check = false;
      break;
    }
  }
  return check;
}

void rotate(char B[]) {
  char tmp = B[0];
  for(int i = 0; i < 4; i++) {
    B[i] = B[i + 1];
  }
  B[3] = tmp;
}

int main() {
  char a1, a2, a3, a4, b1, b2, b3, b4;
  cin >> a1 >> a2;
  cin >> a3 >> a4;
  cin >> b1 >> b2;
  cin >> b3 >> b4;
  char A[][2] = {{a1, a2}, {a3, a4}, '\0'};
  char B[][2] = {{b1, b2}, {b3, b4}, '\0'};
  int checkPoint[2];
  bool found = false;
  // cout << A[0] << endl;
  // cout << B[0] << endl;
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      if(A[i][j] == 'X') {
        checkPoint[0] = i;
        checkPoint[1] = j;
        found = true;
        break;
      }
    }
    if(found) break;
  }
  cout << checkPoint[0] << " " << checkPoint[1] << endl;
  if(true) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}