#include<stdio.h>
int my_strlen(const char *);
main()
{
int r;
char s[]="karan raval";
r=my_strlen(s);
printf("r=%d\n",r);
}
int my_strlen(const char *p)
{
int i,k=0;
for(i=0;p[i];i++)
k++;
return k;
}
