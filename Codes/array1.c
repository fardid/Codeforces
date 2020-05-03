#include<stdio.h>
int main()
{
 int ar[100],n,i,sum=0;
 double mean=0.0;
 printf("Enter the number of elements: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&ar[i]);
  sum = sum+ar[i];
  }
  printf("\n The sum is = %d", sum);

  mean = (double)sum/n;
   printf("\n\n The mean of %d number is = %.1lf", n,mean);

   return 0;
   }
