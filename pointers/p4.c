#include<stdio.h>
main()
{
int i=10;
int *p=&i;
printf("the address of i is %p\n",&i);
printf("the value contain in i is %u\n",i);
printf("the address of p is %p\n",&p);
printf("the content of p is %u\n",*p);
*p=200;
printf("New value of i is %u\n",i);
}
