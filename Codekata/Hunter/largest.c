#include<stdio.h>
int main(void)
{
	int a[100];
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i>=0;i--)
	{
		sum=sum*10+a[i];
	}
	printf("%d",sum);
	return 0;
}
