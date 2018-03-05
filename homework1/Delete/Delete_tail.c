#include<stdio.h>
#include<stdlib.h>
#include"../Include/list.h"

int Delete_tail(List plist)
{
	if(plist==NULL || plist->next==NULL)
	{
		return 0;
	}

	Node*p;
	for(p=plist;p->next->next!=NULL;p=p->next);

	Node*q;
	q = p->next;
	p->next = NULL;
	free(q);
	return 1;
}
