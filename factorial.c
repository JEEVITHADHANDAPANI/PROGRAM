#include <stdio.h>
void main() {
    int n,fact=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
      {
       fact=fact*i;
      }
   printf("The factorial of the given number is %d",fact);
   getch();
}
