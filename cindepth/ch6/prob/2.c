#include<stdio.h>
int rev(int);
void main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(rev(num))
		printf("Number is palidrome\n");
	else 
		printf("Number is not palidrome\n");
}
int rev(int m)
{
	int sum=0,n;
	for(n=m;n>0;n=n/10)
	{
		sum=sum*10+n%10;
	}
	if(sum==m)
		return 1;
	else 
		return 0;
}
