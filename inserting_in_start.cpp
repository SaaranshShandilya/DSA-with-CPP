#include<iostream>

using namespace std;

struct node{
    int num;
    node*next=NULL;
}*head=NULL,*temp=NULL,*ptr,*t;

int main(){
    int size=0, pos, counter;
    char ch='y';
    cout<<"Creating a linked list first..."<<endl;
    while(ch=='y'){
        ptr = new node;
        size++;
        cout<<"Enter the value:"<<endl;
        cin>>ptr->num;
        if(head==NULL){
            head=ptr;
            temp=ptr;
        }
        else{
            temp->next=ptr;
            temp=ptr;
        }
        cout<<"Do u want to insert more elements(y/n)?"<<endl;
        cin>>ch;
    }

    cout<<"Enter the element to be inserted"<<endl;
    ptr = new node;
    cin>>ptr->num;
    ptr->next=head;
    head=ptr;
    cout<<"Elemented inserted in beginning of list"<<endl;
    t=head;
    while(t!=NULL){
        cout<<t->num<<"\n";
        t=t->next;
    }
   
    
}