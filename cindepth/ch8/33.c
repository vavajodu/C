#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **p,r,c,i,j,temp;
	printf("Enter the value of row and col\n");
	scanf("%d %d",&r,&c);
	p=malloc(r*sizeof(int));
	for(i=0;i<r;i++)
		p[i]=malloc(c*sizeof(int));
	printf("Enter the element of array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	}
	printf("Entered array is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
	for(i=0;i<c;i++)
	{
		temp=p[0][i];
		p[0][i]=p[r][i];
		p[r][i]=temp;
	}
	printf("Entered array is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}	
	
