#include<stdio.h>
main()
{
int i,j,k,l=0,n;
printf("enter the number...\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	for(k=n;k>i;k--)
	printf("* ");
	for(j=1;j<=2*i-1;j++)
	printf("  ");
	if(i==0)
	{
	for(k=i;k<n;k++)
	printf("* ");
	}
	else
	{
		if(i==1)
		{
		for(k=l;k<n;k++)
		printf("* ");
		}
		else
		{
		for(k=i;k<=n;k++)
		printf("* ");
		}
	}
printf("\n");
}
}
