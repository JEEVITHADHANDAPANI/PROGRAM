#include <stdio.h>
void main()
{
   int a,b,t;
   printf("Enter The two numbers");
   scanf("%d%d",&a,&b);
  if(a>b)
  t=a;
  else
  t=b;
  while(a!=0&&b!=0)
    {
    if(a%t==0&&b%t==0)
    {
    break;
    }
    else
    {
    t=t-1;
    }
}
	printf("The GCD of two number is %d",t);
	getch();
}
