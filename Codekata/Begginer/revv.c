#include<stdio.h>
int main(void)
{
	int a,rev=0,n,temp;
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		n=a%10;
		rev=rev*10+n;
		a=a/10;
	}
	printf("%d",rev);
	return 0;
}
