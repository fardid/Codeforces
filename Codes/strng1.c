#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100],lstr[100];
    int i=0,j=0;
    clrscr();
    printf("Enter the string: ");
    gets(str);
    while(str[i]  != "\0")
    {
        if(str[i]>= "a" && str[i]<="z")
            lstr[j] = str[i]-32;
        else
            lstr[i] = str[i];
        i++;
        j++;
    }

    lstr[j] = "\0";
    printf("The string in the upper case is: ");
    puts(lstr);

    return 0;
}
