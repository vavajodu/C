#include<stdio.h>
#include<stdlib.h>
main()
{
	int **p,r,c,i,j;
	printf("Enter the rows and columns you want..\n");
	scanf("%d %d",&r,&c);
	p=malloc(sizeof(int *)*r);
	for(i=0;i<r;i++)
	{
		p[i]=malloc(sizeof(int)*c);
	}
	printf("Enter the elements of array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	printf("aentered elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",p[i][j]);
		}
	printf("\n");
	}
}
