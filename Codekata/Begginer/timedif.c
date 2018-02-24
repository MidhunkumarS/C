#include<stdio.h>
int main(void)
{
	int time,time1,time2,hour,hour1,hour2,minute,minute1,minute2;
	scanf("%d%d",&hour1,&minute1);
	scanf("%d%d",&hour2,&minute2);
	time1=(hour1*60)+(minute1);
	time2=(hour2*60)+(minute2);
	time=time1-time2;
	hour=time/60;
	minute=time%60;
	printf("%d\t%d",hour,minute);
	return 0;
}
