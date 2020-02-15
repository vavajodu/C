#include<stdio.h>
#include<string.h>
main()
{
int r;
char s1[10],s2[10];
printf("Enter first string..\n");
scanf("%s",s1);
printf("Enter the secons string..\n");
scanf("%s",s2);
r=strcmp(s1,s2);
printf("r=%d\n",r);
}
