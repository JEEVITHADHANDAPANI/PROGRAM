#include<stdio.h>
void main()
{
    char s[20];
    int count=0;
    printf("Enter the string");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
    if(s[i]==' ')
    {
        count=count+1;
    }
    }
    printf("The no of words in the line %d",count+1);
    getch();
}

