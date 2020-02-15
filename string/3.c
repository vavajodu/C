//3) Write a program to find the no.of times the character is found in a
#include<stdio.h>
int my_char(const char *,char);
void main()
{
	int n;
	char *p;
	char ch;
	printf("enter the number of characters\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Enter the character\n");
	scanf(" %c",&ch);
	printf("the character %c present %d times\n",ch,my_char(p,ch));
}
int my_char(const char *p,char ch)
{
	int c=0,i;
	for(i=0;p[i];i++)
		if(p[i]==ch)
			c++;
	return c;
}

	
