#include <stdio.h>
int main(void) {
	int f=0,s=1,n,l;
  printf("Enter the limit");
  scanf("%d",&l);
	printf("Fibonacci series\n");
	printf("%d\n%d",f,s);
	for(int i=1;i<=l;i++)
	{
		n=f+s;
		f=s;
		s=n;
		printf("\n%d",n);
	}
	return 0;
}
