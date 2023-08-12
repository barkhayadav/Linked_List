#include<iostream>
using namespace std;

//inserting at a particular location

struct node
{
    int data;
    node*next;
};
int main()
{
    int a[]={10,20,35,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    node*head,*temp,*tail;
    head=new node();
    head->data=a[0];
    head->next=NULL;
    tail=head;
    for(int i=1;i<n;i++)
    {
        temp=new node();
        temp->data=a[i];
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
    int pos;
    cout<<"Enter the position of the value to be inserted: ";
    cin>>pos;
    int val;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    node*p=new node();
    p->data=val;
    p->next=NULL;
    node*q=head;
    if(pos==1)
    {
        p->next=head;
        head=p;
    }
    else
    {
       for(int i=1;i<pos-1;i++)
       {
          q=q->next;
       }
       p->next=q->next;
       q->next=p;
    }
    node*k=head;
    while(k!=NULL)
    {
        cout<<k->data<<" ";
        k=k->next;
    }
}