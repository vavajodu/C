#include<stdio.h>
int prime(int );
void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(prime(num))
		printf("Numer is prime\n");
	else 
		printf("Number is not prime\n");
}
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==n)
		return 1;
	else
		return 0;
}
