// design a macro to find biggest number//
#include<stdio.h>
#define BIG(a,b) if(a>b)\
		 printf(#a" is bigger\n");\
		 else\
		 printf(#b" is bigger\n");
main()
{
	int i=10,j=20;
	BIG(i,j);
}
			
