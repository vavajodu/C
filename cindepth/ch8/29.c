#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,j,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(int));
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	printf("Leaders in the array are\n");
	for(i=0;i<n;i++)
	{
		if(i==n-1)
			printf("%d\n",p[i]);
		else
			if(p[i]>p[i+1])
				printf("%d ",p[i]);
	}
}
