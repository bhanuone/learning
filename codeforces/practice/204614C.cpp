#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  bool mark = true;
  while(n > 0  && m > 0) {
    --n;
    --m;
    mark = !mark;
  }
  if(mark)
    cout << "Malvika" << endl; 
  else
    cout << "Akshat" << endl;
  return 0;
}
