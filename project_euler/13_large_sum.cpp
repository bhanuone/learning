#include <iostream>
/* #include <string> */
#include <vector>

using namespace std;

int getInt(char c) {
  return (int) c - '0';
}

int getCarry(int n) {
  if (n < 10) {
    return 0;
  } else {
    return n / 10;
  }
}

int main() {
  vector<string> input;
  for(int i = 0; i < 100; i++) {
    string number;
    cin >> number;
    input.push_back(number);
  }
  vector<int> sum;
  int place = 49;
  string digitSumStr; 
  int carry = 0;
  while (place > -1) {
    int digitSum = carry;
    for (int i = 0; i < 100; i++) {
      digitSum += getInt(input[i][place]);
    }
    carry = getCarry(digitSum);
    int digit = digitSum % 10;
    sum.insert(sum.begin(), 1, digit);
    place--;
  }
  sum.insert(sum.begin(), 1, carry);
  for(vector<int>::iterator it = sum.begin(); it != sum.end(); it++) {
    cout << *it;
  }
  cout << endl;
  return 0;
}
