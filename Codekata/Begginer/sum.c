#include<stdio.h>
int main(void)
{
	int a[100],i,n,sum=0,k;
	printf("enter no.");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the no. to sum");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
