#include<stdio.h>
main()
{
int i=258,*ip;
char *cp;
ip=cp=&i;
printf("*ip=%d *cp=%d\n",*ip,*cp);
*cp='a';
printf("*ip=%d *cp=%d\n",*ip,*cp);

}
