// Remove the barriers of mergesort and quick sort
// Usees merge and insertion sort
// Used in python .sort() method


#include <stdio.h>
const int RUN = 32;

// For printing
int printArray(int *A, int start, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", A[i]);
    }
}

// Insertion Sorting
void insertionSort(int *A, int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int key = A[i];
        int j = i - 1;
        while (j >= left && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
// Merging Arrays
void merge(int *A, int l, int m, int r)
{
    int len1 = m;
    int len2 = r - m;
    int left[len1], right[len2];
    for (int i = 0; i < len1; i++)
    {
        left[i] = A[l + i];
    }
    for (int i = 0; i < len2; i++)
    {
        right[i] = A[m + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
        {
            A[k] = left[i];
            i++;
        }
        else
        {
            A[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < len1)
    {
        A[k] = left[i];
        k++;
        i++;
    }
    while (j < len2)
    {
        A[k] = right[j];
        k++;
        j++;
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
// TimSort
void timSort(int *A, int n)
{
    for (int i = 0; i < n; i += RUN)
    {
        insertionSort(A, i, min((i + RUN - 1), (n - 1)));
    }
    for (int size = RUN; size < n; size *= 2)
    {
        for (int left = 0; left < n; left += 2 * size)
        {
            int mid = left + size - 1;
            int right = min((left + 2 * size - 1), (n - 1));
            if (mid < right)
            {
                merge(A, left, mid, right);
            }
        }
    }
}

int main()
{
    int A[60];
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
    printArray(A, 0, k);

    timSort(A, k);

    printf("\n\nArray after sorting:");
    printArray(A, 0, k);
    return 0;
}
