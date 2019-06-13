#include <iostream>

using namespace std;

int main() {
  int n = 20;
  long smallestMultiple = 20;
  bool found = false;
  while(!found) {
    found =  true;
    for(int i = 0; i < n; i++) {
      if(smallestMultiple % (i + 1) != 0) {
        found = false;
      }
    }
    if(!found) {
      smallestMultiple += 20;
    }
  }
  cout << smallestMultiple << endl;
  return 0;
}

// run 1 - 85.6s

// Only even numbers
// run 2 - 42.8s

// Only multiples of 20
// run 3 - 4.5s
