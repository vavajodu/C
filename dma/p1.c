#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,*p,i;
	printf("Enter the number of integers\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory is not available\n");
		return;
	}
	printf("enter the integers\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d\t",p[i]);
}
