#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int a = 89, b = 23;
  a ^= b;
  b ^= a;
  a ^= b;  
  cout << "a = " << a << " b = " << b << endl;
  return 0;
}
