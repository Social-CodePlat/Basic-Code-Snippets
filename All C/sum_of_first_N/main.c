#include <stdio.h>
#include <stdlib.h>

int sum(int );

int main()
{
    int a,k;
    printf("Enter the Number upto which you want the sum of\n");
    scanf("%d",&a);
    k=sum(a);
    printf("The Sum of first %d numbers is %d",a,k);
}
 int sum(int b)
 {
     int s;
     if(b==1)
        return b;
     s=b+sum(b-1);
     return s;
 }
