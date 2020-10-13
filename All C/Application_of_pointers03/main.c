#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* reverse(char *p)
{
    int r,i;
    char t;
    for(r=0;*(p+r)!='\0';r++);
    for(i=0;i<r/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+r-1-i);
        *(p+r-1-i)=t;
    }
    return (p);
}
int main()

{
    printf("%s",reverse("Computer"));
    return 0;
}
