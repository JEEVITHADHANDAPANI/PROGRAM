#include<stdio.h>
void main()
{
int a,b,t;
printf("Enter the two number");
scanf("%d%d",&a,&b);
printf("Before swaping %d %d",a,b);
t=a;
a=b;
b=t;
printf("After swaping %d %d",a,b);
getch();
}
