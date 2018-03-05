#include<stdio.h>
#include<stdlib.h>
#include"../Include/list.h"
int Insert_pos(List plist,int val,int pos)
{
	Node*q;
	q = (Node*)malloc(sizeof(Node));
	q->data = val;
	q->next = NULL;
	
	Node*p;
	int count = 0;
	for(p=plist;p!=NULL&&count<pos;count++,p=p->next);
	if(count == pos)
	{
		q->next = p->next;
		p->next = q;
		return 1;
	}
	else
	{
		return 0;
	}
}
