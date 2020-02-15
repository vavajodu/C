#include<stdio.h>
main()
{
	int sum,num;
	printf("Enter the number...\n");
	scanf("%d",&num);
	for(;num/10;)
	{
		sum=0;
		for(;num>0;num/=10)
		{
			sum=sum+num%10;
		}
		num=sum;
	}
	printf("Last sum=%d\n",num);
}
