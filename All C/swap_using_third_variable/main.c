#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
  main()
{   int a,b;
    printf("Enter two numbers you wanna swap :\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d, b=%d",a,b);
}
