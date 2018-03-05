#include<stdio.h>
#include<string.h>
int main(void)
{
	char r[100],a[100];
	int n,j,k;
	gets(r);
	n=strlen(r);
	for(j=0;j<n;j++)
	{
		switch(r[j])
		{
			case 'I':a[j]=1;
			break;
			case 'V':a[j]=5;
			break;
			case 'X':a[j]=10;
			break;
			case 'L':a[j]=50;
			break;
			case 'C':a[j]=100;
			break;
			case 'D':a[j]=500;
			break;
			case 'M':a[j]=100;
			break;
			default:printf("invalid");
			break;
		}
    }
		k=a[n-1];
	for(j=n-1;j>0;j)
	{
		if(a[j]>a[j-1])
		{
			k=k-a[j-1];
		}
		else
		{
			k=k+a[j-1];
		}
	}
	printf("%d",k);
	return 0;	
	}
