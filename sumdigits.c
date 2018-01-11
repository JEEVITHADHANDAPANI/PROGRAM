#include<stdio.h>
int main(void)
{
	int n,t,sum=0;
  printf("Enter the number");
  scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;
		sum=sum+t;
		n=n/10;
	}
	printf("sum is %d",sum);
  return 0;
}
