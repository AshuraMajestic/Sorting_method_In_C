//Varitation of insertion sort


#include <stdio.h>
int printArray(int *A, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", A[i]);
    }
}

void shellSort(int *A, int n)
{
    for (int gap = n / 2; gap > 0; gap /=2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = A[i];
            int j;

            for (j = i; (j >= gap) && (A[j - gap] > temp); j -= gap)
            {
                A[j] = A[j - gap];
            }
            A[j] = temp;
        }
    }
}

int main()
{
    int A[30];
    int k;
    printf("Enter the size of array:");
    scanf("%d", &k);
    printf("\n\nEnter the elemensts of array[Only decimal]:");
    for (int i = 0; i < k; i++)
    {
        printf("\n[%d]:", i + 1);
        scanf("%d", &A[i]);
    }
    printf("\nArray before sorting:");
    printArray(A, k);

    shellSort(A, k);

    printf("\n\nArray after sorting:");
    printArray(A, k);
    return 0;
}
