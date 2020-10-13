#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,n1,n2,n3;
    scanf("%d %d %d",&x,&y,&z);
    scanf("%d",&n1);
    n2=n1*x/y;
    n3=n2*y/z;
    printf("%d",n3);
    return 0;
}
