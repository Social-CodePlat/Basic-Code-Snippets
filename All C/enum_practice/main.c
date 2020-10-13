#include <stdio.h>
#include <stdlib.h>

enum option
{
    true,false
};

 enum option isEven(int a)
 {
     if(a%2==0)
        return (true);
        else
        return (false);
 };
  int main()
  {
      int b,result;
      printf("Enter the number to check\n");
      scanf("%d",&b);
      result= isEven(b);
      if(result==true)
      printf("Number is Even\n");
      else
        printf("Number is odd\n");
  }
