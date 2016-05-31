#include <iostream>

using namespace std;

void merge_sort(int A[], int n);

int main(int argc, char const *argv[])
{
  int A[] = {7, 3, 6, 2, 8, 1, 9, 5, 4};
  int n = 9;
  merge_sort(A, n);
  for(int i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}
void merge(int left[], int right[], int original[], int l, int r, int n) {
  int i = 0, j = 0, k = 0;
  
  while(i < l && j < r) {
    if(left[i] <= right[j]) {
      original[k] = left[i];      
      i++; 
    } else {
      original[k] = right[j];      
      j++;
    }
    k++;
  }
  // copy all remaing elements from left sub array if any
  while(i < l) {
    original[k] = left[i];
    k++;
    i++;
  }
  // copy all remaing elements from right sub array if any
  while(j < r) {
    original[k] = right[j];
    k++;
    j++;
  }
}

void merge_sort(int A[], int n) {
  if(n < 2) return;
  int mid = n / 2; 
  int l = mid, r = n - mid;  
  int left[l];
  int right[r];
  for(int i = 0; i < mid; i++) { left[i] = A[i]; }
  for(int i = mid; i < n; i++) { right[i - mid] = A[i]; }
  merge_sort(left, l);
  merge_sort(right, r);
  merge(left, right, A, l, r, n);
}
