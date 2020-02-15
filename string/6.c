//6) Write a program to reverse the string using loops & recursion.
#include<stdio.h>
#include<malloc.h>
#include<string.h>
void rev(char *,int);
void main()
{
	char *p;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	printf("enter the string\n");
	scanf(" %[^\n]",p);
	rev(p,strlen(p)-1);
	printf("String is \n");
	printf("%s\n",p);
}
void rev(char *p,int n)
{
	char temp;
	static int i=0;
	if(i<=n)
	{
		temp=p[i];
		p[i]=p[n];
		p[n]=temp;
		i++;
		rev(p,n-1);
	}
	else
		return;
}
		
		
	
