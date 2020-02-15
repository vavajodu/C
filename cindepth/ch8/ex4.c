#include<stdio.h>
void main()
{
	int arr[10],i,j,temp;
	printf("Enter the array elements\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	
	printf("Entered  array is\n");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");	
	for(i=0,j=9;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("reversed array is \n");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
}
	
