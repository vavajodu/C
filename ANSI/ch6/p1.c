#include<stdio.h>
struct student {
	int rollno;
	int *p;
	};
int main()
{
	struct student s[2]={1,0,2,0};
	printf("%d %d\n",s[0].rollno,s[1].rollno);
	return 0;
}
