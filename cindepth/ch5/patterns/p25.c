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
		j=n+1-i;
		for(k=1;k<=n+1-i;k++)
			printf("%d",j++);
		j--;
		for(k=1;k<n+1-i;k++)
			printf("%d",--j);
		printf("\n");
	}
}
