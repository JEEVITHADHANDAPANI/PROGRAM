#include <stdio.h>
void main(){
    int x,y,z;
    printf("Enter the three numbers");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("%d is a biggest number",x);
    }
    else if(y>z)
    {
        printf("%d is a biggest number",y);
    }
    else
    {
        printf("%d is a biggest number",z);
    }
    getch();
    }
