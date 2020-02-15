#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,j,ele,c=0,k;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	p=malloc(ele*sizeof(int));
	printf("Enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&p[i]);
	for(i=0;i<ele-c;i++)
	{
		for(j=i+1;j<ele-c;j++)
		{
			if(p[i]==p[j])
			{
				c++;
				for(k=j;k<ele;k++)
					p[k]=p[k+1];
			}
		}
	}
	printf("%d\n",c);
	for(i=0;i<ele-c;i++)
		printf("%d ",p[i]);
	printf("\n");
}
