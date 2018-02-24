#include<stdio.h>
#include<string.h>
int main(void)
{
	char s;
	gets(s);
	if(90>=s>=65&&97>=s>=122)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
