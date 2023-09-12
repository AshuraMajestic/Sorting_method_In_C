#include <stdio.h>

// For printing
int printArray(int *A, int start, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", A[i]);
    }
}

// Getting gap using shrink factor 1.3 or (x*10)/13
int getNextGap(int gap)
{
    if (gap < 1)
    {
        return 1;
    }
    else
    {
        return gap / 1.3;
    }
}

// To swap two numbers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Comb algorithm
void combSort(int *A, int n)
{
    int gap = n;
    int swapped = 1;
    while (gap != 1 || swapped == 1)
    {
        gap = getNextGap(gap);
        swapped = 0;
        for (int i = 0; i < n - gap; i++)
        {
            if (A[i] > A[i + gap])
            {
                swap(&A[i], &A[i + gap]);
                swapped = 1;
            }
        }
    }
}

int main()
{
    int A[30];
    int k ;
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

    combSort(A, k);

    printf("\n\nArray after sorting:");
    printArray(A, 0, k);
    return 0;
}
