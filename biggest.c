#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enterthe three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is a biggest number",a);
    }
    else if(b>c)
    {
        printf("%d is a biggest number",b);
    }
    else
    {
        printf("%d is a biggest number",c);
    }
    }
    
    
	

