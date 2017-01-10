// Author: bhanu
// 11/01/2017
// Doug Mcllroy's Algorithm
#include <iostream>
using namespace std;
int count = 0;
void swap(int i, int j, char * str) {
  str[i] ^= str[j];
  str[j] ^= str[i];
  str[i] ^= str[j];
  count++;
  return;
}

void reverse(int i, int j, char * str) {
  while(i < j) {
    count++;
    swap(i, j, str);
    i++;
    j--;
  }
  return;
}
int main() {
  int n = 9, d = 5;
  char input[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '\0'};
  cout << input << endl;
  reverse(0, d - 1, input);
  cout << input << endl;
  reverse(d, n, input);
  cout << input << endl;
  reverse(0, n, input);
  cout << input << endl;
  cout << count << endl;
  return 0;
}
  
