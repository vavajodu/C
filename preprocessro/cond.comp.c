// design a macro for do addition only even if we have all calculator functions add function should be only processed check it by preprocessor compilation//

#define op 2
#if (op==1)
	int sum(int a,int b)
	{
		return a+b;
	}
#elif(op==2)
	int sub(int a,int b)
	{
		return a-b;
	}
#elif(op==3)
	int mul(int a,int b)
	{
		return a*b;
	}
#elif(op==4)
	int div(int a,int b)
	{
		return a/b;
	}
#endif
main()
{
	int num1=10,num2=20,num3;
#if (op==1)
{
	num3=sum(num1,num2);
	printf("num3=%d\n",num3);
}
#elif (op==2)
{
	num3=sub(num1,num2);
	printf("num3=%d\n",num3);
}
#elif (op==3)
{
	num3=mul(num1,num2);
	printf("num3=%d\n",num3);
}
#elif (op==4)
{
	num3=div(num1,num2);
	printf("num3=%d\n",num3);
}
#endif
}	

	
