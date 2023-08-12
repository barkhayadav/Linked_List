#include<iostream>
using namespace std;

//deleting in a circular linked list (the first node plus anywhere in the list)

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
    cout<<"Enter the position you want to delete: ";
    cin>>pos;
    node*p=head;
    node*q=NULL;
    if(pos==1)
    {
        while(p->next!=head)
        {
            p=p->next;
        }
        p->next=head->next;
        cout<<"The deleted item is: "<<head->data<<endl;
        delete head;
        head=p->next;
    }
    else{
    for(int i=1;i<pos;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    cout<<"The deleted item is "<<p->data<<endl;
    delete p;
    }
    node*k=head;
    do{
        cout<<k->data<<" ";
        k=k->next;
    }while(k!=head);
}