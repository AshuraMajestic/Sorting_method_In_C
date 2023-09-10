#include <stdio.h>


// For printing
int printArray(int *A, int start, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", A[i]);
    }
}
void combSort(int* A,int n){

}


int main()
{
    int A[30]={3,56,43,25,67};
    int k=5;
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

    combSort(A, k);

    printf("\n\nArray after sorting:");
    printArray(A, 0, k);
    return 0;
}
