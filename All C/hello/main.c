#include <stdio.h>
#include <stdlib.h>

int main()
{
    char option;
    while(1)
    {
    printf("Hello World\n");
    printf("Do you want to continue : Y/N\n");
    scanf("%c",&option);
    if (option == 'Y'|| option == 'y')
        continue;
    else
        break;
   }
}
