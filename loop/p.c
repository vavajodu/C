#include<stdio.h>
main()
{
int n1,n2,i,j;
//printf("enter two numbers\n");
//scanf("%d %d",&n1,&n2);
for(i=1;i<=10;i++)
{
	for(j=2;j<i;j++)
	{
	if(i%j==0)
	break;
	}
	if(i==j)
	printf("%d ",i);
}
printf("\n");
}
