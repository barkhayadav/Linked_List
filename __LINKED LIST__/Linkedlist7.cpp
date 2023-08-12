#include<iostream>
using namespace std;

//finding the element and placing it in the front(head position)

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
    int val;
    cout<<"Enter the item to switch the position to the head position: ";
    cin>>val;
    node*p=head;
    node*q=NULL;
    while(p!=NULL)
    {
        
        if(p->data==val)
        {
            q->next=p->next;
            p->next=head;
            head=p;
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
