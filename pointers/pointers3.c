//wap to print binary format of float number

#include<stdio.h>
main()
{
int i;
int *ip;
float f=3.5,*fp;
ip=fp=&f;
//printf("ip=%d fp=%f\n",*ip,*fp);
for(i=31;i>=0;i--)
printf("%d",*ip>>i&1);
printf("\n");
}
