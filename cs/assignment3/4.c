#include<stdio.h>
main()
{
int num;
printf("Enter the number...\n");
scanf("%d",&num);
if(num&num-1)
printf("it's not power of 2\n");
else
printf("its 2's power\n");
}
