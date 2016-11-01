#linkofdream@sina.com GNU
#include<stdio.h>
#include<stdlib.h>

typedef struct treenode {
		int data;
		struct treenode* lchild;
		struct treenode* rchild;
                	}node_t;

int  bt_insert(int x,node_t *BT)
	{
	
	
	node_t *p,*s;  //parent,son node;
	p=BT;	
	if (p==NULL)
		{
		printf("bt_root is required.\n");
		return 0;
		}
	else if (x<p->data)
		{
		if (p->lchild)
			bt_insert(x,p->lchild);
		else
			{
			node_t *tmp_p=malloc(sizeof(node_t));
        		tmp_p->data=x;
        		tmp_p->lchild=NULL;
        		tmp_p->rchild=NULL;
			p->lchild=tmp_p;
			}
                }	
	else if (x>p->data)
		{
		if (p->rchild)
			bt_insert(x,p->rchild);
		else
			{
                        node_t *tmp_p=malloc(sizeof(node_t));
                        tmp_p->data=x;
                        tmp_p->lchild=NULL;
                        tmp_p->rchild=NULL;			
                        p->rchild=tmp_p;
			}
		}
	else
		printf("Data already exsited!Do nothing\n");
		
	return 1;
	}

void pre_order(node_t *bt)
	{
	if(bt)
		{
		
		pre_order(bt->lchild);
		printf("%x,%d,%x,%x\n",bt,bt->data,bt->lchild,bt->rchild);
		pre_order(bt->rchild);
		}
	}
main()
{

node_t *bt,root;
root.data=100;
root.lchild=NULL;
root.rchild=NULL;
int i, x; 
bt=&root;
rewind(stdin);
scanf("%d",&x);
while (x!='q')
	{
	i=bt_insert(x,bt);
	scanf("%d",&x);
	}
pre_order(bt);

}

