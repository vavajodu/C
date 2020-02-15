#include<stdio.h>
#define n 30
void main()
{
	int a[n][n],i,j,m,start,end;
	printf("Enter the value of m\n");
	scanf("%d",&m);
	printf("Enter the array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	for(start=0,end=m-1;start<=end;start++,end--)
	{
		for(i=start;i<=end;i++)
			printf("%d ",a[start][i]);
		for(i=start+1;i<=end;i++)
			printf("%d ",a[i][end]);
		for(i=end-1;i>=start;i--)
			printf("%d ",a[end][i]);
		for(i=end-1;i>=start+1;i--)
			printf("%d ",a[i][start]);
	}
	printf("\n");
}
	

