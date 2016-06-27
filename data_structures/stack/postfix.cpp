#include <iostream>
#include <stack>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
  map<char, int> precedence = {{'+', 0}, {'-', 0}, {'*', 1}, {'/', 1}};
  string expression = "a+d/g-v*r";
  stack<char> stk;
  for(int i = 0; i < expression.length(); i++) {
    if(expression[i] == '(' or expression[i] == '+' or expression[i] == '-' or expression[i] == '*' or expression[i] == '/') {
      stk.push(expression[i]);
    }
    else if(expression[i] == ')') {
      while(true) {
        char popping = stk.top();
        if(popping == '(') {
          stk.pop();
          break;
        }
        cout << popping;
        stk.pop();
      }
    }
    else {
      cout << expression[i];
    }
  }
  while(!stk.empty()) {
    cout << stk.top();
    stk.pop();
  }
  return 0;
}