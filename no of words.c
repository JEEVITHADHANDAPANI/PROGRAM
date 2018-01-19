#include <stdio.h>
#include<string.h>
int main(void) {
	char a[25];
  int word=1,l;
  printf("Enter the string");
  scanf("%d",a);
	l=strlen(a);
	for(int i=0;i<=l;i++)
	{
		if(a[i]==' ')
		++word;
	}
	printf("The no of word in a sentence is %d",word);
	return 0;
}
