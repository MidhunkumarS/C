#include<stdio.h>
int main(void)
{
	int num,count=0,n;
	scanf("%d",&num);
	while(num!=0)
	{
		n=num%10;
		num=num/10;
		count=count+1;
	}printf("%d",count);
	return 0;
}
