#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include"../Include/list.h"

int Insert_head(List plist,int val)
{
	assert(plist!=NULL);
	if(plist == NULL)
	{
		return 0;
	}

	Node*p;
	p = (Node*)malloc(sizeof(Node));
	p->data = val;

	p->next = plist->next;
	plist->next = p;

	return 1;
}
