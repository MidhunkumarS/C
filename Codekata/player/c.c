#include <stdio.h>

int main(void) {
	// your code goes here
	char a[100],b[100];
	int i,j,count=0,k,n,m;
	gets(a);
	gets(b);
	scanf("%d",&k);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]!=b[j])
			{
				count=count+1;
			}
		}
	}
	if(count==k)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
