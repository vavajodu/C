#include<stdio.h>
void main()
{
	int i,num=1,sum=0,n;
	printf("Enter the number of terms n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=sum+num;
		num=num*10+1;
	}
	printf("sum=%d\n",sum);
}
