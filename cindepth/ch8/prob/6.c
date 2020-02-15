#include<stdio.h>
void main()
{
	int arr[10],i,count=0,temp;
	printf("Enter the array\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<9;i++)
	{
		if(arr[i]>arr[i+1])
		{
			count++;
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("Number of shifs are %d\n",count);
}
