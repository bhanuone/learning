#include <iostream>
/* #include <string> */
#include <vector>

using namespace std;

int getInt(char c) {
  return (int) c - '0';
}

int main() {
  vector<string> input;
  for(int i = 0; i < 100; i++) {
    string number;
    cin >> number;
    input.push_back(number);
  }


  /* for(vector<string>::iterator it = input.begin(); it != input.end(); it++) { */
  /*   cout << *it << endl; */
  /* } */

  /* cout << input.size() << endl; */
  vector<char> sum;
  int place = 0;
  string digitSumStr; 
  int carry = 0;
  while (place < 50) {
    int digitSum = 0;
    for (int i = 0; i < 100; i++) {
      digitSum += getInt(input[i][place]);
    }
    string sumStr = to_string(digitSum);
    int len = sumStr.length();
    if (place < 49) {
      carry = atoi(sumStr.substr(0, len - 1).c_str());
      sum.insert(sum.begin(), 1, sumStr[len - 1]);
    } else {
      for(int j = 0; j < len; j++) {
       sum.insert(sum.begin(), 1, sumStr[len - (j + 1)]); 
      }
    }
    place++;
  } 
  for(vector<char>::iterator it = sum.begin(); it != sum.end(); it++) {
    cout << *it;
  }
  return 0;
}
