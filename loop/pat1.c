#include<stdio.h>
main()
{
int n,i,j,k,num;
printf("Enter the number of rows..\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	num=1;
	for(j=3;j>i;j--)
	printf("  ");
	for(k=0;k<2*i+1;k++)
	printf("%d ",num++);
printf("\n");
}
}
