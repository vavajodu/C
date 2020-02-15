#include<stdio.h>
#include<malloc.h>
void my_remove(char *,char );
void main()
{
	char *p,ch;
	int i;
	printf("Enter the number of characters\n");
	scanf("%d",&i);
	p=calloc(i,sizeof(char));
	printf("Enter the string\n");
	scanf(" %[^\n]",p);
	printf("Enter the character you want to remove\n");
	scanf(" %c",&ch);
	my_remove(p,ch);
	printf("After\n");
	printf("%s\n",p);
}
void my_remove(char *a,char ch)
{
	int i,j;
	for(i=0;a[i];i++)
	{
		if(a[i]==ch)
		{
			for(j=i;a[j];j++)
				a[j]=a[j+1];
			a[j]='\0';
			i--;
		}
	}
}
