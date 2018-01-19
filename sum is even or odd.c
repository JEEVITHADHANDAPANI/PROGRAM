#include<string.h>
int main(void) {
	int a,b,c;
  printf("Enter two numbers");
  scanf("%d\t%d",&a,&b);
	c=a+b;
	if(c%2==0)
	{
		printf("sum is even");
	}
	else
	{
		printf("sum is odd");
	}
	return 0;
}
