#include<stdio.h>
main()
{
int i,j,k,ele;
int a[5]={8,5,4,3,2};
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
	for(j=i+1;j<=ele-1;j++)
	if(a[i]>a[j])
	{
	k=a[i];
	a[i]=a[j];
	a[j]=k;
	}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
