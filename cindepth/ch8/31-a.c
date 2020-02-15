#include<stdio.h>
#include<stdlib.h>
void func(int *,int);
void trans(int **,int,int);
void main()
{
	int **p,r,c,i,j;
	printf("enter the value of row and coloum\n");
	scanf("%d %d",&r,&c);
	p=malloc(r*sizeof(int));
	for(i=0;i<r;i++)
		p[i]=malloc(c*sizeof(int));
	printf("Enter the array \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&p[i][j]);
		}
		printf("\n");
	}
///////////////  GETTING TRANSPOSE OF MATRIX ///////////////
	trans(p,r,c);
////////////// PASSING ROW WISE FOR SHORTING /////////////
	for(i=0;i<r;i++)
		func(p[i],c);
/////////////// GETTING TRNASPOSE OF MATRIX /////////////
	trans(p,r,c);
///////////////// PRINTTING ARRAY ////////////////////////
	printf("Shorted according to column is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}
void trans(int **q,int m,int n)
{
	int i,j,temp;
	for(i=0;i<m;i++)
	{
		for(j=i;j<n;j++)
		{
			temp=q[i][j];
			q[i][j]=q[j][i];
			q[j][i]=temp;
		}
	}
}
void func(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}
