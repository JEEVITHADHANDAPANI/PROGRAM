#include <stdio.h>

void main() {
	char c;
  printf("Enter the character");
  scanf("%c",&c);
	if(c>='A'&&c<='Z'||c>='a'&&c<='z')
	{
	   printf("%c is a alphabet",c);
	}
	else
	{
      printf("%c is not an alphabet",c);
	}
	getch();
}
