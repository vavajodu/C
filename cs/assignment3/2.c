#include<stdio.h>
main()
{
int num,p;
printf("Enter the number...\n");
scanf("%d",&num);
p=sizeof(int)*8-1;
if(num>>p&1)
printf("it's a negative number\n");
else
printf("it's a positive number\n");
}
