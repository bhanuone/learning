#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  long int n = 745358336;
  int factors[78];
  int i = 3, j = 0;
  while(n % 2 == 0) {
    cout << 2 << " " << endl;
    factors[j++] = 2;
    n /= 2;
  }
  double max_factor = sqrt(n);
  while(i < max_factor) {
    while(n % i == 0) {
      n /= i;
      j++;
      // factors[j++] = i;
      cout << j << " " << i << endl;
      max_factor = sqrt(n);
    }
    i++;
  }
  if(n > 1) factors[j] = n;  
  return 0;
}