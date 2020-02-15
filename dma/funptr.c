#include<stdio.h>
int sum(int,int);
int sub(int,int);
int call(int(*)(int,int),int,int);
main()
{
	int (*p)(int,int);
	int x,y,ret;
	printf("Enter the numbers\n");
	scanf("%d %d",&x,&y);
	ret=call(sub,x,y);
	printf("result=%d\n",ret);
}
int call(int(*p)(int ,int),int m,int n)
{
	return(p(m,n));
}
int sum(int m ,int n)
{
	return(m+n);
}
int sub(int m ,int n)
{
	return(m-n);
}
