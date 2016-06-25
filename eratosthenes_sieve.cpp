#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  int n = 100;
  bool primes[n];
  float stop = sqrt(n);
  for(int i = 2; i < n; i++) { primes[i] = true; }
  for(int i = 2; i < stop; i++) {
    for(int j = i + 1; j < n; j++) {
      if(primes[j] && j % i == 0) primes[j] = false;     
    }
  }
  int count = 0;
  for(int i = 2; i < n; i++) {     
    if(primes[i]) {cout << i << " "; count++;}
  }
  cout << endl << count << endl;
  return 0;
}