#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class FairWorkLoad {
public:
  int getMostWork(vector<int> folders, int workers) {
    int n = folders.size();
    int lo = *max_element(folders.begin(), folders.end());
    int hi = accumulate(folders.begin(), folders.end(), 0);
    while(lo < hi) {
      int required = 1;
      int x = lo + (hi - lo) / 2;
      int current_load = 0;
      for(int i = 0; i < n; ++i) {
        if(current_load + folders[i] <= x) {
          current_load += folders[i];
        } else {
          ++required;
          current_load = folders[i];
        }
      }
      if(required <= workers) {
        hi = x;
      } else {
        lo = x + 1;
      }
    }
    return lo;
  }
};

int main(int argc, char const *argv[])
{
  vector<int> folders { 568, 712, 412, 231, 241, 393, 865, 287, 128, 457, 238, 98, 980, 23, 782 };
  int workers = 4;
  int maxFairLoad;
  FairWorkLoad *fw = new FairWorkLoad();
  maxFairLoad = fw->getMostWork(folders, workers);
  cout << maxFairLoad << endl;
  return 0;
}