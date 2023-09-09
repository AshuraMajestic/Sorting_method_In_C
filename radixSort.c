#include <stdio.h>

int printArray(int *A, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", A[i]);
    }
}

int maximum(int *A, int k)
{
    int max = A[0];
    for (int i = 0; i < k; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int k, int exp)
{
    int output[k];
    int count[10] = {0};
    for (int i = 0; i < k; i++)
    {
        count[(A[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = k - 1; i >= 0; i--)
    {
        output[count[(A[i] / exp) % 10] - 1] = A[i];
        count[(A[i] / exp) % 10]--;
    }
    for (int i = 0; i < k; i++)
    {
        A[i] = output[i];
    }
}

void radixSort(int *A, int n)
{
    int m = maximum(A, n);
    for (int exp = 1; (m / exp) > 0; exp *= 10)
    {
        countSort(A, n, exp);
    }
}

int main()
{
    //Repeated number cannot be sorted using this function without using some brain
    int A[30] = {2, 65, 100, 2, 23};


    int k = 5;
    // printf("Enter the size of array:");
    // scanf("%d", &k);
    // printf("\n\nEnter the elemensts of array:");
    // for (int i = 0; i < k; i++)
    // {
    //     printf("\n[%d]:", i + 1);
    //     scanf("%d", &A[i]);
    // }
    printf("\nArray before sorting:");
    printArray(A, k);
    radixSort(A, k);
    printf("\n\nArray after sorting:");
    printArray(A, k);
    return 0;
}