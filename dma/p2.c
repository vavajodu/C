#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i;
	p=malloc(5*sizeof(int));
	for(i=0;i<5;i++)
		printf("%d",p[i]);
}
