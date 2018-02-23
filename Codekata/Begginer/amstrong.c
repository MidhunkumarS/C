#include<stdio.h>
int main(void)
{
	int a,temp,n,sum=0;
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		n=a%10;
		sum=sum+(n*n*n);
		a=a/10;
	}
	if(sum==temp)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
