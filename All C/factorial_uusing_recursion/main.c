#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n>0)

     return (n*factorial(n-1));
    else
        return (1);

}
 int main()
 {
     int n;
     printf("Enter the number you want factorial for\n");
     scanf("%d",&n);
     printf("Factorial for given number %d is %d",n,factorial(n));
     return 0;
 }
