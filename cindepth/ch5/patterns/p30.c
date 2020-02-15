#include<stdio.h>
void main()
{
	int i,n,j,k,x,c=0;
	printf("enter the number of lines\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
			printf(" ");
		x=i+1;
		c=0;
		for(k=0;k<2*i+1;k++)
		{
			if(k<=(2*i)/2)
				printf("%d",x++);
			else
			{
				if(c==0)
				{
					--x;
					c=1;
				}
				printf("%d",--x);
			}
		}
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		
		for(j=n-i;j<n;j++)
			printf(" ");
		x=n-i;
		c=0;
		for(k=0;k<2*(n-i)-1;k++)
		{
			if(k<(2*(n-i))/2)
				printf("%d",x++);
			else
			{
				if(c==0)
				{
					--x;
					c=1;
				}
				printf("%d",--x);
			}
		}
		printf("\n");
	}
}
		
				

