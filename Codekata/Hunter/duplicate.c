#include<stdio.h>
int main(void)
{
	int a[100];
	int i,j,n,k;
	scanf("%d",&n);
	int temp=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
		  if(a[i]==a[j])
		{
			for(k=j;k<n;k++)
			{
				a[k]=a[k+1];
			}
			n--;
			j--;
		}
	}
}
for(i=0;i<n;i++)
{
	if(a[i]>a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
}

for(i=0;i<n;i++)
{
		
	printf("%d",a[i]);
}
return 0;
}
