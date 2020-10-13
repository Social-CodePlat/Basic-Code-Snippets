#include<stdio.h>
struct pair
{
  int min;
  int max;
};

struct pair getMinMax(int arr[], int low, int high)
{
  struct pair minmax, mml, mmr;
  int mid;


  if (low == high)
  {
     minmax.max = arr[low];
     minmax.min = arr[low];
     return minmax;
  }


  if (high == low + 1)
  {
     if (arr[low] > arr[high])
     {
        minmax.max = arr[low];
        minmax.min = arr[high];
     }
     else
     {
        minmax.max = arr[high];
        minmax.min = arr[low];
     }
     return minmax;
  }


  mid = (low + high)/2;
  mml = getMinMax(arr, low, mid);
  mmr = getMinMax(arr, mid+1, high);


  if (mml.min < mmr.min)
    minmax.min = mml.min;
  else
    minmax.min = mmr.min;


  if (mml.max > mmr.max)
    minmax.max = mml.max;
  else
    minmax.max = mmr.max;

  return minmax;
}


int main()
{
    int n,i;
 printf("Enter the number of element in the array:\n");
scanf("%d",&n);
int a[n];
printf("Enter %d element\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
  int arr_size = n;
  struct pair minmax = getMinMax(a, 0, arr_size-1);
  printf("Minimum element is %d\n", minmax.min);
  printf("Maximum element is %d\n", minmax.max);
}
