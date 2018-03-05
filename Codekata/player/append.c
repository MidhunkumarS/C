#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int n,i;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		while(s[i]=='\0')
		{
		   i++; 	
		   s[i]='.';
		}
	}
	printf("%s",s);
	return 0;
}
