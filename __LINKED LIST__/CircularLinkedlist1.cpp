#include<iostream>
using namespace std;

//printind a circular linked list

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
    node*p=head;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    } while (p!=head);
    
}


