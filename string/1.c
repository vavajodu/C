// program to find  string length using pointer
#include<stdio.h>
int my_strlen(char *);
void main()
{
	char *p;
	p=malloc(20*sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Length of string is %d\n",my_strlen(p));
}
int my_strlen(char *q)
{
	int i;
	for(i=0;q[i];i++);
	return (i);
}
