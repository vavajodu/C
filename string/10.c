//Write a program to remove the conjucutive spaces in a given string line.
#include<stdio.h>
#include<malloc.h>
void main()
{
	int n,i,j;
	char *p;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	for(i=0;p[i];i++)
	{		
		if(p[i]==' ')
		{
			if(p[i+1]==' ')
			{
				for(j=i;p[j];j++)
					p[j]=p[j+1];
				i--;
			}
		}
	}
	printf("After\n%s\n",p);
}
