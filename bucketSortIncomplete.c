// Decimal Number sorting

#include <stdio.h>

int printArray(int *A, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", A[i]);
    }
}

void bucketSort(int *A, int n)
{
}

int main()
{
    int A[30] = {0.26, 0.29, 0.97, 0.34, 0.2};
    int k = 5;
    // printf("Enter the size of array:");
    // scanf("%d", &k);
    // printf("\n\nEnter the elemensts of array[Only decimal]:");
    // for (int i = 0; i < k; i++)
    // {
    //     printf("\n[%d]:", i + 1);
    //     scanf("%d", &A[i]);
    // }
    printf("\nArray before sorting:");
    printArray(A, k);

    bucketSort(A, k);

    printf("\n\nArray after sorting:");
    printArray(A, k);
    return 0;
}
