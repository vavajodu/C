#include<stdio.h>
void prime(int ,int);
void main()
{
	int num1,num2;
	printf("Enter two numbers \n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		printf("Numbers should be num1<num2\n");
		return;
	}
	else 
		prime(num1,num2);
}
void prime(int m,int n)
{
	int i,j;
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(j==i)
			printf("%d ",i);
	}
	printf("\n");
}
