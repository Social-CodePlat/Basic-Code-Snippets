#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int b_search(int A[], int l,int r,int x)
{
    int mid;
    if(l>r)
        return -1;
    mid = l+(r-l)/2;
    if(x==A[mid])
        return mid;
    else if(A[mid]>x)
       return  b_search(A,l,mid-1,x);
    else
        return b_search(A,mid+1,r,x);
    }
int main()
{
  int A[50],n,i,x,result,choice;
  while(1)
  {
  printf("Enter The Number Of Elements You want In the Array :- \n");
  scanf("%d",&n);
  printf("Enter the Elements :-\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&A[i]);
  }
  printf("Entered Elements are :- \n");
  for(i=0;i<n;i++)
  {
      printf("%d \n",A[i]);
  }
  printf("Enter the Element You wanna search for :-\n");
  scanf("%d",&x);
  result = b_search(A,0,n-1,x);
  if(result != -1)
      printf("Element Found at the index %d\n",result+1);
      else
        printf("Element not Found.\n");
        printf("Do You wannna Continue??\nEnter 1 to Continue else any other key\n");
        scanf("%d",&choice);
        if(choice == 1)
            {system("cls");
        continue;
            }
        else break;
      return 0;
 }
}
