#include<stdio.h>
#define ROW1 3
#define COL1 3
#define ROW2 COL1
#define COL2 2
void main()
{
	int a[ROW1][COL1],b[ROW2][COL2],c[ROW1][COL2]={0},i,j,k;
	printf("Enter the first matrix\n");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter the second matrix\n");
	for(i=0;i<ROW2;i++)
	{
		for(j=0;j<COL2;j++)
			scanf("%d",&b[i][j]);
	}
	
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
		{
			c[i][j]=0;		
			for(k=0;k<COL1;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	}
	printf("Resultant matrix is :\n");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}

