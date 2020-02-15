#include<stdio.h>
void main()
{
	int n,i,j,k,c,x;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		x=n;
		c=0;
		for(k=0;k<(2*i)+1;k++)
		{
			if(k<=(2*i)/2)
				printf("%d",x--);
			else
			{
				if(c==0)
				{
					x++;
					c=1;
				}
				printf("%d",++x);
			}
		}
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=n-i;j<n;j++)
			printf(" ");
		x=n;
		c=0;
		for(k=0;k<2*(n-i)-1;k++)
		{
			if(k<2*(n-i)/2)
				printf("%d",x--);
			else
			{
				if(c==0)
				{
					x++;
					c=1;
				}
				printf("%d",++x);
			}
		}
		printf("\n");
	}
}
