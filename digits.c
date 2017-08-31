#include <stdio.h>
void main()
{ 
    int num,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        
        num=num/10;
       sum++;
    }
    printf("number of digits is %d",sum);
    getch();
}
