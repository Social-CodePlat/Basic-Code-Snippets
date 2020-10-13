#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);

     printf("%d",a>b?(a>c?a:c):(b>c?b:c));

   /* if(a>b)
        {
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else
    {
      if (b>c)
      {
          printf("%d",b);}
          else
            printf("%d",c);
      }*/
      /*if(a>b && a>c)
        (printf("%d",a);
    if(b>a&&b>c)
        printf("%d",b);
    if(c>a&&c>b)
        printf("%d",c);)this is More lengthy time consuming one*/
}
