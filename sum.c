#include <stdio.h>

void main() {
    int n,i,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of n number is%d",sum);
    }
