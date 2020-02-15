#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p;
	p=malloc(sizeof(int));
	printf("p=%d\n",p);
	free(p);			//Deallocates the memory//
	p=malloc(sizeof(char));
	printf("p=%d\n",p);
}
