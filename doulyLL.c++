#include<iostream>
#include<stdlib.h>
using namespace std;
class linkedListDemo{
    class getNode
    {
    public:
        int data;
        getNode *right,*left;
        getNode(){
            right=NULL;
            left=NULL;
        }
    };
    public:
    getNode *head=NULL;
    void append(){
        int data;
        cout<<"enter the data : ";
        cin>>data;
        getNode *newnode = new getNode();
        newnode->data=data;
        if(head==NULL){
            head = newnode;
            cout<<"new node added."<<endl;
        }else{
            getNode *ptr;
            ptr=head;
            while(ptr->right!=NULL){
                ptr=ptr->right;
            }
            ptr->right=newnode;
            newnode->left=ptr;
            newnode->right=NULL;
            cout<<"New node connected";
        }
    }
    void addatbegin(){
        int data;
        cout<<"enter the data";
        cin>>data;
        getNode *newnode = new getNode();
        newnode->data=data;
        if(head==NULL){
            head=newnode;
            cout<<" newnode is created";
        }else{
            getNode *ptr;
            ptr=head;
            newnode->right=ptr;
            newnode->left=NULL;
            head=newnode;
            cout<<"new node is added"<<endl;
        }
    }
    void addatany(){
        int data,after;
        cout<<"enter the data";
        cin>>data;
        cout<<"enter the data after u want to insert";
        cin>>after;
        getNode *newnode = new getNode();
        newnode->data=data;
        
        if(head==NULL){
            head=newnode;
            cout<<" newnode is created";
        }else{
            getNode *ptr,*cur;
            ptr=head;
            while(ptr->right!=NULL){
                if(ptr->data==after){
                    break;
                }else{
                ptr=ptr->right;
                }
            }
             if (ptr->right == NULL)
            {
                cout << "Key not present";
            }
            else
            {
                cur = ptr->right;
                ptr->right = newnode;
                newnode->right = cur;
                newnode->left = ptr;
                cur->left=newnode;
            }

            cout<<"new node is added"<<endl;
        }
    }
    void display(){
        getNode *ptr;
        ptr=head;
        cout<<"\n";
       while(ptr!=NULL){
                cout<<ptr->data <<" -> ";
                ptr=ptr->right;
            }    
            cout<<" NULL"<<"\n";                         
    }
    void deleteatfirst(){
        getNode *ptr;
        ptr=head;
        if(ptr->right==NULL){
            cout<<"empty lisy";
        }else{
            head=head->right;
            ptr=head;
            ptr->left=NULL;
            free(ptr);
            cout<<"node deleted"<<endl;
        }
    }
    void deleteatlast(){
        getNode *ptr,*ptr1;
        ptr=head;
        ptr1=ptr;
        if(ptr->right==NULL){
            cout<<"empty lisy";
        }else{
            while(ptr->right != NULL){
                ptr1=ptr;
                ptr=ptr->right;
            }
            ptr1->right=NULL;
            
            free(ptr);
            cout<<"node deleted"<<endl;
        }
    }
    void deleteatany(){
        int key;
        cout<<"enter no u want to delete";
        cin>>key;
        getNode *ptr,*ptr1;
        ptr=head;
        ptr1=ptr;
        if(ptr->right==NULL){
            cout<<"empty lisy";
        }else{
            while(ptr->right != NULL){
                if (ptr->data==key){
                    break;
                }
                
                ptr1=ptr;
                ptr=ptr->right;
            }
            ptr1->right=ptr->right;
            
            free(ptr);
            cout<<"node deleted"<<endl;
        }
    }
};
int main(){
    linkedListDemo obj;
    int n;
    while (1)
    {
        cout<<"1 Add at last"<<endl;                             //static obj getnode obj;
        cout<<"2 ADD at first"<<endl;
        cout<<"3 ADD at any"<<endl;
        cout<<"4 Delete at first"<<endl;                              //dynamic obj getNode *obj = new getNode();
        cout<<"5 Delete at any"<<endl;                              //dynamic obj getNode *obj = new getNode;
        cout<<"6 Delete at last"<<endl;                             //dynamic obj getNode *obj = new getNode[5];
        cout<<"7 Display"<<endl;
        cout<<"8 Exit"<<endl;
        cout<<"select any choice"<<endl;
        cin>>n;
        switch(n){
            case 1: obj.append(); 
                break;
            case 2: obj.addatbegin();
                break;
            case 3: obj.addatany();
                break;
            case 4: obj.deleteatfirst();
                break;
            case 5: obj.deleteatany();
                break;
            case 6: obj.deleteatlast();
                break;
            case 7: obj.display();
                break;
            default : exit(0);
                break;
        } 
    }
}