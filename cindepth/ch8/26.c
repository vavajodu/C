#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,j,k,n,c=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				k=p[i];
				p[i]=p[j];
				p[j]=k;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
	for(i=0;i<n-c-1;i++)
	{
		if(p[i]==p[i+1])
		{
			c++;
			for(j=i+1;j<n-c;j++)
				p[j]=p[j+1];
		}
	}
	printf("c=%d\n",c);
	for(i=0;i<n-c;i++)
		printf("%d ",p[i]);
	printf("\n");
}
	
