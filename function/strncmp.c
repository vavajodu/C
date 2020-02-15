#include<stdio.h>
#include<string.h>
main()
{
char s1[10],s2[10];
int n,r;
printf("Enter the first string..\n");
scanf("%s",s1);
printf("Enter the second string..\n");
scanf("%s",s2);
printf("Enter the number of characters you want to compare..\n");
scanf("%d",&n);
r=strncmp(s1,s2,n);
if(r==0)
printf("equal\n");
else
printf("not equal\n");
}
