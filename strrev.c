#include <stdio.h>
#include<string.h>
void main()
{
    char s[20],*n;
    printf("Enter the string");
    gets(s);
    n=strrev(s);
    printf("The reversed string is %s",n);
   getch();
}
 
