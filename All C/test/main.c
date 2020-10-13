#include <stdio.h>

void main()
{
    fun();
    return 0;
}
  void fun()
{
    auto int I=1;
    register char a ='D';
    static int p=0;
    printf("%d %d %ld",I,a,p);
}
