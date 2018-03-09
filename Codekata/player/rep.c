#include<stdio.h>
int main(void)
{
	int a[10],b[10],n,i,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			a[i]=b[j];
		}
		j++;
	}
	if(b[0]=='\0')
	{
		printf("unique");
	}
	for(i=0;i<='\0';i++)
	{
	printf("%d",b[i]);
    }
 return 0;
}
