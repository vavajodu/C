//2) Write a one line code to copy the string into another buffer.
#include<stdio.h>
#include<malloc.h>
void main()
{
	char *p,*q;
	int n,i;
	printf("Enter the number of charcters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	q=malloc(n*sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	for(n=0;p[i];q[i]=p[i],i++);
	q[i]='\0';
	printf("%s\n",q);
}
