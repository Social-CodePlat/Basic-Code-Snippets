#include <stdio.h>
#include <stdlib.h>

int sum_of_sqrs(int);
int main()
{
    int x;
    printf("Enter a Number up to which you wanna find the Sum of Squares of \n");
    scanf("%d",&x);
    printf("The Sum of squares of first %d terms is %d",x,sum_of_sqrs(x));
    return 0;
}
 int sum_of_sqrs(int n)
 {
     int i,s=0;
     for(i=1;i<=n;i++)
     s=s+i*i;
     return s;
 }
