#include<stdio.h>
int print_binary(int);
main()
{
int num,c;
printf("Enter the number\n");
scanf("%d",&num);
c=print_binary(num);
printf("set bits are %d\n",c);
printf("\n");
}
int print_binary(int num)
{
int i,c=0;
for(i=31;i>=0;i--)
if(num&1<<i)
{
printf("1");
c++;
}
else 
printf("0");
printf("\n");
return c;
}
