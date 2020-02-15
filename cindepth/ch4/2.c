#include<stdio.h>
main()
{
	float r,area,per;
	printf("Enter the radious..\n");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("Area=%f\n",area);
	per=2*3.14*r;
	printf("perimeter=%f\n",&per);
}
