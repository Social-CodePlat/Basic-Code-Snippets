#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[30],soln=0;
void queen(int, int );
int issafe(int , int);
void print_sol(int);
int main()
{
    int n;
    printf("Enter the Numbers of Queen you wanna play with\n");
    scanf("%d",&n);
    queen(1,n);
    printf("Total number of Solutions :%d\n",soln);
    return 0;
}
 void queen(int row,int n)
 {
     int col;
     for(col=1;col<=n;col++)
     {if(issafe(row,col))
     {
         a[row]=col;
         if(row==n)
            print_sol(n);
            else
        queen(row+1,n);
     }
   }
 }
 int issafe(int row, int col)
 {
     int i;
     for(i=1;i<=row-1;i++)
     {
     if((a[i]==col)||(abs(a[i]-col)==(abs(i-row))))
        return 0;
     }
        return 1;
 }

 void print_sol(int n)
 {
     int i,j;
     soln++;
     printf("\n Solution No. %d\n",soln);
     for(i=1;i<=n;i++)
      {for(j=1;j<=n;j++)
     {
         if(a[i]==j)
            printf("Q\t");
         else
            printf("*\t");
     }
     printf("\n");}
 }
