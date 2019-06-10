#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int A[] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int sum = 0, best = 0, N = 8;
  for(int i = 0; i < N; i++) {
    sum =  max(A[i], A[i] + sum);
    best = max(sum, best);
    cout << sum << ' ' << best << endl;
  }
  cout << "Max sum of sub-array " << best << endl;
  return 0;
}