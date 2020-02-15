#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,ele,i,j,c=0;
	printf("Enter the number of elements\n");
	scanf("%d",&ele);
	p=malloc(ele*sizeof(int));
	printf("Enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&p[i]);
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(p[i]==p[j])
				c=1;
		}
	}
	if(c==0)
		printf("Array elements are different\n");
	else
		printf("Array elements are not different\n");
}
