#include<stdio.h>
void my_lower(char *);
main()
{
char s[10];
printf("Enter a atring\n");
scanf("%s",s);
my_lower(s);
printf("s=%s\n",s);
}
void my_lower(char *p)
{
int i;
for(i=0;p[i];i++)
if(p[i]>='A'&p[i]<='Z')
p[i]+=32;
}
