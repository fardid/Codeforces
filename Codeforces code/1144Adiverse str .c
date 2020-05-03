#include<stdio.h>
#include<string.h>
int main()
{
char str[110],temp;
int n,m,i,j,flag=0;

scanf("%d",&n);
for(m=0;m<n;m++)
{
scanf("%s",str);
int l = strlen(str);
for (i = 0; i < l; i++) {
      for (j = i+1; j < l; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }

 }
 for(i=1;i<l;i++)
 {

 if(str[i] != str[i-1]+1)
 { flag=1;
     break;

 }
 }
 if(flag==1)
    printf("No\n");
 else
    printf("Yes\n");



}

}








