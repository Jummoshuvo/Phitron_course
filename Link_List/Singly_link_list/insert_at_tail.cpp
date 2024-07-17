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
print_linklist(head);
}