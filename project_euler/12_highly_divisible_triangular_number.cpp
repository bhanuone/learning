#include <iostream>
#include <cmath>

using namespace std;

int noOfDivisors(int n) {
  float sr = sqrt(n);
  int divisors = 0;
  for(int i = 1; i <= sr; i++) {
    if (n % i == 0) {
      divisors += 2;
    }
  }
  return divisors;
}

int main() {
  int requiredDivisors = 500, n = 0, i = 1;
  while (noOfDivisors(n) < requiredDivisors) {
    n += i;
    i++;
  }
  cout << n << endl;
  return 0;
}
