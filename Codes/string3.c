#include<stdio.h>
int main()
{
 char str[100], str1[100],str2[100];
 int i=0,j=0;

 printf("Enter the first string: ");
 gets(str1);
  printf("Enter the second string: ");
 gets(str2);

 while(str[i] != '\0')
 {
  str[j] = str1[i];
  i++;
  j++;
  }

  i=0;
  while(str2[i] != '\0')
  {
   str[j] = str2[i];
   j++;
   }
    str[j] = '\0';
    printf("The concated string is : ");
    puts(str);
    getch();
    return 0;
    }

