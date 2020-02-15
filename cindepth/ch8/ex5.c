#include<stdio.h>
void main()
{
	int arr[31]={0},i=0,j,temp,num,k;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(num/2!=1)
	{
		arr[i++]=num%2;
		num=num/2;
	}
	arr[i++]=num%2;
	arr[i]=1;
	k=i;
	for(j=0;j<k;j++,k--)
	{
		temp=arr[j];
		arr[j]=arr[k];
		arr[k]=temp;
	}
	for(k=0;k<=i;k++)
		printf("%d",arr[k]);
	printf("\n");
}
