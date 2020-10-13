#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i=1,x;
  while(i<=5)
  {
  printf("Enter a Number\n");
  scanf("%d",&x);
  if (x>0)
    break;
    i++;
  }
  i==6?printf("Normally Ended\n"):printf("Ended by applying break\n");
}
