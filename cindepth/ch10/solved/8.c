#include<stdio.h>
#include<malloc.h>
void my_print(const char *p,int i,int j);
int my_strlen(const char *p);
void my_count(char *p,int start,int end);
void main()
{	
	char *p;	
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char ));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	my_count(p,0,my_strlen(p)-1);
}
int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
void my_count(char *p,int start,int end)
{
	int w_start=0,w_end=0,c=0;
	for(;start<=end;start++)
	{
		if(start==end)
		{
			my_print(p,w_start,w_end-1);
			c++;
		}
		else
		{
			if(p[w_end++]==' ')
			{
				c++;
				my_print(p,w_start,w_end-2);
				w_start=w_end;
			}
		}
	}
	printf("there are %d words in string\n",c);
}
void my_print(const char *p,int i,int j)
{
	for(;i<=j;i++)
		printf("%c",p[i]);
	printf("\n");
}
