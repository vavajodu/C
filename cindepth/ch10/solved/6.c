#include<stdio.h>
#include<malloc.h>
void my_replace(char * ,char,char);
int count(const char *,char);
void main()
{
	char *p,ch,ch1;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("enter the character\n");
	scanf(" %c",&ch);
	n=count(p,ch);
	printf("Character %c is present %d times\n",ch,n);
	printf("Enter the character you want to replace and by which character you want to replace\n");
	scanf(" %c %c",&ch,&ch1);
	my_replace(p,ch,ch1);
	printf("After replacing\n");
	printf("%s\n",p);
}
int count(const char *p,char a)
{
	int c=0,i;
	for(i=0;p[i];i++)
	{
		if(p[i]==a)
		{
			c++;
		}
	}
	return c;
}
void my_replace(char *a,char ch,char rh)
{
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]==ch)
			a[i]=rh;
	}
}
