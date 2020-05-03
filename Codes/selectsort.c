#include<stdio.h>
int smallest(int ar[],int k,int n);
int select(int ar[],int n);
int main()
{
int ar[100],i,n,k,j;
printf("\nEnter the number of elements: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
 }

 select(ar,n);
 printf("\nThe sorted array is: ");
 for(i=0;i<n;i++)
 {
 printf("\n ar[%d] = %d",i,ar[i]);
 }
 }

 int smallest(int ar[],int k,int n)
 {
  int pos =k, small=ar[k],i;
  for(i=k+1;i<n;i++)
  {
   if(small>ar[i])
   {
    small=ar[i];
    pos=i;
    }
    }
    return pos;
    }

    int select(int ar[],int n)
    {
    int k,temp,pos;
    for(k=0;k<n;k++)
    {
    pos =smallest(ar,k,n);
    temp= ar[k];
    ar[k]= ar[pos];
    ar[pos]=temp;
    }
    }
