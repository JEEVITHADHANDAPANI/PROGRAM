#include<stdio.h>
#include<string.h>
int main() {
   char str1[50];
   printf("Enter the string");
   scanf("%s",str1);
   int l=strlen(str1);
   for(int i=0;str1[i]!=l;i++)
   {
       if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
       {
         
       }
   }
   printf("YES");
   return 0;
}
