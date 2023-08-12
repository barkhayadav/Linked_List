#include<iostream>
using namespace std;

//inserting in a doubly linked list (at the first position plus anywhere in the list plus at the end of the list)

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
    head->prev=NULL;
    head->next=NULL;
    tail=head;
    for(int i=1;i<n;i++)
    {
        temp=new node();
        temp->data=a[i];
        temp->next=tail->next;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
    node*j=head;
    int count=0;
    while(j!=NULL)
    {
        count++;
        j=j->next;
    }
    int pos;
    cout<<"Enter the position where you want to insert: ";
    cin>>pos;
    int val;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    node*p=new node();
    p->data=val;
    p->prev=NULL;
    p->next=NULL;
    node*q=head;
    if(pos==1)
    {
        head->prev=p;
        p->next=head;
        head=p;
    }
    else if(pos>count)
    {
        node*i=head;
        while(i->next!=NULL)
        {
            i=i->next;
        }
        i->next=p;
        p->prev=i;
        p->next=NULL;
    }
    else
    {
        for(int i=1;i<pos;i++)
        {
            q=q->next;
        }
        p->next=q;
        p->prev=q->prev;
        q->prev->next=p;
        q->prev=p;
        
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}