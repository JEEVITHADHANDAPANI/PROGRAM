#include <stdio.h>
void main()
{
  int n,f=0,s=1,t;
  printf("Enter the number");
  scanf("%d",&n);
  printf("Fibonacci series is");
  printf("%d\n%d\n",f,s);
  for(int i=1;i<=n;i++)
  {
      t=f+s;
      f=s;
      s=t;
      printf("%d\n",t);
  }
   getch();
}
        
