#include <iostream>

using namespace std;
void bubble_sort(int A[], int n);
int main(int argc, char const *argv[])
{
  int arr[] = {3, 6, 2, 7, 4, 8};
  int n = 6;
  bubble_sort(arr, n);
  for (int i = 0; i < n; ++i)
  {
    cout<<arr[i]<<" ";
  }
  cout << endl;

  return 0;
}

void bubble_sort(int A[], int n) {
  for (int k = 0; k < n - 1; k++)
  {    
    int sorted = 0;
    for (int i = 0; i < n - k - 1; i++)
    {
      if(A[i] > A[i + 1]) {
        int temp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = temp;
        sorted = 1;
      }  
    }
    if(sorted == 0) break;
  }
}
