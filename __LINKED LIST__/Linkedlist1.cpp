#include<iostream>
using namespace std;

//Taking input from the user and displaying the elements of a linked list

class node
{
    public:
    int data;
    node *next;
};
int main()
{
    int n;
    int val;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the head node: ";
    cin>>val;
    node *head=new node();
    head->data=val;
    head->next=NULL;
    node*p=head;
    cout<<"Enter the other data: ";
    for(int i=0;i<n;i++)
    {
        cin>>val;
        node *temp=new node();
        temp->data=val;
        p->next=temp;
        temp->next=NULL; 
        p=temp;
    }
    node*q=head;
    while(q!=NULL)
    {
        cout<<q->data<<" ";
        q=q->next;
    }   
}