#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c,e,f,i;
  while(1)
    {
  printf("Enter Your Choice from the Following:\n");
  printf("1.Addition\n");
  printf("2.Odd/Even\n");
  printf("3.Print N numbers\n");
  printf("4.Exit\n");
  scanf("%d",&a);

  switch(a)
  {
      case 1:printf("Enter two numbers\n");
             scanf("%d %d",&b,&c);
             printf("%d\n",b+c);
             break;

      case 2:printf("Enter the number you wanna check for Odd Even\n");
             scanf("%d",&e);
             if(e%2==0)
                printf("Number is Even\n");
             else
                printf("Number is Odd\n");
                break;

      case 3:printf("Enter till which you wanna print\n");
             scanf("%d",&f);
             for(i=1;i<=f;i++)
             {
                 printf("%d",i);
             }
             break;
      case 4: exit(0);
           break;

    default:printf("invalid input\n");
  }
 }
}
