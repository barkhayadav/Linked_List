#include<iostream>
using namespace std;

//removing duplicates

struct node
{
    int data;
    node*next;
};
int main()
{
    int a[]={10,20,20,35,40,40,50};
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
    node*p=head;
    p=p->next;
    node*q=head;
    while(p!=NULL)
    {
        if(p->data==q->data)
        {
            q->next=p->next;
            cout<<"The duplicate value is: "<<p->data<<endl;
            delete p;
            p=q->next;
        }
        q=p;
        p=p->next;
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

}