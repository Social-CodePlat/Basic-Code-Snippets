#include <stdio.h>
#include <stdlib.h>

void TOH(int n,char BEG,char AUX,char END)
{
    if(n>=1)
    {
        TOH((n-1),BEG,END,AUX);
        printf("%c to %c\n",BEG,END);
        TOH((n-1),AUX,BEG,END);
    }
}

 int main()
 {   int n;
     char A,B,C;
     printf("Enter The Number of Discs you wanna play with :\n");
     scanf("%d",&n);
     TOH(n,'A','B','C');
    return 0;
 }

