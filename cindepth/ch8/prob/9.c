#include<stdio.h>
void main()
{
	int arr[10],i,temp;
	printf("enter array in sorted order\n");
	for(i=0;i<9;i++)
		scanf("%d",&arr[i]);
	printf("Enter the number\n");
	scanf("%d",&arr[i]);			//number is entered at 9th element
	for(;i>=0;i--)
	{
		if(arr[i]<arr[i-1])
		{
			temp=arr[i];
			arr[i]=arr[i-1];
			arr[i-1]=temp;
		}
		else
			break;
	}
	printf("New array is:\n");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
