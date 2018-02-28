#include<stdio.h>
int main(void)
{
	int a;
	int fact=0;
	scanf("%d",&a);
	while(a!=0)
	{
		fact=fact+a;
		a--;
	}
	printf("%d",fact);
	return 0;
}
