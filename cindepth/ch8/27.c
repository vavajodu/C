#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,j,c=0,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
				c++;
		}
	}
	printf("Number of inversions are %d \n",c);
}
