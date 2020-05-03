#include<stdio.h>
main()
{
int d, arr[200000],i;
int cnt=0, cnt1=0;
scanf("%d",&d);
for(i=0;i<d;i++)
{
    scanf("%d",&arr[i]);
    if(arr[i]==0)
        cnt++;
    else
        cnt1++;
}

for(i=0;i<d;i++)
{
    if (arr[i]==0)
        cnt--;
    else
        cnt1--;


    if(cnt==0  || cnt1==0)
        break;

}
printf("%d",i+1);
}
