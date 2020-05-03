#include<stdio.h>
int  main()
{
    int arr[100010],n,i,r,temp;
    int sum=0,large=0;


    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
              if(large<arr[i])
    {
       large=arr[i];
        }
    }


    for(i=0; i<n; i++)
    {
       r=large-arr[i];
        sum=sum+r;

    }
    printf("%d",sum);
    return 0;
}
















