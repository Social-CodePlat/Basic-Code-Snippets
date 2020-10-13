#include <stdio.h>
#include <stdlib.h>

int sum_of_N(int);
int main()
{
    int x;
    printf("Enter a Number upto which you want the sum\n");
    scanf("%d",&x);
    printf("The Sum of First %d numbers is %d",x,sum_of_N(x));
    return 0;
}
int sum_of_N(int n)
{
    int i,s=0;
    for(i=0;i<=n;i++)
        s=s+i;
        return s;
}
