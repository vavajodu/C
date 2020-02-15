#include<stdio.h>
#include<malloc.h>
void main()
{
	char *p;
	int n,i,j;
	printf("Enter the number of characters in string\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	for(i=0;p[i];i++);
	for(j=i;j>=0;j--)
		printf("%c",p[j]);
	printf("\n");
}
