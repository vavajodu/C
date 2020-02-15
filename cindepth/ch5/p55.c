#include<stdio.h>
void main()
{	
	int num,sum=0,i;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i*i;
	}
	printf("Sum=%d\n",sum);
}
