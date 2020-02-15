#include<stdio.h>
main()
{
int i=10,j=20;
const int *const p=&j;
printf("p=%u\n",*p);
//*p=200;
p=&i;
printf("j=%u\n",j);
}
