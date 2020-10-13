#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,sum,largest=0,j,k,n,arr[100];
    printf("Enter the number of elements you wanna enter\n");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("You entered the following :\n");
    for(i=0;i<n;i++)
    printf("\narr[%d] = %d",i,arr[i]);

    for(k=i;k<n;k++)
    sum=0;
    {
     for(j=k+1;j<n;j++)
     {
         sum=sum+arr[i];
         sum>=largest;
         sum=largest;
         if (sum>=largest)
         printf("%d",largest);

     }
    }
}
