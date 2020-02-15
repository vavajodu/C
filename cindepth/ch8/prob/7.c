#include<stdio.h>
void main()
{
	int arr[10],i,j,temp;
	printf("Enter the array\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("shorted array is \n");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
	
