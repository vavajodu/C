#include<stdio.h>
#include<malloc.h>
void my_strrev(char *);
void my_word_rev(char *,int ,int);
void my_func(char *,int ,int);
int my_strlen(const char *);
void main()
{
	char *p;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Before:\n");
	printf("%s\n",p);
	my_strrev(p);	
	my_word_rev(p,0,my_strlen(p)-1);
	printf("After:\n");
	printf("%s\n",p);
}
void my_strrev(char *a)
{
	int i,j;
	char temp;
	for(i=0;a[i];i++);
	for(j=0,i=i-1;i>=j;i--,j++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
void my_word_rev(char *m,int start,int end)
{
	int w_start=0,w_end=0;
	for(;start<=end;start++)
	{
		if(start==end)
			my_func(m,w_start,w_end);
		else
		{
			if(m[w_end++]==' ' && start<end)
			{
				my_func(m,w_start,w_end-2);
				w_start=w_end;
			}
		}
	}
}
void my_func(char *p,int start,int end)
{
	char temp;
	for(;start<=end;start++,end--)
	{
		temp=p[start];
		p[start]=p[end];
		p[end]=temp;
	}
}
int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i];i++);
		return i;
}

