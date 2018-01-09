#include <stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	int n;
  printf("Enter the word");
  scanf("%s",&ch);
  printf(" Enter number of times the word will be printed");
  scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%s\n",ch);
	}
	return 0;
}
