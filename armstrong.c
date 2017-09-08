#include <stdio.h>
void main()
{
  int num,sum=0,a=num,d;
  printf("Enter the number");
  scanf("%d",&num);
  while(num!=0)
  {
    d=num/10;
    sum=sum+d*d*d;
    num=num/10;
  }
  if(sum==a)
  {
      printf("%d is a armstrong number",a);
  }
  else
  {
      printf("%d is not a armstrong number",a);
  }
}
        
    
    
	

