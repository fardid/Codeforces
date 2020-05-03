#include<stdio.h>
#include<string.h>
int main()
{
    char str[110],temp;
    int n,i,j;

    scanf("%d",&n);
    for(int t=0; t<n; t++)
    {
        scanf("%s",str);
        int l = strlen(str);
       int flag=0;
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < l-1-i; j++)
            {
                if (str[j] > str[j+1])
                {
                    temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                }
            }

        }
        for(i=1; i<l; i++)
        {

            if(str[i] != str[i-1]+1)
            {
                flag=1;
                break;

            }
        }
        if(flag==1)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}
