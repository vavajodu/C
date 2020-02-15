#include<stdio.h>
#include<malloc.h>
void my_strcpy(char *,const char *);
void main()
{
	int n;
	char *p,*q;
	printf("Enter then umber of characters in strings\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	q=calloc(n,sizeof(char));
	printf("enter the string \n");
	scanf(" %[^\n]",p);
	my_strcpy(q,p);
	printf("After copy\n");
	printf("%s\n",q);
}
void my_strcpy(char *m,const char *n)
{
	int i;
	for(i=0;n[i];i++)
		m[i]=n[i];
	m[i]='\0';
}

