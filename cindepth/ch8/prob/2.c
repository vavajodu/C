#include<stdio.h>
int func(int a[10],int);
void main()
{
	int arr[10],i,num,res;
	printf("Enter the array\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	printf("Enter the number you want to search\n");
	scanf("%d",&num);
	res=func(arr,num);
	if(res==0)
		printf("Number %d is not available in array\n",num);
	else
		printf("Number %d is available at %d position\n",num,res+1);
}
int func(int a[10],int i)
{
	int j,count=0;
	for(j=0;j<10;j++)
	{
		if(a[j]==i)
		{
			count++;
			break;
		}
	}
	if(count==0)
		return 0;
	else 
		return j;
}
