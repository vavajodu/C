#include<stdio.h>
#include<malloc.h>
void my_strcat(char *,const char *);
void main()
{
	int n;
	char *p,*q;
	printf("Enter the number of characters in string\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	q=calloc(n,sizeof(char));
	printf("Enter the first string\n");
	scanf(" %[^\n]",p);
	printf("Enter the second string\n");
	scanf(" %[^\n]",q);
	my_strcat(p,q);
	printf("After concatination\n");
	printf("%s\n",p);
}
void my_strcat(char *m,const char *n)
{
	int i,j;
	for(i=0;m[i];i++);
	i--;
	for(j=0;n[j];j++)
		m[i++]=n[j];
	m[i]='\0';
}
	
