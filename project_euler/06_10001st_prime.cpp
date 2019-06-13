#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  int n = 100000;
  int k = 10001;
  bool primes[n];
  float stop = sqrt(n);
  for(int i = 2; i < n; i++) { primes[i] = true; }
  for(int i = 2; i < stop; i++) {
    for(int j = i + 1; j < n; j++) {
      if(primes[j] && j % i == 0) primes[j] = false;     
    }
  }
  int primeCount = 0;
  int pcIndex;
  for(int i = 2; i < n; i++) {     
    cout << "jkk" << endl;
    if(primes[i]) { primeCount++; }
    if(primeCount == k) {
      pcIndex = i;
      break;
    }
  }
  cout << endl << pcIndex << endl;
  return 0;
}