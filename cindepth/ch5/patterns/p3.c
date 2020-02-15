#include<stdio.h>
void main()
{
	int i,j,flag=0;
	for(i=1;i<=5;i++)
	{
		if(i%2!=0)
		{
			flag=1;
			for(j=1;j<=i;j++)
			{
				printf("%d ",flag);
				flag=!flag;
			}
			printf("\n");
		}
		else
		{
			flag=0;
			for(j=1;j<=i;j++)
			{
				printf("%d ",flag);
				flag=!flag;
			}
			printf("\n");
		}
	}
}
				
	
