#include<stdio.h>
void bin(int );
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("The binary of number is:\n");
	bin(num);
}
void bin(int n)
{
	int a[32]={0};
	int i,k=0;
	for(i=n;i>0;i=i/2)
	{
		a[k++]=i%2;
	}
	for(k=31;k>=0;k--)
		if(k%4==0)
			printf("%d ",a[k]);
		else
			printf("%d",a[k]);
			
	printf("\n");
}
	 
