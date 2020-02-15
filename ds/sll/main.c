#include"header.h"
void add_begin(ST **);
void add_end(ST **);
void add_middle(ST **);
void print_data(ST *);
void print_data_rec(ST *);
void print_data_reverse(ST *);
void reverse_link(ST **);
int count_nodes(ST *);
void main()
{
	ST *headptr=0;
	char ch;
	do
	{
		add_begin(&headptr);
		//add_middle(&headptr);
		//add_end(&headptr);
		printf("Do you want to add another node..(y/n)\n");
		scanf(" %c",&ch);
	}
	while(ch=='y'||ch=='Y');
	print_data(headptr);
	printf("----------------------\n");
	reverse_link(&headptr);
	print_data(headptr);
	//print_data_rec(headptr);
	//print_data_reverse(headptr);
}

