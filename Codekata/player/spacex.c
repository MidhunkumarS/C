#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,j=0;
	gets(a);
	for(i=0;i!='\0';++i)
	{
		if(a[i]!=' ')
		{
			a[j++]=a[i];
		}
	}
	a[j]='\0';
	printf("%s",a);
	return 0;
}
