#include<stdio.h>
int main(void)
{
int n, ar[100000],ar1[100000],ar2[100000],i,j,a,b;
int evn=0,odd=0,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
if(ar[i]%2==0)
{
 ar1[evn++]=ar[i];
}
else
{
 ar2[odd++]=ar[i];
}
}
     for (i = 0; i < n; i++)
        {

            for (j = i + 1; j < n; j++)
            {

                if (ar1[i] < ar1[j])
                {

                    a =  ar1[i];
                    ar1[i] = ar1[j];
                    ar1[j] = a;

                }

            }

        }

 for (i = 0; i < n; i++)
        {

            for (j = i + 1; j < n; j++)
            {

                if (ar2[i] < ar2[j])
                {

                    b=  ar2[i];
                    ar2[i] = ar2[j];
                    ar2[j] = b;

                }

            }

        }

        if(evn == odd || evn == odd+1 || odd == evn+1)
            printf("0\n");

        else if(evn>odd)
        {
            for(i=odd+1;i<evn;i++)
            {
                sum=sum+ar1[i];
            }
            printf("%d",sum);
        }
        else
        {
            for(i=evn+1;i<odd;i++)
            {
                sum=sum+ar2[i];
            }
            printf("%d",sum);
        }

        return 0;
}
