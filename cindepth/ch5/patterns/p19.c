#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter the no of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=2*(n-i);k++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("* ");
		printf("\n");
	}
}
