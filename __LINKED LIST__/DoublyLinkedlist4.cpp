#include<iostream>
using namespace std;

//reversing a doubly linked list

struct node
{
    node*prev;
    int data;
    node*next;
};
int main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    node*head,*tail,*temp;
    head=new node();
    head->data=a[0];
    head->next=NULL;
    head->prev=NULL;
    tail=head;
    for(int i=1;i<n;i++)
    {
        temp=new node();
        temp->data=a[i];
        temp->prev=tail;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
    node*p=head;
    while(p!=NULL)
    {
        node*t=p->next;
        p->next=p->prev;
        p->prev=t;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
        {
            head=p;
        }
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}