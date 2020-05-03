#include<stdio.h>
int main()
{
 int ar[2][2]={2,3,4,5,6} , i,j;


printf("\n The array elements are: ");

for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 printf("\n \n ar[%d][%d] = %d",i,j, ar[i][j]);
 }

}
return 0;
}
