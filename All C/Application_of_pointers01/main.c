#include <stdio.h>
#include <stdlib.h>

void input(int*);
void display(int*);
int sort(int*);

int main()
{
   int a[5];
   printf("Enter 5 values\n");
   input(a);
   display(a);
   sort(a);
   display(a);
}

  void input(int *p)
  {
      int i;
      for (i=0;i<5;i++)
        scanf("%d",p+i);
  }

  void display(int *p)
  {
      int i;
     for (i=0;i<5;i++)
        printf("%d ",*(p+i));
  }

  int sort(int *p)
  {
      int round,t,i;
      for(round=1;round<5;round++)
        {
            for(i=0;i<4;i++)

          if (*(p+i)>*(p+i+1))
          {

            t=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=t;
          }
    }
  }
