#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int n;
	gets(s);
	n=strrev(s);
	printf("%s",n);
}
