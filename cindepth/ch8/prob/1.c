#include<stdio.h>
void func(int ,int);
void main()
{
	int num,op;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Enter the option\n1)Binary\n2)Octal\n3)Hexadecimal\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("Binary is:\n");
			func(num,2);
			break;
		case 2:
			printf("Octal is:\n");
			func(num,8);
			break;
		case 3:
			printf("Hexadecinal is:\n");
			func(num,16);
			break;
	}
}
void func(int i,int j)
{
	int p=0,rem;
	char arr[31]={'0'};
	while(i>0)
	{
		rem=i%j;
		i/=j;
		if(rem>9&&rem<16)
			arr[p++]=rem-10+'A';
		else
			arr[p++]=rem+'0';
	}
	for(p=p-1;p>=0;p--)
		printf("%c",arr[p]);
	printf("\n");
}
