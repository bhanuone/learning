#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 9;
  int * p;
  p = &a;
  int ** pp = &p;
  int *** ppp = &pp;
  int **** pppp = &ppp;
  cout << *p << endl; // (*&)a -> a
  cout << **pp  << endl; // **(&p) -> *(*&)p -> *p -> *(&a) -> a
  cout << ***ppp << endl;
  cout << ****pppp << endl;
  return 0;
}