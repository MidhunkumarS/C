#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],flag=0;
	gets(a);
	if(isalpha(a))
	{
		flag=1;
	}
	if(flag==1)
	printf("yes");
	else 
	printf("no");
	return 0;
}
