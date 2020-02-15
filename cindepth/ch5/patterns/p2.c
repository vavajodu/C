#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=k+1;k;k--,j++)
			printf("%d ",j);
		printf("\n");
	}
}
