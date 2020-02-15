#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,q[30],i,j,k=0,n,x=0,count[30],b;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	printf("Enter the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	printf("Entered array is \n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-x;j++)
		{
			if(p[i]==p[j])		
			{
				q[k]=p[i];
				count[k]++;
				x++;
				for(b=j;b<n;b++)
					p[b]=p[b+1];
			j--;
			}
		}
		k++;
	}
	printf("New array is \n");
	for(i=0;i<k;i++)
	{
		printf("%d--%d times\n",q[i],count[i]);
	}
}
