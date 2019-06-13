#include <iostream>

using namespace std;

int main() {
  int n = 100;
  int sumOfn = (n * (n + 1)) / 2;
  int sumOfSquares = sumOfn * (2*n + 1) / 3;
  cout << (sumOfn * sumOfn) - sumOfSquares << endl;
  return 0;
}