#include <iostream>

using namespace std;

int main() {
  int n = 20, k = 4;
  int data[n][n], maxProduct = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> data[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      /* Checking in right direction */
      if (j + k < n) {
        int prod = data[i][j]*data[i][j+1]*data[i][j+2]*data[i][j+3];
        maxProduct = max(maxProduct, prod);
      }
      /* Checking in down direction */
      if (i + k < n) {
        int prod = data[i][j]*data[i+1][j]*data[i+2][j]*data[i+3][j];
        maxProduct = max(maxProduct, prod);
      }
      /* Checking in down right direction */
      if (i + k < n && j + k < n) {
        int prod = data[i][j]*data[i+1][j+1]*data[i+2][j+2]*data[i+3][j+3];
        maxProduct = max(maxProduct, prod);
      }
      /* Checking in down left direction */
      if(j >= k && i < n - k) {
        int prod = data[i][j]*data[i+1][j-1]*data[i+2][j-2]*data[i+3][j-3];
        maxProduct = max(maxProduct, prod);
      }
    }
  }
  cout << maxProduct << endl;

  return 0;
}
