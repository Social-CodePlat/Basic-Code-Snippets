#include<stdio.h>
#include<math.h>
#define f(x)(exp(-x)- 3*log(x))
int main()
{
  float a,b;
  float x;
  scanf("%f %f",&a,&b);
  do
  {
      x = (a+b)/2;
      if (f(a)*f(x)<0)
        b = x;
      else
        a = x;
      printf("\n %f",x);
  } while (fabs(f(x))>0.000001);
return 0;
}

