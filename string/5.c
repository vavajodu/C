//5) Write a program to compare two strings without using strcmp function.
#include<stdio.h>
#include<malloc.h>
int cmp(const char *,const char *);
void main()
{
	char *p,*q;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	q=malloc(n*sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Enter the isecond string\n");
	scanf(" %[^\n]",q);
	if(cmp(p,q))
		printf("Equal\n");
	else
		printf("Not equal\n");
}
int cmp(const char *a,const char *b)
{
	int i;
	for(i=0;a[i];i++)
		if(a[i]!=b[i])
			break;
	if(a[i]=='\0'&&b[i]=='\0')
		return 1;
	else
		return 0;
}
