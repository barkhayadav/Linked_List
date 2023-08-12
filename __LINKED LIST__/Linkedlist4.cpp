#include<iostream>
using namespace std;

//sum of all  the elements of a linked list

struct node
{
    int data;
    node*next;
};
int main()
{
  int a[]={10,20,30,40,50};
  int n=sizeof(a)/sizeof(a[0]);
  node *head,*temp,*tail;
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
  int sum=0;
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    sum+=head->data;
    head=head->next;
    
  }
  cout<<"\nThe sum of all the elements of the linked list is: "<<sum<<endl;

}