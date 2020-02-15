#include<stdio.h>
void main()
{
	long int num;
	int dig,count=0;
	printf("Enter the number and digit you want to count\n");
	scanf("%ld %d",&num,&dig);
	for(;num>0;num=num/10)
	{
		if((num%10)==dig)
			count++;
	}
	printf("Digit %d is %d times available\n",dig,count);
}
