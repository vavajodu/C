#include<stdio.h>
void main()
{
	int x,n,i,j,r,sum=0;
	printf("enter the value of x anf n\n");
	scanf("%d %d",&x,&n);
	for(i=1;i<=n;i++)
	{
		r=1;
		for(j=1;j<=i;j++)
			r=r*x;
		sum=sum+r;
	}
	printf("Result=%d\n",sum);
}
