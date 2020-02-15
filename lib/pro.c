#include<stdio.h>
#include<dlfcn.h>						//including header file//
main()
{
	int (*p)(int ,int);
	int n1,n2,n3,op;
	void *handler;
	printf("Enter the numbers..\n");
	scanf("%d %d",&n1,&n2);
	printf("Enter the option...\n");
	scanf("%d",&op);
	if(op==1)
	{
		handler=dlopen("./libmno.so",RTLD_LAZY);
		if(handler==0)
		{
			printf("%s\n",dlerror());
			return;
		}
		p=dlsym(handler,"sum");
		if(p==0)
		{
			printf("%s\n",dlerror());
			return;
		}
		n3=p(n1,n2);
		printf("result=%d\n",n3);
		dlclose(handler);
	}
	else if(op==2)
	{
		handler=dlopen("./libmno.so",RTLD_LAZY);
		if(handler==0)
		{
			printf("%s\n",dlerror());
			return;
		}
		p=dlsym(handler,"mul");
		if(p==0)
		{
			printf("%s\n",dlerror());
			return;
		}
		n3=p(n1,n2);
		printf("result=%d\n",n3);
		dlclose(handler);
	}
	else
	{
		printf("Unknown option\n");
		return;
	}
}
