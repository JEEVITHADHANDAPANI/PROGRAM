#include<stdio.h>
#include<string.h>
void main()
{
  int num,i,count=0;
  printf("Enter the number");
  scanf("%d",&num);
  for(i=2;i<=num;i++)
  {
    if(num%i==0)
    {
      count++;
    }
  }
  if(count>=3)
  {
    printf("%d is a composite number",num);
  }
    
}
