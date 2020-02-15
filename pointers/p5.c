#include<stdio.h>
main()
{
int i=10,j=20;
const int *p=&i;
//*p=50;
printf("p=%u i=%u &p=%p\n",*p,i,p);
*p=300;
//i=i+1;
printf("p=%u i= %u &p=%p\n",*p,i,&p);
}
