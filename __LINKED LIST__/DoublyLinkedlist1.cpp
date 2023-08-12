#include<iostream>
using namespace std;

//displaying the elements of a doubly linked list

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
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}