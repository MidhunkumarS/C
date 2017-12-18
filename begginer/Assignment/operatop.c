#include<stdio.h>
int main(void)
{
int a,b;
scanf("%d%d",&a,&b);
int add,sub,mul;
int div,mod;
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("%d,%d,%d,%d,%d",add,sub,mul,div,mod);
return 0;
}
