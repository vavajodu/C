#include<stdio.h>
void main()
{
	int n,sum=0,i;
	for(n=1000;n<10000;n++)
	{
		sum=0;
		i=n;
		for(;i>0;i=i/10)
		{
			sum=sum*10+i%10;
		}
		if(sum==n)
			printf("%d  ",sum);
	}
	printf("\n");

}
