#include <stdio.h>
void main(){
    int n,rev=0,sum;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=n%10;
        rev=rev*10+sum;
        n=n/10;
    }
    printf("The reversed number is %d",rev);
    getch();
}
