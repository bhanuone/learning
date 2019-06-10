#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  vector<int> v = {6, 3, 8, 2, 5, 9, 1, 4};
  cout << "Before sorting" << endl;
  vector<int>::iterator i;
  for(i = v.begin(); i != v.end(); ++i) {
    cout << *i << "\t";
  }
  cout << endl;
  sort(v.begin(), v.end());
  cout << "After sorting" << endl;
  for(i = v.begin(); i != v.end(); ++i) {
    cout << *i << "\t";
  }
  cout << endl;
  string name = "Bhanu Prakash";
  sort(name.begin(), name.end());
  cout << name << endl;
  return 0;
}