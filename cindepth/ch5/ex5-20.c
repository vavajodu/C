/* 			wap to find sum of n terns of series 1+2+4+7+11+.....+n                                                   */

#include<stdio.h>
void main()
{
	int sum=1,res=0,n,i;
	printf("Enter the value of n..\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		res=res+sum;
		sum=sum+i;
	}
	printf("The sum of %d terms of series is %d\n",n,res);
}
		
