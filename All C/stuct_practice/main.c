#include <stdio.h>
#include <stdlib.h>

struct book
{
  int book_id;
  float price;
  char title[50];
};

 struct book input()
 {
     struct book b;
     printf("Plz Enter Book ID, Title and Price\n");
     scanf("%d",&b.book_id);
     fflush(stdin);
     gets(b.title);
     scanf("%f",&b.price);
     return (b);
      } ;

    void display( struct book b)
  {
      printf("%d %s %f\n",b.book_id,b.title,b.price);
  }

void main()
{
    struct book b1;
    b1=input();
    display(b1);
}
