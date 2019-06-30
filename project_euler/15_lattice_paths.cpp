#include <iostream>

using namespace std;

const int n = 20;
long cache[n + 1][n + 1];

int main() {

  for(int i = 0; i < n + 1; i++) {
    for(int j = 0; j < n + 1; j++) {
      if (i == n || j == n) {
        cache[i][j] = 1;
      } else {
        cache[i][j] = 0;
      }
    }
  }
  cache[0][0] = 0;

  for(int i = n - 1; i >= 0; i--) {
    for(int j = n - 1; j >= 0; j--) {
      cache[i][j] += (cache[i][j + 1] + cache[i + 1][j]);
    }
  }

  cout << cache[0][0] << endl;
  return 0;
}

