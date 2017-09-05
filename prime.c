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
           printf("%d is a prime number",num);
       }
    else
      {
         printf("%d is not a prime number",num);
      }
    getch();
}
        
