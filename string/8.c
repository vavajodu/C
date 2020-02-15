//8) Write a program to find the no.of words are presented in a given string line.
#include<stdio.h>
#include<malloc.h>

void main()
{
	char *p;
	int n,c=0,i;
	printf("enter the number of characters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	printf("enter the string\n");
	scanf(" %[^\n]",p);
	for(i=0;p[i];i++)
	{
		if(p[i]==' ')
			c++;
	}
	printf("There are %d words in string\n",c+1);
}
