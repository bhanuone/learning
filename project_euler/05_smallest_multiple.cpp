#include <iostream>

using namespace std;

int main() {
  int n = 20;
  long smallestMultiple = 1;
  for(int i = 0; i < n; i++) { smallestMultiple }
  bool found = false;
  while(!found) {
    found =  true;
    for(int i = 0; i < n; i++) {
      if(smallestMultiple % (i + 1) != 0) {
        found = false;
      }
    }
    smallestMultiple++;
  }
  cout << smallestMultiple - 1 << endl;
  return 0;
}
