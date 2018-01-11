#include<stdio.h>
int main(void)
{
	int n;
  printf("Enter the number");
  scanf("%d",&n);
  t=n-1;
	if(t%2==0)
	{
		printf("%d",t);
	}
	else
	{
		printf("%d",t-1);
	}
	return 0;
}
