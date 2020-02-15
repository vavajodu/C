#include<stdio.h>
void main()
{
	int i,n,j;
	printf("enter 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
			printf("=");
		printf("\n");
	}
}
