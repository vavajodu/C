#include<stdio.h>
int sum(int,int );
int mul(int ,int );
main()
{
	int a,b,c;
	printf("Enter the value of a and b:\n");
	scanf("%d %d",&a,&b);
	c=sum(a,b);
	printf("result=%d\n",c);
	c=mul(a,b);
	printf("result=%d\n",c);
}
	
