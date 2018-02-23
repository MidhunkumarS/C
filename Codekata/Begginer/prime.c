#include<stdio.h>
int main(void)
{
	int a,flag=0,i;
	scanf("%d",&a);
	for(i=2;i<a/2;++i)
	{
		if(a%i==0)
		{
			flag==0;
			break;
		}
    }
		if(flag==0)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	
	return 0;
}
