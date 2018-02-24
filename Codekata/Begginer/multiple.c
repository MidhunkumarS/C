#include<stdio.h>
int main(void)
{
	int a,mul=0,temp;
	scanf("%d",&a);
	temp=1;;
	while(temp<=a)
	{
		mul=temp*a;
		printf("%d\t",mul);
		temp++;
	}
	
	return 0;
}
