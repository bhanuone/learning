#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  int n = 105000;
  int k = 10001;
  bool primes[n];
  float stop = sqrt(n);
  for(int i = 2; i < n; i++) { primes[i] = true; }
  for(int i = 2; i < stop; i++) {
    for(int j = i + 1; j < n; j++) {
      if(primes[j] && j % i == 0) primes[j] = false;     
    }
  }
  int pCount = 1;
  for(int i = 2; i < n; i++) {
    if(primes[i]) {
      if(pCount == k) {
        cout << i << endl;
        break;
      }
      pCount++;
    }
  }
  return 0;
}
