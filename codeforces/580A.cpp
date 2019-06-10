#include <iostream>

using namespace std;

int main() {
  int N, tmp1, tmp2, maxLength = 1, currentMax = 1;
  cin >> N;
  cin >> tmp1;
  for(int i = 1; i < N; i++) {
    cin >> tmp2;
    if(tmp2 >= tmp1) {
      ++currentMax;
    } else {
      currentMax = 1;
    }
    tmp1 = tmp2;
    maxLength = max(currentMax, maxLength);
  }
  cout << maxLength << endl;
  return 0;
}