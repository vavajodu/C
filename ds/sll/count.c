#include"header.h"
int count_nodes(ST *ptr)
{
	int p=0;
	while(ptr)
	{
		p++;
		ptr=ptr->next;
	}
	return p;
}

