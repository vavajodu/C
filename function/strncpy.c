#include<stdio.h>
#include<string.h>
main()
{
int i;
char s[10],p[10];
printf("Enter a string..\n");
scanf("%s",s);
strncpy(p,s,5);
printf("p=%s",p);
printf("\n");
for(i=0;i<6;i++)
printf(" %d",p[i]);
}
