#include <iostream>
#include <stack>

using namespace std;

int main() {
  int T;
  cin >> T;
  for(int i = 0; i < T; i++) {
    stack<char> S;
    int countA, countB, emptyCount;
    countB = countA = emptyCount = 0;
    string villages;
    cin >> villages;
    for(int i = 0; i < villages.length(); i++) {
      char village = villages[i];
      if(S.empty()) {
        if(village == 'A' || village == 'B') {
          S.push(village);
          if(village == 'A') {
            ++countA;
          } else {
            ++countB;
          }
        }        
      } else {
        if(village == 'A' || village == 'B') {
          if(S.top() == village) {
            if(village == 'A') {
              countA += (emptyCount + 1);
            } else {
              countB += (emptyCount + 1);
            }
          } else {
            if(village == 'A') ++countA;
            else ++countB;
          }
          emptyCount = 0;
          S.pop();
          S.push(village);
        } else {
          ++emptyCount;
        }
      }
    }    
    cout << countA << " " << countB << endl;
  }
  return 0;
}