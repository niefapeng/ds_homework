#include<stdio.h>
#include<stdlib.h>
#include"../Include/list.h"

int Delete_pos(List plist,int pos)
{
	if(plist==NULL || plist->next==NULL)
	{
		return 0;
	}

	Node*p;
	int i = 0;
	for(p=plist; p->next!=NULL&&i<pos; p=p->next,i++);
	if(i == pos)
	{
		Node*q;
		q = p->next;
		p->next = p->next->next;
		free(q);
		return 1;
	}
	else
	{
		return 0;
	}
}
