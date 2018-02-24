#include<stdio.h>
int main(void)
{
	int a,fact=0;
	scanf("%d",&a);
	while(a!=0)
	{
		fact=fact+a;
		a--;
	}
	printf("%d",fact);
	return 0;
}
