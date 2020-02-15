#include<stdio.h>
void main()
{
	int i,j=1,k;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(;k;k--,j++)
			printf("%d ",j);
		printf("\n");
	}
}
