#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int p[2];
	pipe2(p,O_NONBLOCK);
	perror("pipe2");
	char ch='a';
	int c=0;
	while(write(p[1],&ch,1)!=-1)
		c++;
	printf("sizeof pipe=%d\n",c);
}
