#include <iostream>
#include <cmath>

using namespace std;

class SortEstimate {
public:
  double howMany(int c, int time) {
    double lo = 0, t, n;
    double hi = 2000000000;
    while((hi - lo) > 1e-9) {
      n = lo + (hi - lo) / 2;
      t = log2(n) * c * n;
      if(t == time) return n;
      if(t > time) {
        hi = n;
      } else {
        lo = n;
      }
    }
    return n;
  }
};


int main(int argc, char const *argv[])
{
  // int c = 37;
  // int time = 12392342;
  int c = 1;
  int time = 4;
  SortEstimate * se = new SortEstimate();
  double result = se->howMany(c, time);
  cout << fixed << result << endl;
  return 0;
}