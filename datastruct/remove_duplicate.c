#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char string[100];
int i=0;
int main()
{
    char ch, choice;
    memset(string,0,100);
    do{
        printf("enter the character\n");
        scanf(" %c", &ch);
        if(i == 0)
            string[i++] = ch;
        else {
            if(string[i-1] == ch)
            {
                string[i] = '\0';
                string[--i] = '\0';
            }
            else
                string[i++] = ch;
        }
        printf("Do you want to enter another character\n");
        scanf(" %c",&choice);
    }
    while(choice =='Y' || choice == 'y');
    printf("String : %s\n",string);
    return 0;
}
