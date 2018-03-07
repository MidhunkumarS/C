#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100],i;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			a[i]=='\0';
			i--;
		}
	}
	printf("%s",a);
	return 0;
}
