#include<stdio.h>
int main(void)
{
	int a,sqr,num,sum=0;
	scanf("%d",&a);
	while(a!=0)
	{
		num=a%10;
		sqr=num*num;
		sum=sum+sqr;
		a=a/10;
	}
	printf("%d",sum);
}
