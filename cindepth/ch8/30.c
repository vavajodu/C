#include<stdio.h>
#include<stdlib.h>
void firstoc(int *p,int m,int x);
void lastoc(int *p,int m,int x);
void main()
{
	int *p,n,i,j,temp,num;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(int));
	printf("enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	printf("enter the number you want to search\n");
	scanf("%d",&num);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
		}
	}
	firstoc(p,n,num);
	lastoc(p,n,num);
}
void firstoc(int *p,int m,int x)
{
	int i;
	for(i=0;i<m;i++)
		if(p[i]==x)
		{
			printf("first oc of %d is at %d\n",x,i);
			return;
		}
}
void lastoc(int *p,int m,int x)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		if(p[i]==x)
		{
			for(j=i;j<m;j++)
			{
				if(p[j]!=x)
				{
					printf("Lst oc of %d is at %d\n",x,j-1);
					return;
				}
			}
		}
	}
}
