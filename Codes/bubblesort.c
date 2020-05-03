#include<stdio.h>
int main()
{
    int ar[100],n,i,j,temp;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    printf("\n Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if (ar[j]>ar[j+1])
            {
                temp = ar[j];
                ar[j]= ar[j+1];
                ar[j+1]= temp;
            }
        }
    }

    printf("\n The sorted array is: ");
    for(i=0; i<n; i++)
    {
        printf("\n ar[%d] = %d", i,ar[i]);
    }

    return 0;
}
