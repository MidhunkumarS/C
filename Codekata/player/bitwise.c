#include<stdio.h>
int main(void)
{
	int a[100],b[100],n,k,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i]>>k;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
	
}
