#include <stdio.h>
#include<string.h>
int main(void)
{
	int a[15],n;
	int i,j;
  printf("Enter the no of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		else
		{
			printf("%d",a[i]);
		}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
