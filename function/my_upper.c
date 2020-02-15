#include<stdio.h>
void my_upper(char *);
main()
{
char s[10];
printf("Enter a string...\n");
scanf("%s",s);
my_upper(s);
printf("s=%s",s);
printf("\n");
}
void my_upper(char *p)
{
int i;
for(i=0;p[i];i++)
if(p[i]>='a'&p[i]<='z')
p[i]-=32;
}
