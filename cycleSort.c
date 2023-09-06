#include <stdio.h>
#include <limits.h>
//printing the array
int printArray(int *A, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", A[i]);
    }
}



int main()
{
    int A[30];
    int k;
    printf("Enter the size of array:");
    scanf("%d", &k);

    // Entering elements of array
    printf("\n\nEnter the elemensts of array:");
    for (int i = 0; i < k; i++)
    {
        printf("\n[%d]:", i + 1);
        scanf("%d", &A[i]);
    }
    printf("\nArray before sorting:");
    printArray(A, k);
 
    cycleSort(A, k);
 
    printf("\n\nArray after sorting:");
    printArray(A, k);
    return 0;
}