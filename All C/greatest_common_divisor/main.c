#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
    if (a==b)
        return (a);
    if (a%b==0)
        return (b);
    if (b%a==0)
        return (a);
    if(a>b)

        GCD(a%b,b);
    else
        GCD(a,b%a);

}
int main()
{
    int a,b;
    printf("Enter the First Number :\n");
    scanf("%d",&a);
    printf("Enter the Second Number :\n");
    scanf("%d",&b);
    printf("The Greatest Common Divisor of %d and %d is %d\n",a,b,GCD(a,b));
    return 0;
}
