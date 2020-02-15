#include<stdio.h>
#include<stdlib.h>
void func(int *,int);
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
	for(i=0;i<r;i++)
		func(p[i],c);
	printf("Shorted according to row is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
void func(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
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
