#include <stdio.h>

int main(void) {
	char word[20];
	int n;
  printf("Enter the string");
  scanf("%s",word);
  printf("No of times repeat");
  scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%s\n",word);
	}
	return 0;
}
