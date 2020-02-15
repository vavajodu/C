//4) Write a program to find vowels in a given  string.
#include<stdio.h>
#include<malloc.h>
int find(char *);
void main()
{
	char *p;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("There are %d vovels in string\n",find(p));
}
int find(char *q)
{
	int c=0,i;
	for(i=0;q[i];i++)
		if(q[i]=='a'||q[i]=='e'||q[i]=='i'||q[i]=='o'||q[i]=='u')
			c++;
	return c;
}
