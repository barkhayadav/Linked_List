#include<iostream>
using namespace std;

//reversing a linked list by using an array

struct node
{
    int data;
    node*next;
};
int main()
{
    int a[]={10,20,30,40,50};
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
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    int i=0;
    int *arr=new int[count];
    node*q=head;
    while(q!=NULL)
    {
        arr[i]=q->data;
        i++;
        q=q->next;
    }
    i--;
    node*t=head;
    while(t!=NULL)
    {
        t->data=a[i];
        i--;
        t=t->next;
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

}