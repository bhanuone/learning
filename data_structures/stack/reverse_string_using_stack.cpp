#include <iostream>
#include <stack>
using namespace std;


int main(int argc, char const *argv[])
{
  string str = "Bhanu Prakash";
  stack<char> stk;
  for(int i = 0; i < str.length(); i++) {
    stk.push(str[i]);
  }
  for(int i = 0; i < str.length(); i++) {
    str[i] = stk.top();
    stk.pop();
  }  
  cout << str << endl;
  
  //The better way
  int i = 0, j = str.length() - 1;
  while(i < j) {
    str[i] ^= str[j];
    str[j] ^= str[i];
    str[i++] ^= str[j--];    
  }
  cout << str << endl;
  return 0;
}