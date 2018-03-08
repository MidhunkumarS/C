#include<stdio.h>
int main(void)
{
	char a[100];
	int i,count=0,count1=0;
	gets(a);
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]=='(')
		{
			count=count+1;
		}
		else if(a[i]==')')
		{
			count1=count1+1;
		}
	}
	if(count==count1)
	{
		printf("yes");
	}
	else
	{
		printf('no');
	}
	return 0;
}
