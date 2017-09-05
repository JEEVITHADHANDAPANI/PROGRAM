#include <stdio.h>
void main(){
    int num,count=0;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count<3)
       {
           printf("The given number is a prime number %d",num);
       }
    else
      {
         printf("The given number is not a prime number %d",num);
      }
    getch();
}
        
