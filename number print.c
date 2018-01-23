#include<stdio.h>
#include<string.h>
int main()
{
  char ch[30];
  int l,i;
  printf("Enter the string");
  scanf("%s",ch);
  l=strlen(ch);
  for(i=0;i<=l;i++)
  {
    if(ch[i]>=48 && ch[i]<=57)
    {
      printf("%c",ch[i]);
    }
  }
return 0;
}
