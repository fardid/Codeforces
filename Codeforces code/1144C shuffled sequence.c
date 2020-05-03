#include<stdio.h>


 int n,flag[20010],ar[20010],dup[20010],uni[20010],i,f,cnt=0,cnt1=1,temp[20010];
 int main()
 {

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        flag[ar[i]]++;
         if(flag[ar[i]]>=3)
                f = 1;
    }

    if(f==1)
        printf("No");
    else
    {
        for(i=0; i<n; i++)
        {
            if(ar[i] > ar[i+1])
            {
                temp[i]=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp[i];
            }
        }
        uni[0]=ar[0];

        for(i=1; i<n; i++)
        {
            if(ar[i] == ar[i-1])
            {
                dup[cnt++]=ar[i];
            }
            else
            {
                uni[cnt1++] =ar[i];
            }
        }



    printf("Yes\n");
    printf("%d\n",cnt);
    for(i=0; i<cnt; i++)
    {
        printf("%d\n", dup[i]);
    }
    printf("\n");
    printf("%d\n",cnt1);
    for(i=cnt1-1; i>0; i--)
    {
        printf("%d", uni[i]);
    }


}
return 0;

}
