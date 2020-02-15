#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		k=n;
		for(j=1;j<=i;j++)
			printf("%d",k--);
		k++;
		for(j=1;j<i;j++)
			printf("%d",++k);
		printf("\n");
	}
}
