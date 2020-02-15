#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
	int p[2];
	char str_write[25];
	char str_read[25];
	if(pipe(p)!=0)
	{
		perror("pipe");
		return;
	}
	if(fork()==0)
	{
		printf("In child \n");
		read(p[0],str_read,strlen(str_read));
		printf("Data: %s\n",str_read);
		close(p[0]);
	
	}
	else
	{
		printf("In parent\n");
		printf("Enter the data\n");
		scanf("%[^\n]",str_write);
		write(p[1],str_write,strlen(str_write)+1);
		close(p[1]);
	}
	
}
