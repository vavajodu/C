#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **p,r,c,i,j;
	printf("enter the number of rows and col\n");
	scanf("%d %d",&r,&c);
	p=malloc(sizeof(int *)*r);
	for(i=0;i<r;i++)
		p[i]=malloc(sizeof(int)*c);
	printf("enter the integers\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	printf("entered numbers are\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			printf("%d",p[i][j]);


}
