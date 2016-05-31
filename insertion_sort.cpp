#include <iostream>

using namespace std;

void insertion_sort(int A[], int n);

int main(int argc, char const *argv[])
{
  int array[] = {6, 4, 8, 3, 9, 5, 7};  
  int n = 7;
  insertion_sort(array, n);
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
  return 0;
}

void insertion_sort(int A[], int n) {
  for (int i = 1; i < n; i++)
  {
    int value = A[i];
    int hole = i;
    while(hole > 0 && A[hole - 1] > value) {
      A[hole] = A[hole - 1];
      hole = hole - 1;
    }
    A[hole] = value;    
  }
}