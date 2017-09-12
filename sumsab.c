#include<stdio.h>
void main()
{
	int sum=0,c=0;
	for(int i=1;i<=15;i++)
	{
		sum=sum+i;
	}
	printf("The sum between 1-15 is %d\n",sum);
	for(int j=15;j<=45;j++)
	{
            if(j%2!=0)
            {
            	c=c+j;
            }
	}
	printf("The sum of odd numbers between 15-45 %d",c);
  getch();
}
