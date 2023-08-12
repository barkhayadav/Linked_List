#include<iostream>
using namespace std;

//inserting in a sorted linked list 

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
    int val;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    node*p=new node();
    p->data=val;
    p->next=NULL;
    node*q=head;
    node*k=NULL;
    while(q!=NULL && q->data<val)
    {
        k=q;
        q=q->next;
    }
    p->next=q;
    k->next=p;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }


}