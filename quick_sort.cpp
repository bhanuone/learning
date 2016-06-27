#include <iostream>
using namespace std;

void QuickSort(int A[], int start, int end);

int main(int argc, char const *argv[])
{
  int A[] = {5, 3, 6, 2, 9, 7, 4, 8, 1, 0, 5, 7};
  int start = 0, end = 11;  
  QuickSort(A, start, end);
  for(int i = 0; i <= end; i++) { cout << A[i] << " "; }
  cout << endl;
  return 0;
}

int Partition(int A[], int start, int end) {
  int pivot = A[end];
  int pIndex = start;
  for(int i = start; i < end; i++) {
    if(A[i] <= pivot) {
      int temp = A[i];
      A[i] = A[pIndex];
      A[pIndex] = temp;
      pIndex++;
    }    
  }
  int temp = A[pIndex];
  A[pIndex] = A[end];
  A[end] = temp;
  return pIndex;
}

void QuickSort(int A[], int start, int end) {
  if(start < end) {
    int pIndex = Partition(A, start, end);
    QuickSort(A, start, pIndex - 1);
    QuickSort(A, pIndex + 1, end);
  }
}