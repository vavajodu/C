#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
			printf("%d",k);
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		for(j=n-i;j<n;j++)
			printf(" ");
		for(k=1;k<=2*(n-i)-1;k++)
			printf("%d",k);
		printf("\n");
	}
}
