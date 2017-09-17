#include <stdio.h>
#include<string.h>
void main()
{
	int sum=0,l;
	char str[50];
  printf("Enter the string");
  gets(str);
	l=strlen(str);
	for(int i=0;i<=l;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
		    sum=sum+1;
		}
    if(str[i]>='0'&&str[i]<='9')
		{
		    count=count+1;
		}
	}
	printf("The no of character in the line is %d\n",sum);
	printf("The no of numbers in the line is %d\n",count);
	alpha=sum+count;
	printf("The alphaumeric in the line is %d\n",alpha);
	getch();
}
