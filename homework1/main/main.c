#include<stdio.h>
#include"../Include/list.h"


int Initlist(List plist)
{
	if(plist == NULL)
	{
		return 0;
	}
	plist->next = NULL;
	return 1;
}
void Show(List plist)
{
	if(plist==NULL && plist->next==NULL)
	{
		return;
	}
	Node*p;
	for(p=plist->next; p!=NULL; p=p->next)
	{
		printf("%d,",p->data);
	}
	printf("\n");
}

int main()
{
	Node head;
	Initlist(&head);
	int i;
	for(i=0; i<5; i++)
	{
		Insert_tail(&head,i);
	}
	for(i =0; i<5; i++)
	{
		Insert_head(&head,i);
	}//4,3,2,1,0,0,1,2,3,4
	Show(&head);
	Insert_pos(&head,5,5);//4,3,2,1,5,0,0,1,2,3,4
	Show(&head);
	Delete_tail(&head);
	Delete_head(&head);
	Show(&head);//3,2,1,5,0,0,1,2,3
	Delete_pos(&head,5);
	Show(&head);//3,2,1,5,0,1,2,3
	
	Node*p;
	p = Find_val(&head,1);
	printf("%d\n",p->data);
	Reverse(&head);
	Show(&head);//3,2,1,0,5,1,2,3

	return 0;
}
