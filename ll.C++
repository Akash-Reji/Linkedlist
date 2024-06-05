#include<iostream>
using namespace std;

struct node{
        int data;
        struct node *link;
    };
    struct node *start,*current,*newnode;
    void reverse(){
    node *prev=NULL;
    node *next=NULL;
     current=start;  

    while(current->link!=NULL){
     next=current->link;   
     current->link=prev;
     prev=current;
     current=next;
    }
    current->link=prev;
    start=current;
    cout<<"Linked list has been reversed";
    }
int main() {
    struct node *next;
    int n,count=0;
    cout<<"enter the no of data want to insert: ";
    cin>>n;
    while (count!=n){
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter data:";
    cin>>newnode->data;
    newnode->link=NULL;
    if (start==NULL)
    {
        start=newnode;
        next=start;
        current=newnode;
    }else
    {
        current->link=newnode;
        current=newnode;
    }
    count++;
    }reverse();
    while (next!=NULL)
    {
        cout<<next->data<<"->";
        next=next->link;

    } 
    

}