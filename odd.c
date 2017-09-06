#include <stdio.h>

void main() {
  int num;
  printf("Enter the number");
  scanf("%d",&num);
  printf("The odd numbers are:");
  for(int i=1;i<=num;i=i+2)
  {
      printf("%d\t",i);
  }
   getch();
}
