#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,sum,n,start=0,end=0,largest=0,arr[100];

    printf("Enter the Number of elements you wanna have in your array :\n");
    scanf("%d",&n);
    printf("Enter the Elements :\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("You Entered The Following :\n");
    for (i=0;i<n;i++){
        printf("\narr[%d] = %d",i,arr[i]);
    }
   for(k=0;k<n;k++){
    sum=0;
    for(j=k;j<n;j++){
            sum=sum+arr[j];
        if (largest<sum)
            largest =sum;
            start=sum;
            end=j;
    }
   }
   printf("\nThe Largest Contagious Sub array sum is :\n");
   printf("\n%d",largest);
   printf("\nContagious sub array is from index %d to %d",sum,i);

return 0;
}
