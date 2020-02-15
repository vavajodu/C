#include<stdio.h>
void func(int a[],int );
void main()
{
	int arr[30],ele,n,i;
	printf("Enter the number of ele\n");
	scanf("%d",&ele);
	printf("Enter the array:\n");
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	printf("Enter the value of n\n");
	scanf("%d",&n);
	func(arr,n);
	printf("New array is\n");
	for(i=0;i<ele;i++)
		printf("%d ",arr[i]);
}
void func(int a[],int n)
{
	int i,j,temp;
	j=n-1;
	for(i=0;i<=j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
