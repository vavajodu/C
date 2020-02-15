#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=1;i<100;i++)
	{
		n=i;
		for(j=2;j<n;j++)
		{
			if(n%j==0)
				break;
		}
	if(j==n)
		printf("%d ",n);
	}
	printf("\n");
}
