#include<stdio.h>
int main()
{
int n,ar1[400010],ar2[400010],i,cnt=0,rest=0;

scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&ar1[i]);
ar1[n+i]=ar1[i];
}

for(i=0;i<(2*n);i++)
{
    ar2[i]=ar1[i];
}
for(i=0;i<(2*n);i++)
{
    if(ar2[i]==1)
    {
        cnt++;
         rest=rest>cnt?rest:cnt;
        //max++;
    }
    else{
        cnt=0;
           }
}
printf("%d",rest);
return 0;
}

