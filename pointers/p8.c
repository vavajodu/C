// binary format of float using char pointer
#include<stdio.h>
main()
{
int i,j;
float f=4.5;
char *cp=&f;
cp=cp+3;
for(i=3;i>=0;i--)
{
	for(j=7;j>=0;j--)
	printf("%d",(*cp)>>j&1);
cp=cp-1;	

}
printf("\n");
}

