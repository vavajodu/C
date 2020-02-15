#include<stdio.h>
main()
{
int i,j;
double f=3.5;
int *p=&f;
char *c=&f;
c=c+7;
p=p+1;
for(i=7;i>=0;i--)
{
	for(j=7;j>=0;j--)
	printf("%d",(*c)>>j&1);
	c=c-1;
}
printf("\n");
for(i=2;i>0;i--)
{
	for(j=31;j>=0;j--)
	printf("%d",(*p)>>j&1);
	p=p-1;

}
printf("\n");
}
