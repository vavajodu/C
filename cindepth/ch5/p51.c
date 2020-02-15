#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	i=num;
	for(;i>0;i=i/10)
	{
		sum=sum*10+i%10;
	}
	if(sum==num)
		printf("number is palidrome\n");
	else
		printf("number is not palidrome\n");
}
