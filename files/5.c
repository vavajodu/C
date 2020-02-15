#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("Usage:./a.out operator n m\n");
		return;
	}
	int n1,n2,i=0;
	n1=atoi(argv[2]);
	n2=atoi(argv[3]);
	if(argv[1][0]=='+')
		printf("reault=%d\n",n1+n2);
	else if(argv[1][0]=='-')
		printf("reault=%d\n",n1-n2);
	else if(argv[1][0]=='*')
		printf("reault=%d\n",n1*n2);
	else if(argv[1][0]=='/')
		printf("reault=%d\n",n1/n2);
	else if(argv[1][0]=='>')
		n1>n2?printf("True\n"):printf("False\n");
	else if(argv[1][0]=='<')
		n1<n2?printf("True\n"):printf("False\n");
	else if(!(strcmp(argv[1],"==")))
		n1==n2?printf("True\n"):printf("False\n");
	else if(!(strcmp(argv[1],"!=")))
		n1!=n2?printf("True\n"):printf("False\n");
	else
		printf("Invalid option\n");
}
