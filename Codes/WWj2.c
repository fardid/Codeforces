#include<stdio.h>
int main()
{
int t,C=1;
scanf("%d",&t);
while(t--)
{
    int D,M,Y,T,R,K,P,L;
    scanf("%d %d %d",&D,&M,&Y);
    scanf("%d %d %d",&T,&R,&K);

    if((Y==2018 && M>=8 && D>12) || (Y>2018))

            {
                L = T-K;

                if(L>=R)
                {
                    printf("Case %d:Valid.\n",C++);
                    P = ((K*(K+1))/2)*10;

                    printf("Total Penalty Money: %d$.\n",P);

                }

                else
                {
                    printf("Case %d:Invalid.\n",C++);

                }
            }
            else
            {
                printf("Case %d:Expired.\n",C++);
            }





}
return 0;
}







