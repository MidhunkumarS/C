#include<stdio.h>
int main(void)
{
	int a,p,n;
	scanf("%d",&a);
	int temp=a;
	while(temp!=0)
	{
		n=temp%10;
		p=p*10+n;
		temp=temp/10;
	}
	if(p==a)
	{
	printf("yes");
	}
	else
	{
		printf("no");
	}
}
