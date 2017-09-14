#include <stdio.h>
void main()
{
   int n1,n2,t;
   printf("Enter The two numbers");
   scanf("%d%d",&n1,&n2);
  if(n1>n2)
  t=n1;
  else
  t=n2;
  while(n1!=0&&n2!=0)
    {
    if(n1%t==0&&n2%t==0)
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
