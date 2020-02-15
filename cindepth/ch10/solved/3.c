#include<stdio.h>
#include<malloc.h>

void my_strnrev(char *,int ,int);
void main()
{
	char *p;
	int n,start,end;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Enter the start and end number\n");
	scanf("%d %d",&start,&end);
	printf("Before:%s\n",p);
	my_strnrev(p,start,end);
	printf("After:%s\n",p);
}
void my_strnrev(char *m,int a,int b)
{
	int i,j;
	char temp;
	for(i=a-1,j=b-1;j>i;i++,j--)
	{
		temp=m[i];
		m[i]=m[j];
		m[j]=temp;
	}
}
