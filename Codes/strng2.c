#include<stdio.h>

int main()
{
char str [100], lower_str [100];
int i =0, j=0;

printf("Enter the string: ");
gets(str);
while(str[i] != '\0')
{
 if(str[i]  >="A"  &&  str[i]<="Z")
 {

 lower_str[j] = str[i] + 32;
 }
 else
 {
 lower_str[j] = str[i];
 }
 i++;
 j++;
 }
 lower_str[j] = '\0';
 printf("\n The string in lower case is: ");
 puts(lower_str);

 }
