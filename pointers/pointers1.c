#include<stdio.h>
main()
{
int i=10,*ip,j=20;
printf("i=%d, &i=%p\n",i,&i);

printf("j=%d, &j=%p\n",j,&j);
ip=&j;
*ip=500;
printf("%p\n",ip);
printf("j=%d\n",j);
}

