#include<stdio.h>
void main()
{
	int n,c=3,i,j,k;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
			printf("*");
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=n-i;j>0;j--)
			printf(" ");
		for(k=0;k<2*i-1;k++)
			printf("*");
		printf("\n");
		
	}	
}
