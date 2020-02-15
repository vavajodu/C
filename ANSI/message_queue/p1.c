#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
int main()
{
	int msg_id;
	msg_id=msgget(1,IPC_CREAT|0666);
	if(msg_id<0)
		perror("msgget");
	msg_id=msgget(4,IPC_CREAT|0666);
	if(msg_id<0)
		perror("msgget");
}

