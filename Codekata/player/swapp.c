#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100],a[100];
	int i,j,n;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i+2)
	{
		for(j=i+1;j<n-1;j++)
		{
			a[i]=s[j];
			a[j]=s[i];
		}
	}
	for(i=0;i<n;i++)
	{
	printf("%d",a[100]);
    }
    return 0;
}
