#include <iostream>
#include <stack>
#include <map>
using namespace std;


int main(int argc, char const *argv[])
{
  stack<char> stk;
  map<char, char> braces = { {')', '('}, {']', '['}, {'}', '{'}};
  string str = "()";
  for(int i = 0; i < str.length(); i++) {
    if(str[i] == '(' or str[i] == '[' or str[i] == '{') {
      stk.push(str[i]);
    } else if(str[i] == ')' or str[i] == ']' or str[i] == '}')  {
      if(stk.empty() || braces[str[i]] != stk.top()) {
        cout << "Not matching"  << endl;
        return 0;
      } else {
        stk.pop();
      }
    }
  }
  if(!stk.empty()) {
    cout << "Not matching" << endl;
  } else {
    cout << "matching" << endl;
  }
  return 0;
}
