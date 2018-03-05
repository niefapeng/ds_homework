
typedef struct Node
{
	int data;
	struct Node*next;
}Node,*List;

int Initlist(List plist);
int Insert_head(List plist,int val);
int Insert_tail(List plist,int val);
int Insert_pos(List plist,int val,int pos);
int Delete_head(List plist);
int Delete_tail(List plist);
int Delete_pos(List plist,int pos);
Node* Find_val(List plist,int val);
Node* Reverse(List plist);
