#include<stdio.h>
main()
{
    int n,i,ar[110],cnt=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]==1)
        {
            cnt++;
        }
    }
    if(cnt>0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
return 0;
}

