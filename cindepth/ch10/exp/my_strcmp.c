#include<stdio.h>
#include<malloc.h>
int my_strcmp(const char *,const char *);
void main()
{
	char  *p,*q;
	int n;
	printf("enter the number of characters in string\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	q=calloc(n,sizeof(char));
	printf("Enter first string\n");
	scanf(" %[^\n]",p);
	printf("Enter second string\n");
	scanf(" %[^\n]",q);
	n=my_strcmp(p,q);
	printf("N=%d\n",n);
/*	if(n)
		printf("Both strings are same\n");
	else 
		printf("strings are not same\n");        */
}
int my_strcmp(const char *m,const char *n)
{
	int i;
	for(i=0;m[i];i++)
	{
		if(m[i]!=n[i])
			break;
	}
	if(m[i]=='\0'&& n[i]=='\0')
		return 0;
	else if(m[i]>n[i])
		return 1;
	else if(m[i]<n[i])
		return -1;
}
