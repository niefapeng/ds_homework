#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"../Include/list.h"

int Insert_tail(List plist,int val)
{
	assert(plist!=NULL);
	if(plist == NULL)
	{
		return 0;
	}
	Node*q;
	q = (Node*)malloc(sizeof(Node));
	q->data = val;
	q->next = NULL;

	Node*p;
	for(p=plist;p->next!=NULL;p=p->next);
	q->next = p->next;
	p->next = q;

	return 1;
}
