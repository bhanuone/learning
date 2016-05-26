#include <iostream>

using namespace std;
void selection_sort(int A[], int n);
int main(int argc, char const *argv[])
{
  int arr[] = {3, 6, 2, 7, 4, 8};
  int n = 6;
  selection_sort(arr, n);
  for (int i = 0; i < n; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}

void selection_sort(int A[], int n) {
  for (int i = 0; i < n - 2; i++)
  {
    int min = i;
    for (int j = i + 1; j < n - 1; j++)
    {
      if(A[j] < A[min]) min = j;
    }
    int temp = A[i];
    A[i] = A[min];
    A[min] = temp;
  }
}