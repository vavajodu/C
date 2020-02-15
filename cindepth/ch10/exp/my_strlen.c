#include<stdio.h>
#include<malloc.h>
unsigned int my_strlen(const char *);
void main()
{
	char *p;
	int n;
	printf("Enter the number of characters in string\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("String length is %d\n",my_strlen(p));
}
unsigned int my_strlen(const char *q)
{
	int i;
	for(i=0;q[i];i++);
	return i;		//neglecting null character
}
