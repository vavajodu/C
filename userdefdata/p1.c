#include<stdio.h>
typedef int (*fptr)(int ,int );
int sum(int ,int);
void main()
{
	fptr p;
	p=&sum;
	printf("%d",p(5,10));	
}
int sum(int a,int b)
{
	return (a+b);
}
