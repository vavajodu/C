#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		if(i>3)
			printf("%d ",n+1-i);
		else
			printf("%d ",i);
		printf("\n");
	}
}
