#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i;
	gets(a);
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			a[i]=a[i]-32;
		}
		else if(a[i]>=65&&a[i]<=122)
		{
			a[i]=a[i]+32;
		}
	}
	printf("%s",a);
	return 0;
}
	
