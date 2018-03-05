#include<stdio.h>
#include"../Include/list.h"
//insert head
Node* Reverse(List plist)
{
	if(plist==NULL || plist->next==NULL || plist->next->next==NULL)
	{
		return NULL;
	}
	Node*p;
	p = plist->next;
	plist->next = NULL;//only head node,no data

	Node*q;
	while(p!=NULL)
	{
		q = p->next;

		p->next = plist->next;
		plist->next = p;
		p = q;
	}
	return plist;
}
