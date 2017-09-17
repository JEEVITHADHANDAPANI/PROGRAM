#include <stdio.h>
void main()
{
  int n,a=0,b=1,t;
  printf("Enter the number");
  scanf("%d",&n);
  printf("Fibonacci series is");
  printf("%d\n%d\n",a,b);
  for(int i=1;i<=n;i++)
  {
      t=a+b;
      a=b;
      b=t;
      printf("%d\n",t);
  }
   getch();
}
