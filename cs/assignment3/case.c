#include<stdio.h>
main()
{
char ch;
printf("Enter a character...\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
printf("it's a lower case letter\n");
else if(ch>='A'&&ch<='Z')
printf("it's a capital letter\n");
else
printf("other\n");
}
