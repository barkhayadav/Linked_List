#include<iostream>
using namespace std;

//finding maximum element in a linked list

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
    int max=0;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        if(p->data>max)
        {
            max=p->data;
        }
        p=p->next;
    }
    cout<<"\nThe maximum element in the linked list is: "<<max;
}