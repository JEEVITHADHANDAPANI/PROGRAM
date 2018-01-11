#include<stdio.h>
int main(void)
{
	int a=37,b=73,t;
  printf("Enter two number");
  scanf("%d\t%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("After swapping %d\t%d",a,b);
}
