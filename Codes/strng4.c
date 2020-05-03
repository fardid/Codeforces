#include<stdio.h>
int main()
{
    char name [5][10];
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
     for(i=0 ; i<n; i++)
     {
         printf("\n Enter the name of the students %d : ", i+1);
         gets(name[i]);

     }

    printf("\n The students name are: ");
    for(i=0;i<n;i++)
    {
        puts(name[i]);

    }
    return 0;
}
