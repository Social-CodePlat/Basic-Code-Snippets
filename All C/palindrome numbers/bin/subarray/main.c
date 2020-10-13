#include<stdio.h>

int main() {
   int i, arr[50], num;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   //Reading values into Array
   printf("\nEnter the values :");
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   //Printing of all elements of array
   for (i = 0; i < num; i++) {
      printf("\narr[%d] = %d", i, arr[i]);
   }

   return (0);
}
    int max = -1;                         // will hold largest sum
    int len = sizeof(array)/sizeof(int);  // C-idiom to find length of array

   ( for(int slen = len; slen > 0; slen--)           // loop for length of sub-arrays
    {
        for(int jdx = 0; jdx+slen <= len; jdx++)   // looping over elements in original array
        {
             int temp = calcSum(array, jdx, slen);
             if(temp > max)
                 max = temp;

        }
    }
    printf("maximum sum of sub-array is: %d\n", max);
}
int calcSum(int* array, int start, int len)
{
    int    sum = 0;
    printf("[%d:%d]: {", start, start+len);
    for(int ndx = 0; ndx < len; ndx++)
    {
        printf("%d,", array[start+ndx]);
        sum = sum + array[start+ndx];
    }

    printf("} the sum is %d\n", sum);
    return sum;
}
