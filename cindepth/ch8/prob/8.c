#include<stdio.h>
void main()
{
	int arr[5]={0,1,3,4,5},b[6];
	int i,pos,num,k=0,flag=0;
	printf("The array is:\n");
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("Enter the number and position at which you want to enter\n");
	scanf("%d %d",&num,&pos);
	for(i=0;i<6;i++)
	{
		if(i==pos)
		{
			k=pos;
			b[k++]=num;
			flag=1;
		}
		else
		{
			if(flag==0)
				b[k++]=arr[i];
			else
				b[k++]=arr[i-1];
		}
	}
	printf("New array is :\n");
	for(i=0;i<6;i++)
		printf("%d ",b[i]);
	printf("\n");
}
