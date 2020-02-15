#include<stdio.h>
void main()
{
	int x,y,mul=1,i;
	printf("Enter the value of x and y\n");
	scanf("%d %d",&x,&y);
	if(x<0||y<0)
	{
		printf("Enter +ve value\n");
		return;
	}
	i=y;
	for(;i>0;i--)
	{
		mul=mul*x;
	}
	printf("Value of %d^%d is %d\n",x,y,mul);
} 
