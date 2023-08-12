#include<iostream>
using namespace std;

//concat two linked list

struct node
{
    int data;
    node*next;
};
int main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    int b[]={60,70,80,90,100};
    int m=sizeof(b)/sizeof(b[0]);
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
    node*second,*last;
    second=new node();
    second->data=b[0];
    second->next=NULL;
    last=second;
    for(int j=1;j<m;j++)
    {
        temp=new node();
        temp->data=b[j];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    node*p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=second;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}