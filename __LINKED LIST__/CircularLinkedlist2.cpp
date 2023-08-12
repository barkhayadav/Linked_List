#include<iostream>
using namespace std;

//inserting in a circular linked list (in the beginning plus anywhere in the list)

struct node
{
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
    tail=head;
    for(int i=1;i<n;i++)
    {
        temp=new node();
        temp->data=a[i];
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
    tail->next=head;
    int pos;
    cout<<"Enter the position where you want to insert: ";
    cin>>pos;
    int val;
    cout<<"Enter the value: ";
    cin>>val;
    node*p=new node();
    p->data=val;
    p->next=NULL;
    node*q=head;
    if(pos==1)
    {
        while(q->next!=head)
        {
            q=q->next;
        }
        q->next=p;
        p->next=head;
        head=p;
    }
    else{
    for(int i=1;i<pos-1;i++)
    {
        q=q->next;
    }
    p->next=q->next;
    q->next=p;
    }
    node*k=head;
    do{
        cout<<k->data<<" ";
        k=k->next;
    }while(k!=head);
    
}