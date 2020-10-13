#include <stdio.h>
#include <stdlib.h>
#define LEFT 0
#define RIGHT 1


void rotate_array(int a[], int N , int dir, int shift)
{
    int temp,i;
    if(dir==RIGHT)
    while(shift)
    {   temp=a[N-1];
        for(i=N-1;i>=1;i--)
        a[i]=a[i-1];
        a[0]=temp;
       shift--;
    }
    else
        while(shift)
    {
        temp=a[0];
        for(i=0;i<=N-2;i++)
            a[i]=a[i+1];
        shift--;
    }
}

int main()
{
    int a[8]={10,20,30,40,50,60,70,80};
    display(a,8);
    rotate_array(a,8,1,3);
    printf("\n");
    display(a,8);
}

 void display(int a[], int N)
 {   int i;
     for(i=0;i<N;i++)
        printf(" %d",a[i]);
 }
