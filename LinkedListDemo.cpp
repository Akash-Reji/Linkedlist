#include<iostream>
using namespace std;
class LinkedListDemo{
	class GetNode{
		public:
			int data;
			GetNode *next;
			GetNode(){
				next=NULL;
			}
	};
	
public:
	GetNode *head=NULL;
	
	void addAtEnd(){
		int data;
		cout<<"\n enter data:";
		cin>>data;
		GetNode *NewNode=new GetNode();
		NewNode->data=data;
		
		if(head==NULL){
			head=NewNode;
		}
		else{
			GetNode *ptr;
			ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
				ptr->next=NewNode;
           cout<<"new node is added";
		}
	}
	
	void addAtBegin(){
		int data;
		cout<<"\n enter data:";
		cin>>data;
		GetNode *NewNode=new GetNode();
		NewNode->data=data;
		
		if(head==NULL){
			head=NewNode;
		}
		else{
			GetNode *ptr;
			ptr=head;
			NewNode->next=ptr;
			head=NewNode;
           cout<<"new node is added";
		}
	}
	
	void specified(){
int data;
    int key;
    cout<<"enter the data:";
    cin>>data;
    GetNode *newnode=new GetNode();
    newnode->data=data;
    cout<<"enter data aftr newnode will ne added:";
    cin>>key;
    if(head==NULL){
        cout<<"linked list  not present.";
    }
    else{
        GetNode *ptr;
        ptr=head;
        while(ptr->next!=NULL){
            if(key==ptr->data){
                break;
            }
            else{
                ptr=ptr->next;
            }
        }
        if(ptr->next==NULL){
            cout<<"key not present";
        }
        else{
            GetNode *ptr1;
            ptr1=ptr->next;
            ptr->next=newnode;
            newnode->next=ptr1;
            cout<<"Node is added after key...."<<key;
        }
    }
	}
	
	
	void display(){
		GetNode *ptr;
		ptr=head;
		cout<<endl;
		while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
			cout<<"null";

}
};
int main(){
	int n;
	LinkedListDemo obj;
	while(1){
	cout<<"\n 1. addAtEnd";
	cout<<"\n 2. display";
	cout<<"\n 3. addAtBegin";
	cout<<"\n 4. append at specified position";
	cout<<"\n 0. Exit";
	cout<<"select your choice:";
	cin>>n;

	switch(n){
		case 1: obj.addAtEnd();
		break;
		case 2: obj.display();
		break;
		case 3: obj.addAtBegin();
		break;
		case 4: obj.specified();
		break;
		case 0: exit(0);
		break;
		default:
			cout<<"invalid choice";
	}
}
return 0;
}
