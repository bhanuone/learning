#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  int n = 2000000;
  bool primes[n];
  float stop = sqrt(n);
  for(int i = 2; i < n; i++) { primes[i] = true; }
  for(int i = 2; i < stop; i++) {
    for(int j = i + 1; j < n; j++) {
      if(primes[j] && j % i == 0) primes[j] = false;
    }
  }
  long primesSum = 0;
  for(int i = 2; i < n; i++) {
    if(primes[i]) {
      primesSum += i;
    }
  }
  cout << primesSum << endl;
  return 0;
}
