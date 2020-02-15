// design a macro for setting bit,clear bit,and complimenting bit//
#define BIT(op,position) { switch(op)\
	                {\
		        	case 1:\
				{\
					num=num|1<<position;\
					printf("num=%d\n",num);\
					break;\
				}\
		        	case 2:\
				{\
					num=num&~(1<<position);\
					printf("num=%d\n",num);\
					break;\
				}\
		        	case 3:\
				{\
					num=num^(1<<position);\
					printf("num=%d\n",num);\
					break;\
				}\
			}\
		       }
main()
{
	int op,num,position;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Enter the position\n");
	scanf("%d",&position);
	printf("Enter the option\n");
	scanf("%d",&op);
	BIT(op,position);
}
