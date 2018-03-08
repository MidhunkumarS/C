#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[100];
	int n,k,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]==k)
    	{
    		printf("yes");
		}
		else
		{
			printf('no');
		}
	}
	return 0;
}
