#include"header.h"
void add_begin(void);
void add_end(void);
void add_middle(void);
void add_middle(void);
void print_node(void);
int count_node(void);
void main()
{
	char ch;
	do
	{
		//add_begin();
		//add_end();
		add_middle();
		printf("Do you want to add another node..(y/n)\n");
		scanf(" %c",&ch);
	}
	while(ch=='y');
	printf("Entered data is:\n");
	print_node();
	printf("There are %d nodes in linklist\n",count_node());
}
