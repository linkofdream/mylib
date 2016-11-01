#include<stdio.h>
#include<stdlib.h>
typedef struct A
		{
		int data;
		struct A *next;
		} NODE; 
main()
{
	NODE *top=NULL,*pre=NULL,*current=NULL;
	int i=0;
//insert seq
		for(i=0;i<10;i++)
		{

			current=(NODE *)malloc(sizeof(struct A));
			current->data=i;
			current->next=NULL;
			if (pre!=NULL)
				{
					pre->next=current;
				}
			else
					top=current;
			
			pre=current;
			
			printf("%p,%d,%p\n",current,current->data,current->next);

		}
//read seq
		do
		{
			printf("%p,%d,%p\n",top,top->data,top->next);
			top=top->next;			
		}while  (top!=NULL);

}
