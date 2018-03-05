#include<stdio.h>
#include"../Include/list.h"
Node* Find_val(List plist,int val)
{
	if(plist==NULL && plist->next==NULL)
	{
		return 0;
	}
	Node*p;
	for(p=plist->next;p!=NULL;p=p->next)
	{
		if(p->data == val)
		{
			return p;
		}
	}
	return 0;
}
