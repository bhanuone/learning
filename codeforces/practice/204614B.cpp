#include <iostream>

using namespace std;

int main() {
  int N, breaks = 0;  
  string current, last;
  cin >> N;
  cin >> last;
  for(int i = 1; i < N; i++) {
    cin >> current;
    if(current[0] == last[1]) ++breaks;
    last = current;
  }
  cout << (breaks + 1) << endl;
  return 0;
}