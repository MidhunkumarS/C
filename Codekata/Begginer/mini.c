#include<stdio.h>
int main(void)
{
	int a[100],n,i,j,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
			{
				max=a[i];
			}
	}
	printf("%d",max);
	return 0;
}
