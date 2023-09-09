#include<stdio.h>

int printArray( int* A, int k){
    for(int i=0;i<k;i++){
        printf("%d ",A[i]);
    }
}

void swap(int* a,int* b){
    int temp;
    temp = *a ;
    *a=*b;
    *b=temp;
}



int main(){
   int A[30];
   int k;
   printf("Enter the size of array:");
   scanf("%d",&k);
   printf("\n\nEnter the elemensts of array:");
   for(int i=0;i<k;i++){
    printf("\n[%d]:",i+1);
    scanf("%d",&A[i]);
   }
 printf("\nArray before sorting:");
   printArray(A,k);
   heapSort(A,k);
 printf("\n\nArray after sorting:");

   printArray(A,k);

}