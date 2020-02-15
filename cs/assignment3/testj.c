#include<stdio.h>
void main()
{
int x,y=1,z;
if(x=y=z)
x=3;
printf("%d %d %d\n",x,y,z);
while(y<4)
x+=(y=(y+1));
printf("%d %d\n",x,y);
}
