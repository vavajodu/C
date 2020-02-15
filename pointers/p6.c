#include<stdio.h>
main()
{
int i=10,j=20;
int *const p=&i;
//p=&j;
*p=55;
i=i+1;
printf("i=%u\n",i);
}
