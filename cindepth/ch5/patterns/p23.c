#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<i;k++)
			printf(" ");
		for(j=1;j<=(2*n+1-2*i);j++)
			printf("%d",n+1-i);
		printf("\n");
	}
}
