#include<stdio.h>
int main(void)
{
	int a[100],b[100];
	int i,n,m,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	m=k=0;;
		for(i=0;i<m+n;i++)
	{
		printf("%d",b[i]);
		k++;
	}
return 0;
	
}
