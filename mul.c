#include <stdio.h>
void main()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  printf("The multiplication table is");
  for(int i=1;i<=10;i++)
  {
      printf("%d*%d=%d\n",i,n,n*i);
  }
   getch();
}
        
    
