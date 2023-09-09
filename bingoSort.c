// Used when duplicate elements are more
#include <stdio.h>
int printArray(int *A, int k)
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
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bingoSort(int *A, int n)
{
    int bingo = min(A, n);
    int nextBingo = max(A, n);
    int largestElement = nextBingo;
    int nextPos = 0;
    while (bingo < nextBingo)
    {
        int startPos = nextPos;
        for (int i = startPos; i < n; i++)
        {
            if (A[i] == bingo)
            {
                swap(&A[i], &A[nextPos]);
                nextPos++;
            }
            else if(A[i]<nextBingo){
                nextBingo = A[i];
            }
        }
        bingo=nextBingo;
        nextBingo=largestElement;
    }
}

int main()
{
    int A[30] ;
    int k;
    printf("Enter the size of array:");
    scanf("%d", &k);
    printf("\n\nEnter the elemensts of array[]:");
    for (int i = 0; i < k; i++)
    {
        printf("\n[%d]:", i + 1);
        scanf("%d", &A[i]);
    }
    printf("\nArray before sorting:");
    printArray(A, k);

    bingoSort(A, k);

    printf("\n\nArray after sorting:");
    printArray(A, k);
    return 0;
}
