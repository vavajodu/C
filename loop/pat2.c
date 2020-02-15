/* print pattern  * * * *
                   * * *
		    * *
	             *
	            * *
		   * * *
		  * * * *      */
#include<stdio.h>
main()
{
int n,i,j,k,l;
printf("Enter the number of rows\n");
scanf("%d",&n);
for(i=-n;i<=n;i++)
{
	if(i<0)
	l=-i;
	else
	l=i;
	for(j=0;j<n-l;j++)
	printf(" ");
	for(k=0;k<=l;k++)
	printf("* ");
printf("\n");
}
}
