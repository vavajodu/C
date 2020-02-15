#include<stdio.h>
main()
{
	int num,j;
	printf("Enter the number....\n");
	scanf("%d",&num);
	//j=sizeof(int)*8-1;
	for(j=sizeof(int)*8-1;j>=0;printf("%d",num>>j--&1));//the whole programe in a single line...
}

