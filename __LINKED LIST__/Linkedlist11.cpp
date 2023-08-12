#include<iostream>
using namespace std;

//checking if a linked list is sorted

struct node
{
    int data;
    node*next;
};
int main()
{
    int a[]={10,20,55,35,40,50};
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
    int flag=0;
    node*p=head;
    p=p->next;
    node*q=head;
    while(p!=NULL)
    {
        if(p->data<q->data)
        {
            flag=1;
            break;
        }
        q=p;
        p=p->next;
    }
    flag==0?cout<<"Sorted!": cout<<"Not sorted!";
}