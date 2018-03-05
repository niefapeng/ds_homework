#include<stdio.h>
#include<stdlib.h>
#include"../Include/list.h"

int Delete_head(List plist)
{
	if(plist==NULL && plist->next==NULL)
	{
		return 0;
	}

	Node*q;
	q = plist->next;
	plist->next = plist->next->next;
	free(q);
	return 1;
}
