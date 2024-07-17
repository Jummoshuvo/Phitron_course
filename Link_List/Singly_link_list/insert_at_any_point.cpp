#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
int value;
Node*next;
Node(int val)
{
this->value=val;
this->next=NULL;
}
};
void insert_at_tail(Node* &head,int v)
{
    Node*newnode=new Node(v);
    if(head==NULL)
    {
      head=newnode;
      return;
    }
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void print_linklist(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
void insert_at_any_point(Node*head,int pos,int v)
{
    Node*newnode=new Node(v);
    Node*temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;

    }
    newnode->next=temp->next;
    temp->next=newnode;
}
int main()
{
Node*head=NULL;
int t;
cin>>t;
while(t--)
{
    int val;
    cin>>val;
    insert_at_tail(head,val);

}
int pos,val;
cin>>pos>>val;
insert_at_any_point(head,pos,val);

print_linklist(head);
}