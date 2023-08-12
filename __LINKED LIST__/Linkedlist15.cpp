#include<iostream>
#include<math.h>
using namespace std;

//finding the middle element of a linked list

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
    int count=0;
    node*p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        count++;
        p=p->next;
    }
    node*q=head;
    for(int i=0;i<ceil(count/2);i++)
    {
        q=q->next;
    }
    cout<<"\nThe middle element is: "<<q->data<<endl;
}