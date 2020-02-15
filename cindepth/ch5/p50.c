#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(;num>0;num=num/10)
	{
		sum=sum*10+num%10;
	}
	printf("Reverse of number is %d\n",sum);
	printf("Double of that number is %d\n",sum*2);
}
