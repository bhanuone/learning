#include <iostream>

using namespace std;

int main() {
  int A, B, used = 0, hours = 0;
  cin >> A >> B;
  while(A > 0) {
    --A;
    ++hours;
    ++used;
    if(used == B) {
      ++A;
      used = 0;
    }
  }
  cout << hours << endl;
  return 0;
}