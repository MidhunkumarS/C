#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int i,n;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(65<=s[i]<=90)
		{
			s[i]=s[i]+32;
		}
		else if(97<=s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",s[i]);
	}
	return 0;
}
