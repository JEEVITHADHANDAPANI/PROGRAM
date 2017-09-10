#include <stdio.h>
void main()
{
  int a,b,i,j,count;
  printf("Enter the limit");
  scanf("%d%d",&a,&b);
  printf("The prime numbers are");
  for(i=a+1;i<=b;i++)
  {
      count=0;
      for(j=2;j<=b/2;j++)
      {
          if(i%j==0)
          {
              count=count+1;
          
          }
      }
      if(count<2)
      {
          printf("%d",i);
      }
  }
getch();
  }
