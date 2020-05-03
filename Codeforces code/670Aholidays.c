#include<stdio.h>
int main()
{
    long long n,a,b,min,max;


    scanf ("%lld",&n);
    a=n/7;
    b=n%7;




    if ( 1<=a<=10000)
    {
        if(b==6)
        {
            min=((2*a)+1);
            max=((2*a)+2);
            printf("%lld %lld",min,max);

        }
         else if(b==0)
        {
            min=2*a;
            max= 2*a;
            printf("%lld %lld",min,max);
        }
        else if(b==1)
        {
            min=2*a;
            max=(2*a)+1;
            printf("%lld %lld",min,max);
        }

        else if(2<=b<=5)
        {
            min=(2*a);
            max=(2*a)+2;
            printf("%lld %lld",min,max);
        }



        else
    {

    }
    }

else if(a==0 && b==1)
    {
        min=0;
        max=1;
        printf(" %lld %lld",min,max);
    }

   else if(a==0 && 2<=b<=5 )
    {
        min=0;
        max=2;
        printf(" %lld %lld",min,max);
    }

   else if(a==0 && b==6)
    {
        min=1;
        max=2;
        printf("%lld %lld,min,max");
    }


    else
    {

    }
    return 0;
}

