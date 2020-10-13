#include <stdio.h>
#include <stdlib.h>

 int partition(int *A, int start , int end )
 {
     int pivot = A[end];
     int pindex = start;
     for(int i=start;i<end;i++)
     {
         if(A[i] <= pivot)
         {
            int temp = A[i];
             A[i] = A[pindex];
             A[pindex] = temp;
             pindex++;
         }
     }
    int temp = A[pindex];
     A[pindex] = A[end];
     A[end] = temp;
     return pindex;
 }
 void Quicksort(int *A, int start , int end )
 {
     if(start < end )
     {
         int pindex = partition(A,start,end);
         Quicksort(A,start,pindex-1);
         Quicksort(A,pindex+1,end);

     }
 }

 int main()
 {
     int A[] = {7,6,5,4,3,2,1,0};
     Quicksort(A,0,7);
     for(int i = 0; i < 8;i++)
        printf("%d",A[i]);

 }
