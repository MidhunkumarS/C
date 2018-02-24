#include<stdio.h>
int main(void)
{
int n,A,D,i,sum=0;
scanf("%d%d%d",&n,&A,&D);
for(i=n;i>1;i--)
{
sum=sum+(A+(n-1)*D);
}
printf("%d",sum);
return 0;
}
