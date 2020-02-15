#include<stdio.h>
#include<malloc.h>
int len(char *);
void func(char *,int ,int );
void my_strrev(char *,int ,int );
void main()
{
	char *p;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Before modification:%s\n",p);
	func(p,0,len(p)-1);
	printf("After modification:%s\n",p);
}
int len(char *q)
{
	int i;
	for(i=0;q[i];i++);
	return i-1;
}
void func(char *p,int start,int end)
{
	int w_start=0,w_end=0;
	for(;start<=end;start++)
	{
		if(start==end)
		{
			my_strrev(p,w_start,w_end-1);
			p[w_end]='\0';
		}
		while(p[w_end++]==' ' && start<=end)
		{
			my_strrev(p,w_start,w_end-2);
			w_start=w_end;
		}		
	}
}
void my_strrev(char *a,int i,int j)
{
	char temp;
	for(;j>=i;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
	
			
