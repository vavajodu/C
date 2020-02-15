#include<stdio.h>
static int sum(int,int);
int call(int x,int y)
{
int z;
z=sum(x,y);
return z;
}
int sum(int x,int y)
{
int s;
s=x+y;
return s;
}

