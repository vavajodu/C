#include<stdio.h>
#include<malloc.h>
int my_index(char *,int);
int my_strlen(const char*);
void main()
{
	char *p;
	int n;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	p=malloc(n*sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	n=my_index(p,my_strlen(p));
	printf("non-repeating charcter index is %d\n",n);
}
int my_index(char*p,int n)
{
	int a,b,count;
	for(a=0;a<n;a++)
	{
		if(p[a]!=0)
		{
			count=0;
			for(b=a+1;b<n;b++)
			{
				if(p[a]==p[b])
				{
					p[b]=0;
					count++;
				}
			}
			if(count==0)
			{
				return a;
			}
		}
	}
	return -1;
}
int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
