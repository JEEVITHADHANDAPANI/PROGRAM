#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    int i,j=0,l;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='O'&&str[i]!='U'&&str[i]!='I')
    
        {
            str1[j]=str[i];
            j++;
        }
    }
    l=strlen(str1);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str1[i]);
    }
    return 0;
}
