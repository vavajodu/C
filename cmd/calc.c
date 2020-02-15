#include<stdio.h>
int atoi(const char *);
main(int argc,char **argv)
{
	int n1,n2;
	if(argc<=3)
	{
		printf("Usage:./a.out operand1 opcode oprand 2\n");
		return;
	}
	n1=atoi(argv[1]);
	n2=atoi(argv[3]);
	switch(argv[2][0])
	{
		case '+' :	
			printf("%d\n",n1+n2);
			break;
		case '-' :
			printf("%d\n",n1-n2);
			break;
		case '*' :
			printf("%d\n",n1*n2);
			break;
		case '/' :
			printf("%d\n",n1/n2);
			break;
	}
}
int atoi(const char *s)
{
	int i,num=0;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			num=num*10+(s[i]-48);
		}
	}
	return num;
}

