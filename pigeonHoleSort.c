#include <stdio.h>
#include<stdlib.h>

// For printing
int printArray(int *A, int start, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", A[i]);
    }
}

int max(int *A, int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int min(int *A, int n)
{
    int min = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

// Pigeon Hole algorithm
void pigeonHoleSort(int *A, int n)
{
    int maximum=max(A,n),minimum=min(A,n);
    int range = maximum - minimum -1;
    int * holes = (int *)calloc(range,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        holes[A[i] - minimum]++;
    }
    int index=0;
    for(int j=0;j<range;j++){
        while(holes[j]-- > 0){
            A[index];
        }
    }
    
}

int main()
{
    int A[30] = {3, 56, 43, 25, 67};
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
    printArray(A, 0, k);

    pigeonHoleSort(A, k);

    printf("\n\nArray after sorting:");
    printArray(A, 0, k);
    return 0;
}
