#include<iostream>
using namespace std;

//deleting from a particular location

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
    cout<<"Enter the position to be deleted: ";
    cin>>pos;
    node*p=head;
    node*q=NULL;
    if(pos==1)
    {
        int val=p->data;
        p=p->next;
        head=p;
        cout<<"The deleted value is: "<<val<<endl;
    }
    else{
    for(int i=1;i<pos;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    int val=p->data;
    p->next=NULL;
    cout<<"The deleted value is: "<<val<<endl;
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}