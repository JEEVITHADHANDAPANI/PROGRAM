#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],s1[20];
    int l;
    printf("Enter the string");
    scanf("%s",s);
    strcpy(s1,s);
    strrev(s);
    l=strcmp(s,s1);
    if(l==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}
