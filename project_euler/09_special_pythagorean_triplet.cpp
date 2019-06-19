#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n = 500, sum = 1000;
  bool found = false;
  for(int a = 1; a < n + 1; a++) {
    if (found) {break;}
    for(int b = a + 1; b < n + 1; b++) {
      if (found) {break;}
      for(int c = b + 1; c < n + 1; c++) {
        if ((a*a+b*b) == (c*c) && a + b + c == sum) {
          found = true;
          cout << a << " " << b << " " << c << endl;
          cout << (a * b * c) << endl;
          break;
        }
      }
    }
  }
  return 0;
}
