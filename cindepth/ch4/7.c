#include<stdio.h>
main()
{
	float m1,m2,m3,m4,m5;
	float per;
	printf("enter the subject marks..\n");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/5;
	printf("percentage=%f\n",per);
}
