#include<iostream>
using namespace std;

//deleting from a doubly linked list (the first node plus any other node in the list)

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
    int pos;
    cout<<"Enter the position to be deleted: ";
    cin>>pos;
    node*p=head;
    if(pos==1)
    {
        cout<<"The deleted value is: "<<p->data<<endl;
        delete p;
        p=p->next;
        head=p;
    }
    else
    {
        for(int i=1;i<pos;i++)
        {
            p=p->next;
        }
        cout<<"The deleted value is: "<<p->data<<endl;
        p->prev->next=p->next;
        delete p;
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}