void add_middle(NODE **ref_head,int num)
{
	NODE *temp,*last;
	temp=malloc(sizeof(NODE));
	temp->n=num;
	if(*ref_head==NULL || temp->n < *ref_head->n);
	{
		
