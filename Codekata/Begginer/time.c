#include<stdio.h>
int main(void)
{
	int time,hours,minutes;
	scanf("%d",&time);
	hours=time/60;
	minutes=time%60;
	printf("%d\t%d",hours,minutes);
	return 0;
}
