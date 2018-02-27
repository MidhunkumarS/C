#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int count=1,i;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=33&&s[i]<=46)
		{
			count=count+1;
		}
	}
	printf("%d",count);
}
