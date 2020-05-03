#include<stdio.h>
int main()
{

 int a[100],n,k,i,j,temp;
 printf("\nEnter the number of elements of the array: ");

 scanf("%d",&n);

 printf("\nEnter the elements of the array: ");

 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }

  for(k=0;k<n;k++)
  {
   temp = a[k];
   j=k-1;

   while((temp<=a[j]) && (j>=0))
   {
    a[j+1]= a[j];
    j--;
    }

    a[j+1]=temp;
    }

    printf("\nThe sorted array is: ");
    for(i=0;i<n;i++)
    {
    printf("\na[%d] = %d\n",i,a[i]);
    }

    return 0;
    }
