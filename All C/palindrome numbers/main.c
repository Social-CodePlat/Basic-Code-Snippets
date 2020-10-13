#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,x,s=0,r;
 printf("Enter the numbers you wanna check for Palindrome\n");
 scanf("%d",&a);
 x=a;
 while(x>0)
 {
     r=x%10;
     s=s*10+r;
     x=x/10;
 }
 if(a==s)printf("The Number is a palindrome Number \n");
 else printf("Number is not palindrome\n");
 return 0;
}
