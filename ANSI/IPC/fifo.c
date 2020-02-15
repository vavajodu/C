#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	char buf[25];
	int fd,fd1;
// Creating fifo files
	fd=mkfifo("buffer",0666);
	perror("mkfifo");
	fd1=mkfifo("buffer1",0666);
	perror("mkfifo");
//opening fifo files
	fd=open("buffer",O_RDWR);
	perror("open");
	fd1=open("buffer1",O_RDWR);
	perror("open");
//writing into fifo file
	printf("Enter the data\n");
	scanf("%[^\n]",buf);
	write(fd,buf,strlen(buf)+1);
// reading fifo file
	read(fd1,buf,strlen(buf));
	printf("Data: %s\n",buf);

}
