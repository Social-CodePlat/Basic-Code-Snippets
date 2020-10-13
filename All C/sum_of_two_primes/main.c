#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,i;
   printf("Enter a number which You wanna see as the sum of two prime numbers\n");
   scanf("%d",&x);
   for(i=2;i<=(x-i);i=nextprime(i))
   {
       if(isprime(x-i))
       printf("%d + %d = %d\n",i,(x-i),x);
   }
   return 0;
}

int nextprime(int n)
{
    do
    n++;
    while(!isprime(n));
        return n;
}

int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return(0);
            return(1);
}

