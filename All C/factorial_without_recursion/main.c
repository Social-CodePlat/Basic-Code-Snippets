#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main()
{
    int x;
    printf("Enter a Number whose factorial You wanna see\n");
    scanf("%d",&x);
    printf("Factorial of %d is %d\n",x,fact(x));
}

int fact(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)//i=n;i!=1;i--
        s=s*i;
    return (s);
}
