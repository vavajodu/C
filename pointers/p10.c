#include<stdio.h>
main()
{
int i=10,j;
int *p;
p=&i;
printf("p=%u i=%u j=%u\n",p,i,j);
//j=*++p;
//printf("p=%u i=%u j=%u\n",p,i,j);
//j=*p++;
//printf("p=%u i=%u j=%u\n",p,i,j);
j=++*p;
printf("p=%u i=%u j=%u\n",p,i,j);
//j=*(p++);
//printf("p=%u i=%u j=%u\n",p,i,j);
}

