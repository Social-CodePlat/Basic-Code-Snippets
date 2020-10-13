#include <stdio.h>
#include <stdlib.h>

char* rev(char*);
int length(char*);

int main()
{
  printf("%d\n",length("computer"));
  printf("\n%s",rev("computer"));
  return 0;
}
 int length(char *p)
 {
     int i;
     for(i=0;*(p+i)!='\0';i++);
     return(i);
 }

 char* rev(char *p)
 {
     int l,i;
     char t;
     for(i=0;*(p+i)!='\0';i++);
     for(l=0;l<i/2;l++)
     {
         t=*(p+l);
         *(p+l)=*(p+i-1-l);
         *(p+i-1-l)=t;
     }
     return(p);
 }
