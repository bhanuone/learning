#include <iostream>

/*
 * Bhanu Prakash P
 * Finding a duplicate in n natural numbers
 *
 * Space Complexity: O(1)
 * Time Complexity: O(n)
 *
 */

using namespace std;

double incremetalAverage(double oldAverage, int newElement, int newSampleSize) {
  return oldAverage + (newElement - oldAverage) / newSampleSize;
}

int main() {
  int n;
  cin >> n; 
  int maxElement = -1;
  int element;
  double actualAverage = 0;
  // int data[n];
  for (int i = 0; i < n; i++) {
    cin >> element;
    maxElement = max(element, maxElement);
    actualAverage = incremetalAverage(actualAverage, element, i + 1);
  }

  double nElementsAverage = 1;
  int sampleSize = 1;
  while (sampleSize < maxElement) {
    nElementsAverage = incremetalAverage(nElementsAverage, sampleSize + 1, sampleSize + 1);
    sampleSize++;
  }

  
  // for (int i = 0; i < n; i++) {
  //   actualAverage = incremetalAverage(actualAverage, data[i], i + 1);
  // }

  cout << actualAverage << " " << nElementsAverage << endl;
  cout << (actualAverage * n - nElementsAverage * maxElement) << endl;
  // for (int i = 0; i < n; i++) {
  //   if(incremetalAverage(nElementsAverage, data[i], maxElement + 1) == actualAverage) {
  //     cout << "Dubpicate is: " <<  data[i] << endl;
  //     break;
  //   }
  // }
  return 0;
}
