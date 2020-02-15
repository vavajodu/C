#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%3!=0)
			continue;
		sum=sum+i*i*i;
	}
	printf("sum=%d\n",sum);
}
	
