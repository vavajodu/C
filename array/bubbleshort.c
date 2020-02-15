#include<stdio.h>
main()
{
int i,j,big,k,ele;
int a[5]={20,5,15,30,28};
big=a[0];
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
	for(j=1;j<=ele-i;j++)
	{
	if(a[i]>a[j])
	{
	k=a[i];
	a[i]=a[j];
	a[j]=k;
	}
	++i;
	}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
}
