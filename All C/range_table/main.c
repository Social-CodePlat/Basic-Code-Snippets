#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lw,up,j,i;
    printf("Plz Enter the Lower Limit for printing the table:");
    scanf("%d",&lw);
    printf("Plz Enter the Upper Limit for printing the table:");
    scanf("%d",&up);

     for(i=1;i<=10;i++)
   {
     for(j=lw;j<=up;j++)
     {
       if (j <= up-1)
          {printf("%d * %d = %d, ",j,i,i*j);
          }
          else
	        printf("%d * %d = %d",j,i,i*j);

     }
     printf("\n");


 }
}

