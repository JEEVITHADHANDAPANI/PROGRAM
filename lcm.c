#include <stdio.h>
void main()
{
int a,b,max,lcm,i;
printf("Enter the two number");
scanf("%d%d",&a,&b);
if(a>b)
    max=a;
else
    max=b;
i=max;
while(1)
    {
        if(i%a==0 && i%b==0)
        {
           lcm = i;
          break;
        }

        i+= max;
    }
 printf("LCM of %d and %d = %d", a, b, lcm);
 getch();
}
 
