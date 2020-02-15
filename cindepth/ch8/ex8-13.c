#include<stdio.h>
#define ROW1 3
#define COL1 2
void main()
{
	int a[ROW1][COL1],b[COL1][ROW1],i,j;
	printf("Enter the array\n");
	for(i=0;i<ROW1;i++)
		for(j=0;j<COL1;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<COL1;i++)
		for(j=0;j<ROW1;j++)
			b[i][j]=a[j][i];
	printf("Transpose of matrix is :\n");
	for(i=0;i<COL1;i++)
	{
		for(j=0;j<ROW1;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
}
	
