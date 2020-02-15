#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,i;
	p=calloc(sizeof(int)*5,sizeof(int));
	printf("Enter the integers...\n");	
	for(i=0;i<2;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}
