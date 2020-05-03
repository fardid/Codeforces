#include<stdio.h>
int main()
{
 int ar[100],n,i,mid,beg,end,num,pos=1;
 printf("Enter the number of elements of the array: ");
 scanf("%d",&n);
 printf("Enter the values of the array: ");
 for(i=0;i<n;i++)
 {
 scanf("%d", &ar[i]);
 }

 printf("Enter the number to be searched: ");
 scanf("%d", &num);

 beg =0, end =n-1;
  while(beg<=end)
  {
  mid=(beg+end)/2;

  if (ar[mid]==num)
  {
   pos =mid;
   printf("the number is found at pos %d",pos);
   break;
  }

  if (ar[mid]>num)
  {
   end = mid-1;
  }

  else
  {
   beg = mid+1;
  }
  }

  if(beg>end && pos==1)
  {
  printf("the number is not found");
  }
  return 0;
  }
