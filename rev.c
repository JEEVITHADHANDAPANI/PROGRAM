#include <stdio.h>
void main(){
    int num=,rev=0,sum,d=num;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        sum=num%10;
        rev=rev*10+sum;
        num=num/10;
    }
    if(d==rev)
    {
        printf("the given number is a palindrome");
    }
    else
    {
        printf("The hiven number is not a palindrome");
    }
    getch();
}
