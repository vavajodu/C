#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int fd,fd1;
	mkfifo("f1",0666);
	mkfifo("f2",0666);
	if(fork()==0)
	{
		char buf[25];
		while(1)
		{
			fd=open("f1",O_RDWR);
			read(fd,buf,sizeof(buf));
			printf("Data: %s\n",buf);
		}
	}
	else
	{
		char buf1[25];
		while(1)
		{
			fd1=open("f2",O_RDWR);
			printf("Enter the data \n");
			scanf(" %[^\n]",buf1);
			write(fd1,buf1,strlen(buf1)+1);
		}
	}
}
		
		
