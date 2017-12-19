#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(isalpha(n))
	{
		printf("Alphabet");
	}
	else
	{
		printf("Not an alphabet");
	}
	return 0;
}
