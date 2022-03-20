#include<iostream>

using namespace std;

struct node{
    int num;
    node*next=NULL;
}*head=NULL,*temp=NULL,*ptr,*t,*q;

int main(){
    int size=0, pos, counter=1;
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


    cout<<"Enter the position the element is to be deleted"<<endl;
    cin>>pos;
    t=head;
    for(int i=0; i<pos-2;i++){
        t=t->next;
    }
    ptr=t->next;
    t->next = ptr->next;
    delete ptr;
    t=head;
    while(t!=NULL){
        cout<<t->num<<"\n";
        t=t->next;
    }
}