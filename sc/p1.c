#include<stdio.h>
int call(int,int);
main()
{
int a,b,c;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
c=call(a,b);
printf("c=%d\n",c);
}

