#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(k=0;k<2*i-1;k++)
			printf("%d",i);
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		for(j=n;j>n-i;j--)
			printf(" ");
		for(k=0;k<2*(n-i)-1;k++)
			printf("%d",n-i);
		printf("\n");
	}
}
	
		
