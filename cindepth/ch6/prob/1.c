#include<stdio.h>
int rev(int);
void main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Reverse of entered number is :\n");
	printf("%d\n",rev(num));
}
int rev(int n)
{
	int sum=0,i;
	for(;n>0;n=n/10)
	{
		sum=sum*10+n%10;
	}
	return sum;
}
