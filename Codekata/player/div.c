#include <stdio.h>
 
int main(void) {
	// your code goes here
	int n,k,i,min;
	scanf("%d%d",&n,&k);
	i=n;
	while(i!=0)
	{
		if(i%n==0||i%k==0)
		{
			min=i;
		}
		i--;
	}
	printf("%d",min);
	return 0;
}
