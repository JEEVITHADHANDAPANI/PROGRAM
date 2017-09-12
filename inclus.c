#include<stdio.h>
int main(void)
{
	int n=5,sum=0;
	for(int i=1;i<=45;i++)
	{
	if(i<=15)
	{
		sum=sum+i;
	}
	else if(i>15)
	{
            if(i%2!=0)
            {
            	sum=sum+i;
            }
	}
	}
	printf("The sum is %d",sum);
	
	return 0;
}
