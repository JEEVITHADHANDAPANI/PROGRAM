#include <stdio.h>
 
int main(void) {
	int a,b,c;
  printf("Enter two number");
  scanf("%d\t%d",&a,&b);
	c=a-b;
	if(c%2==0)
	{
		printf("difference is even");
	}
	else
	{
		printf("difference is odd");
	}
	return 0;
}
