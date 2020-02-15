#include<stdio.h>
#include<stdlib.h>
void my_strrev(const char *,char *);
int my_strcmp(const char *,const char *);
void main()
{
	char *p,*q;
	int n;
	printf("enter the number of characters\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	q=calloc(n,sizeof(char));
	printf("Enter string 1\n");
	scanf(" %[^\n]",p);
	my_strrev(p,q);
	if(my_strcmp(p,q))
		printf("String is palidrome\n");
	else
		printf("String is not palidrome\n");
}
void my_strrev(const char *m,char *n)
{
	int i,j;
	for(i=0;m[i];i++);
	for(j=0,i=i-1;i>=0;j++,i--)
	{
		n[j]=m[i];
	}
}
int my_strcmp(const char *m,const char *n)
{
	int i,j;
	for(i=0;m[i];i++)
	{
		if(m[i]!=n[i])
			break;
	}
	if(m[i]=='\0' && n[i]=='\0')
		return 1;
	else
		return 0;
}
