#include<stdio.h>
#include<malloc.h>
int my_strlen(const char *);
void my_countchar(char *,int);
void my_strcpy(char *,const char *);
void main()
{
	char *p;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	printf("enter the stinrg\n");
	scanf(" %[^\n]",p);
	my_countchar(p,my_strlen(p));
}
void my_countchar(char *a,int n)
{
	char str[n],ch;
	int i,j,count;
	my_strcpy(str,a);
	for(i=0;i<n;i++)
	{
		if(str[i]!=0 && str[i]!=' ')
		{
			ch=str[i];
			count=0;
			for(j=0;j<n;j++)
			{
				if(str[j]==ch)
				{
					count++;
					str[j]=0;
				}	
			}
			printf("%c -->%d times\n",ch,count);
		}
	}
}
int my_strlen(const char *p)
{
	int n;
	for(n=0;p[n];n++);
	return n;
}
void my_strcpy(char *dest,const char *src)
{
	int i;
	for(i=0;src[i];i++)
		dest[i]=src[i];
	dest[i]='\0';
}
