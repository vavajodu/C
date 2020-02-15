#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,n,i,j,*q,temp;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	q=calloc(n,sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]==p[j])
				q[i]++;
			else
				i=i+q[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
			temp=i;
		else
		{
			if(q[i]>q[temp])
				temp=i;
		}
	}
	printf("%d is the most frequent element\n",p[temp]);
}
		

	
