#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		printf("Zero");
	}
	else
	if(n>=1)
	{
		printf("Positive");
	}
	else
	{
		printf("negative");
	}
	return 0;
}
