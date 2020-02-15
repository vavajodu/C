#include<stdio.h>
#include<malloc.h>
int my_strcmp(const char *,const char *);
void sort(char *,char *);
void my_strcpy(char *,const char *);
void main()
{
	int r,c,i,j;
	char **p;
	printf("Enter the number of strings\n");
	scanf("%d",&r);
	printf("Enter the number of characters in string\n");
	scanf("%d",&c);
	p=malloc(r*sizeof(char *));
	for(i=0;i<r;i++)
		p[i]=malloc(c*sizeof(char));
	for(i=0;i<r;i++)
	{
		printf("enter the strings\n");
		scanf(" %[^\n]",p[i]);
	}
	for(i=0;i<r-1;i++)
	{
		for(j=i+1;j<r;j++)
			if(my_strcmp(p[i],p[j])==1)
				sort(p[i],p[j]);
	}
	printf("After sorting of strings\n");
	for(i=0;i<r;i++)
	{
		printf("%s\n",p[i]);
	}
}
int my_strcmp(const char *m,const char *n)
{
	int i;
	for(i=0;m[i];i++)
	{
		if(m[i]!=n[i])
			break;
	}
	if(m[i]=='\0' && n[i]=='\0')
		return 0;
	else if(m[i]>n[i])
		return 1;
	else 
		return -1;
}
void sort(char *m,char *n)
{
	char temp[20];
	my_strcpy(temp,m);
	my_strcpy(m,n);
	my_strcpy(n,temp);
}
void my_strcpy(char *m,const char *n)
{
	int i;
	for(i=0;n[i];i++)
		m[i]=n[i];
	m[i]='\0';
}
