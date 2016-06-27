#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int n = 15;
  int stocks[] = {4, 3, 7, 5, 2, 1, 6, 23,12, 54, 74, 33,35, 56, 76};
  int spans[n];
  stack<int> S;
  for(int i = 0; i < n; i++) {
    int h = 0;
    bool done = false;
    while(not(S.empty() or done))     {
      if(stocks[i] >= stocks[S.top()]) {
        S.pop();
      }
      else {
        done = true;
      }
    }
    if(S.empty()) 
      h = -1;
    else 
      h = S.top();
    spans[i] = i - h;
    S.push(i);
  }
  for(int i = 0; i < n; i++) {
    cout << "Span of " << stocks[i] << ": " << spans[i] << endl;
  }
  return 0;
}