#include<stdio.h>

int main()
{

int i=0,j=0,k=0,count=0,l=0,k1=0;
char a[80],b[80];


printf("\nEnter main string:-\n");
gets(b);
printf("\nEnter sub-string:-\n");
gets(a);

l=strlen(b);

while (a[i]!=EOF)
{
if (a[i]==b[j])
{
i++;
j++;
k1=1;

if (j==l)
{
j=0;
k=1;
count=count+1;
}
}
else
{
if (k1==1)
{
j=0;
k1=0;
}
else
i++;
}
}

if (k==1)
{
printf("\n\nThe given sub-string is present in the main string.");
printf("\nIt is present %d times.",count);
}

else
{
if (k==0)
printf("\n\nThe given sub-string is not present in the main string.");
}

}
