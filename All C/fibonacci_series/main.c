#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if((n==1)||(n==2))
    return (1);
    else
    return ((fibonacci(n-1)+fibonacci(n-2)));

}
int main()
{
    int n;
    char option;
    do{
    printf("Enter the index for which you want the fibonacci term :\n");
    scanf("%d",&n);
    printf("The %d term of fibonacci series is %d\n",n,fibonacci(n));
    printf("Do You want to continue :Y/N\n");
    scanf("%c",&option);

  }
  while(option == 'Y'|| option == 'y');

}
