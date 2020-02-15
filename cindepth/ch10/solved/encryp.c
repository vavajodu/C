#include<stdio.h>
#include<malloc.h>
void encryption(char *,char *,char *);
void main()
{
	char *p;
	char nrml[]="abcdefghijklmnopqrstuvwxyz";
	char code[]="mnkghdtabwvuprqczjxieyflos";
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Before Encryption: %s\n",p);
	encryption(p,nrml,code);
	printf("After Encryption: %s\n",p);
}
void encryption(char *data,char *nrml,char *code)
{
	int i,j;
	for(i=0;data[i];i++)
	{
		for(j=0;nrml[j];j++)
		{
			if(data[i]==nrml[j])
				data[i]=code[j];
		}
	}
}
	
