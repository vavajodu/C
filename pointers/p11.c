#include<stdio.h>
main()
{
int i=10;
char c='a';
float f=3.5;
//int *p=0;          //null pointer.
//printf("%u\n",*p);
p=&f;
printf("p=%f\n",*(float*)p);
}
