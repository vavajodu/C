#include<stdio.h>
void main()
{
	int arr[10],i,sum=0;
	printf("enter the element of an array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum=%d\n",sum);
}
