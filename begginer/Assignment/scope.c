#include<stdio.h>
int count=0;//Global variable
int main(void)
{
int count=10;//Block variable
int i=10;
if(i==10)
{
int count=20;//Local variable
printf("%d\n",count);
}
printf("%d",count);
}
