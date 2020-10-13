#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j,n,a[100],max;
     printf("Enter the Number of Elements You wanna compare from\n");
     scanf("%d",&n);
     printf("Enter %d Elements :\n",n);

     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     printf("You Entered the following :\n");
     for(i=0;i<n;i++)
     printf("%d\n",a[i]);

     printf("The Largest among these %d elements is :\n",n);
     max=a[0];
     for(i=1;i<n;i++)
       {
        if(max<a[i])
        max=a[i];
  }
  printf("%d",max);
}
