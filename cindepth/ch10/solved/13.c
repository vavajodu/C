#include<stdio.h>
#include<malloc.h>
void my_encrypt(char *,int);
int my_strlen(const char *);
void main()
{
	char *p;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Before encrypt: %s\n",p);
	my_encrypt(p,my_strlen(p));
	printf("After encrypt: %s\n",p);
	
}
void my_encrypt(char *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(p[i]=='z'||p[i]=='Z')
		{
			if(p[i]=='z')
				p[i]='a';
			else
				p[i]='A';
		}
		else
		{
			p[i]=p[i]+1;
		}
	}
}
int my_strlen(const char*p)
{
	int n;
	for(n=0;p[n];n++);
	return n;
}
