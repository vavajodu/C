#include<stdio.h>
#include<malloc.h>
struct st{
	struct st *prev;
	int n;
	struct st *next;
	}typedef ST;
ST *headptr;
