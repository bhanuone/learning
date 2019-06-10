#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int a = 7;
  cout << (a & ~(a - 1)) << endl << __builtin_popcount(a) << endl;
  return 0;
}