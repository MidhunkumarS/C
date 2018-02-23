#include<stdio.h>
int main(void)
{
	int a,b,flag,i,j;
	scanf("%d%d",&a,&b);
	for(j=a;j<=b;j++)
	{
		flag=0;
	for(i=2;i<j/2;++i)
	{
		if(j%i==0)
		{
			flag=1;
			break;
}}

		if(flag==0)
		{
			printf("%d\t",j);
		}
	
}

return 0;
}
