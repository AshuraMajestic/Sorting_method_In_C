#include <stdio.h>

int printArray(int *A, int k)
{
  for (int i = 0; i < k; i++)
  {
    printf("%d ", A[i]);
  }
}
void insertionSort(int *A, int k)
{
  int key, j;
  for (int i = 1; i < k; i++)
  { // number of passes

    key = A[i];  // Unsorted Array First element
    j = i - 1; // Sorted Array LAst Index
    while (j >= 0 && A[j] > key)
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = key;
  }
}

int main()
{
  int A[30];
  int k;
  printf("Enter the size of array:");
  scanf("%d", &k);
  printf("\n\nEnter the elemensts of array:");
  for (int i = 0; i < k; i++)
  {
    printf("\n[%d]:", i + 1);
    scanf("%d", &A[i]);
  }
  printf("\nArray before sorting:");
  printArray(A, k);
  insertionSort(A, k);
  printf("\n\nArray after sorting:");

  printArray(A, k);
  return 0;
}